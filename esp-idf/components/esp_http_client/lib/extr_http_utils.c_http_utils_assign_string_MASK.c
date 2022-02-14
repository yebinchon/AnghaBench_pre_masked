
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;

char *FUNC_5(char **VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_2;
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    char *VAR_4 = *VAR_0;
    if (VAR_3 <= 0) {
        VAR_3 = FUNC_4(VAR_1);
    }
    if (VAR_4) {
        VAR_4 = FUNC_3(VAR_4, VAR_3 + 1);
        FUNC_1(VAR_4);
        VAR_4[VAR_3] = 0;
    } else {
        VAR_4 = FUNC_0(1, VAR_3 + 1);
        FUNC_1(VAR_4);
    }
    FUNC_2(VAR_4, VAR_1, VAR_3);
    *VAR_0 = VAR_4;
    return VAR_4;
}
