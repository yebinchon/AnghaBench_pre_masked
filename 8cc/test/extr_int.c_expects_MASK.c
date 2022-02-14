
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(short VAR_0, short VAR_1) {
    if (!(VAR_0 == VAR_1)) {
        FUNC_1("Failed\n");
        FUNC_1("  %d expected, but got %d\n", VAR_0, VAR_1);
        FUNC_0(1);
    }
}
