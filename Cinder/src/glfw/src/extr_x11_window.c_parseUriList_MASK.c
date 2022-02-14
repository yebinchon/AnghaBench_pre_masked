
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__,int) ;
 char** FUNC_1 (char**,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,scalar_t__) ;
 char* FUNC_4 (char*,char*) ;
 char FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static char** FUNC_6(char* VAR_0, int* VAR_1)
{
    const char* VAR_2 = "file://";
    char** VAR_3 = ((void*)0);
    char* VAR_4;

    *VAR_1 = 0;

    while ((VAR_4 = FUNC_4(VAR_0, "\r\n")))
    {
        VAR_0 = ((void*)0);

        if (VAR_4[0] == '#')
            continue;

        if (FUNC_3(VAR_4, VAR_2, FUNC_2(VAR_2)) == 0)
            VAR_4 += FUNC_2(VAR_2);

        (*VAR_1)++;

        char* VAR_5 = FUNC_0(FUNC_2(VAR_4) + 1, 1);
        VAR_3 = FUNC_1(VAR_3, *VAR_1 * sizeof(char*));
        VAR_3[*VAR_1 - 1] = VAR_5;

        while (*VAR_4)
        {
            if (VAR_4[0] == '%' && VAR_4[1] && VAR_4[2])
            {
                const char VAR_6[3] = { VAR_4[1], VAR_4[2], '\0' };
                *VAR_5 = FUNC_5(VAR_6, ((void*)0), 16);
                VAR_4 += 2;
            }
            else
                *VAR_5 = *VAR_4;

            VAR_5++;
            VAR_4++;
        }
    }

    return VAR_3;
}
