
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

void FUNC_3(char *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3)
{
    char VAR_4[4096] = {0};
    char *VAR_5;

    FUNC_0(VAR_4, "%s", VAR_0);
    if(!(VAR_5 = FUNC_2(VAR_4, VAR_1))){
        FUNC_0(VAR_3, "%s", VAR_0);
        return;
    }

    *VAR_5 = '\0';

    FUNC_0(VAR_3, "%s%s%s", VAR_4, VAR_2, VAR_5+FUNC_1(VAR_1));
}
