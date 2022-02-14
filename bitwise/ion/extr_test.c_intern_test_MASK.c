
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

void FUNC_3(void) {
    char VAR_0[] = "hello";
    FUNC_0(FUNC_2(VAR_0, FUNC_1(VAR_0)) == 0);
    FUNC_0(FUNC_1(VAR_0) == FUNC_1(VAR_0));
    FUNC_0(FUNC_1(FUNC_1(VAR_0)) == FUNC_1(VAR_0));
    char VAR_1[] = "hello";
    FUNC_0(VAR_0 != VAR_1);
    FUNC_0(FUNC_1(VAR_0) == FUNC_1(VAR_1));
    char VAR_2[] = "hello!";
    FUNC_0(FUNC_1(VAR_0) != FUNC_1(VAR_2));
    char VAR_3[] = "hell";
    FUNC_0(FUNC_1(VAR_0) != FUNC_1(VAR_3));
}
