
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;
typedef int WORD ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2() {
    static char VAR_0 = 0;
    if (VAR_0 == 0) {
        WORD VAR_1;
        WSADATA VAR_2;
        VAR_1 = FUNC_0(1, 1);
        if (FUNC_1(VAR_1, &VAR_2) == 0) {
            VAR_0 = 1;
        }
    }
}
