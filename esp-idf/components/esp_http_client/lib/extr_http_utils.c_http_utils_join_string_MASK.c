
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1 > 0 ? VAR_1 : FUNC_3(VAR_0);
    int VAR_5 = VAR_3 > 0 ? VAR_3 : FUNC_3(VAR_2);
    char *VAR_6 = ((void*)0);
    if (VAR_4 + VAR_5 > 0) {
        VAR_6 = FUNC_0(1, VAR_4 + VAR_5 + 1);
        FUNC_1(VAR_6);
        FUNC_2(VAR_6, VAR_0, VAR_4);
        FUNC_2(VAR_6 + VAR_4, VAR_2, VAR_5);
    }
    return VAR_6;
}
