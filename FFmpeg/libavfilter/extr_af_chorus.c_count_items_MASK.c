
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, int *VAR_1)
{
    char *VAR_2;

    *VAR_1 = 1;
    for (VAR_2 = VAR_0; *VAR_2; VAR_2++) {
        if (*VAR_2 == '|')
            (*VAR_1)++;
    }

}
