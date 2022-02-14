
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*) ;

char *FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_4(VAR_0, VAR_1);
    char *VAR_4 = ((void*)0);
    if (VAR_3) {
        VAR_3 += FUNC_3(VAR_1);
        char *VAR_5 = FUNC_4(VAR_3, VAR_2);
        if (VAR_5) {
            VAR_4 = FUNC_0(1, VAR_5 - VAR_3 + 1);
            FUNC_1(VAR_4);
            FUNC_2(VAR_4, VAR_3, VAR_5 - VAR_3);
            return VAR_4;
        }
    }
    return ((void*)0);
}
