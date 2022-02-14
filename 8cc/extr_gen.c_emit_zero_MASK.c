
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(int VAR_1) {
    VAR_0;
    for (; VAR_1 >= 8; VAR_1 -= 8) FUNC_0(".quad 0");
    for (; VAR_1 >= 4; VAR_1 -= 4) FUNC_0(".long 0");
    for (; VAR_1 > 0; VAR_1--) FUNC_0(".byte 0");
}
