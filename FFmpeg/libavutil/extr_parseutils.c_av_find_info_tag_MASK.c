
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tag ;


 int FUNC_0 (char*,char const*) ;

int FUNC_1(char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
    const char *VAR_4;
    char VAR_5[128], *VAR_6;

    VAR_4 = VAR_3;
    if (*VAR_4 == '?')
        VAR_4++;
    for(;;) {
        VAR_6 = VAR_5;
        while (*VAR_4 != '\0' && *VAR_4 != '=' && *VAR_4 != '&') {
            if ((VAR_6 - VAR_5) < sizeof(VAR_5) - 1)
                *VAR_6++ = *VAR_4;
            VAR_4++;
        }
        *VAR_6 = '\0';
        VAR_6 = VAR_0;
        if (*VAR_4 == '=') {
            VAR_4++;
            while (*VAR_4 != '&' && *VAR_4 != '\0') {
                if ((VAR_6 - VAR_0) < VAR_1 - 1) {
                    if (*VAR_4 == '+')
                        *VAR_6++ = ' ';
                    else
                        *VAR_6++ = *VAR_4;
                }
                VAR_4++;
            }
        }
        *VAR_6 = '\0';
        if (!FUNC_0(VAR_5, VAR_2))
            return 1;
        if (*VAR_4 != '&')
            break;
        VAR_4++;
    }
    return 0;
}
