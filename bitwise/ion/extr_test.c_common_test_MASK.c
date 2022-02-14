
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,...) ;

void FUNC_6(void) {
    FUNC_1();
    FUNC_2();
    FUNC_3();

    char *VAR_0 = FUNC_5("%d %d", 1, 2);
    FUNC_0(FUNC_4(VAR_0, "1 2") == 0);
    char *VAR_1 = FUNC_5("%s %s", VAR_0, VAR_0);
    FUNC_0(FUNC_4(VAR_1, "1 2 1 2") == 0);
    char *VAR_2 = FUNC_5("%s asdf %s", VAR_1, VAR_1);
    FUNC_0(FUNC_4(VAR_2, "1 2 1 2 asdf 1 2 1 2") == 0);
}
