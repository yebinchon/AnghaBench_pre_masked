
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, int VAR_1)
{
    char *VAR_2 = FUNC_3(VAR_0, "auth");
    char *VAR_3 = VAR_2 + FUNC_2("auth");

    if (VAR_2 && (!*VAR_3 || FUNC_0(*VAR_3) || *VAR_3 == ',') &&
        (VAR_2 == VAR_0 || FUNC_0(VAR_2[-1]) || VAR_2[-1] == ',')) {
        FUNC_1(VAR_0, "auth", VAR_1);
    } else {
        VAR_0[0] = 0;
    }
}
