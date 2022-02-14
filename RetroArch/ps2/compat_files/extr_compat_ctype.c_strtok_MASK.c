
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

char *FUNC_1(char *VAR_0, const char *VAR_1)
{
    static char *VAR_2;
    static char *VAR_3;

    if (VAR_0 != ((void*)0))
        VAR_2 = VAR_0;
    else {
        if (*VAR_3 == 0)
            return 0;

        VAR_2 = VAR_3;
    }

    if (*VAR_2 == 0)
        return 0;


    while (FUNC_0(VAR_1, *VAR_2)) {



        VAR_2++;

        if (*VAR_2 == 0)
            return 0;
    }

    if (*VAR_2 == 0)
        return 0;

    VAR_3 = VAR_2;

    while (*VAR_3 != 0) {
        if (FUNC_0(VAR_1, *VAR_3)) {




            *VAR_3 = 0;
            VAR_3++;
            return VAR_2;
        }
        VAR_3++;
    }



    return VAR_2;
}
