
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(char *VAR_0, int VAR_1, char *VAR_2)
{
    char *VAR_3 = VAR_0;
    int VAR_4 = FUNC_0(VAR_2);
    int VAR_5 = 0;

    while (VAR_1-- > 0)
    {
        char VAR_6 = *VAR_3++;
        char VAR_7 = VAR_2[VAR_5];
        VAR_6 = VAR_6 >= 'A' && VAR_6 <= 'Z' ? VAR_6 | 0x60 : VAR_6;
        VAR_7 = VAR_7 >= 'A' && VAR_7 <= 'Z' ? VAR_7 | 0x60 : VAR_7;

        if (VAR_6 == VAR_7)
        {
            if (++VAR_5 == VAR_4)
                return (VAR_3 - VAR_0);
        }
        else
            VAR_5 = 0;
    }

    return -1;
}
