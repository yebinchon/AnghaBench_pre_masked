
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int,int) ;

void FUNC_4(int VAR_2, int VAR_3)
{
    char VAR_4[128] = { 0 };
    FUNC_1(VAR_4, "%s/taosnote", VAR_0);
    if (FUNC_3(VAR_4, VAR_2, VAR_3) < 0)
        FUNC_0(VAR_1, "failed to init note file\n");

    FUNC_2("==================================================");
    FUNC_2("===================  new note  ===================");
    FUNC_2("==================================================");
}
