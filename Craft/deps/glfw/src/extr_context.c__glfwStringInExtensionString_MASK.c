
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;

int FUNC_2(const char* VAR_2, const char* VAR_3)
{
    const char* VAR_4 = VAR_3;

    for (;;)
    {
        const char* VAR_5;
        const char* VAR_6;

        VAR_5 = FUNC_1(VAR_4, VAR_2);
        if (!VAR_5)
            return VAR_0;

        VAR_6 = VAR_5 + FUNC_0(VAR_2);
        if (VAR_5 == VAR_4 || *(VAR_5 - 1) == ' ')
        {
            if (*VAR_6 == ' ' || *VAR_6 == '\0')
                break;
        }

        VAR_4 = VAR_6;
    }

    return VAR_1;
}
