
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 size_t FUNC_2 (int*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

void FUNC_6(void) {
    int *VAR_0 = ((void*)0);
    FUNC_0(FUNC_2(VAR_0) == 0);
    int VAR_1 = 1024;
    for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_4(VAR_0, VAR_2);
    }
    FUNC_0(FUNC_2(VAR_0) == VAR_1);
    for (size_t VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++) {
        FUNC_0(VAR_0[VAR_3] == VAR_3);
    }
    FUNC_1(VAR_0);
    FUNC_0(VAR_0 == ((void*)0));
    FUNC_0(FUNC_2(VAR_0) == 0);
    char *VAR_4 = ((void*)0);
    FUNC_3(VAR_4, "One: %d\n", 1);
    FUNC_0(FUNC_5(VAR_4, "One: 1\n") == 0);
    FUNC_3(VAR_4, "Hex: 0x%x\n", 0x12345678);
    FUNC_0(FUNC_5(VAR_4, "One: 1\nHex: 0x12345678\n") == 0);
}
