
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2) {
        VAR_2 += FUNC_1(VAR_1);
        char *VAR_3 = FUNC_2(VAR_2, "\r\n");
        if (VAR_3) {
            VAR_3[0] = 0;

            return FUNC_3(VAR_2);
        }
    }
    return ((void*)0);
}
