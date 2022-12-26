#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void decimaltobinary(int x);

int main(void)
{
	char name[30];
	int i, len;
	system("cls");
	printf("Enter your name to convert to ASCII and binary: ");
	gets(name);
	printf("Your name in ASCII: ");
	for (i = 0, len = strlen(name); i < len; i++)
        {
            if (isspace(name[i]))
            {
                printf("  ");
            }
            else if (isalpha(name[i]))
            {
				printf("%d ", name[i]);
            }
	}
    printf("\n");
	printf("Your name in binary: ");
	for (i = 0, len = strlen(name); i < len; i++)
	{
		if (isspace(name[i]))
		{
			printf("  ");
		}
		else if (isalpha(name[i]))
		{
			decimaltobinary((int)name[i]);
			printf(" ");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

void decimaltobinary(int x)
{
	int i;
	int rem[8];
	int r;
	for (i = 0; x > 0; i++)
	{
		rem[i] = x % 2;
		x = x / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", rem[i]);
	}
}
