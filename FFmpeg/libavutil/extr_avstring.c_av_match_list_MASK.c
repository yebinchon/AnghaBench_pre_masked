
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, char VAR_2)
{
    const char *VAR_3, *VAR_4;

    for (VAR_3 = VAR_0; VAR_3 && *VAR_3; ) {
        for (VAR_4 = VAR_1; VAR_4 && *VAR_4; ) {
            int VAR_5;
            for (VAR_5 = 0; VAR_3[VAR_5] == VAR_4[VAR_5] || (VAR_3[VAR_5]*VAR_4[VAR_5] == 0 && VAR_3[VAR_5]+VAR_4[VAR_5] == VAR_2); VAR_5++)
                if (VAR_5 && (!VAR_3[VAR_5] || VAR_3[VAR_5] == VAR_2))
                    return 1;
            VAR_4 = FUNC_0(VAR_4, VAR_2);
            VAR_4 += !!VAR_4;
        }
        VAR_3 = FUNC_0(VAR_3, VAR_2);
        VAR_3 += !!VAR_3;
    }

    return 0;
}
