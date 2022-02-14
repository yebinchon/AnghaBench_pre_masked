
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, int VAR_1) {
    char *VAR_2 = FUNC_2();
    FUNC_0(".data %d", VAR_1 + 1);
    FUNC_1(VAR_2);
    FUNC_0(".string \"%s\"", FUNC_3(VAR_0));
    FUNC_0(".data %d", VAR_1);
    FUNC_0(".quad %s", VAR_2);
}
