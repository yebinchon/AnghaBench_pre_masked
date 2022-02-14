
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

int FUNC_5(const char *VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    int VAR_3, VAR_4;

    if (!VAR_0 || !VAR_1)
        return 0;

    VAR_4 = FUNC_3(VAR_0);
    while (*VAR_1) {
        int VAR_5 = '-' == *VAR_1;
        VAR_2 = FUNC_2(VAR_1, ',');
        if (!VAR_2)
            VAR_2 = VAR_1 + FUNC_3(VAR_1);
        VAR_1 += VAR_5;
        VAR_3 = FUNC_0(VAR_2 - VAR_1, VAR_4);
        if (!FUNC_1(VAR_0, VAR_1, VAR_3) || !FUNC_4("ALL", VAR_1, FUNC_0(3, VAR_2 - VAR_1)))
            return !VAR_5;
        VAR_1 = VAR_2 + (*VAR_2 == ',');
    }
    return 0;
}
