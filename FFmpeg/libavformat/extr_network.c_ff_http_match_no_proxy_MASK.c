
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2, *VAR_3;
    int VAR_4 = 0;
    if (!VAR_0)
        return 0;
    if (!VAR_1)
        return 0;
    VAR_2 = FUNC_1(VAR_0);
    if (!VAR_2)
        return 0;
    VAR_3 = VAR_2;
    while (VAR_3) {
        char *VAR_5, *VAR_6 = ((void*)0);
        VAR_3 += FUNC_4(VAR_3, " ,");
        VAR_5 = VAR_3 + FUNC_3(VAR_3, " ,");
        if (*VAR_5) {
            VAR_6 = VAR_5 + 1;
            *VAR_5 = '\0';
        }
        if (FUNC_2(VAR_3, VAR_1)) {
            VAR_4 = 1;
            break;
        }
        VAR_3 = VAR_6;
    }
    FUNC_0(VAR_2);
    return VAR_4;
}
