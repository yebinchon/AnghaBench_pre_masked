
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(GLFWwindow *VAR_8, int VAR_9, int VAR_10, int VAR_11) {
    int VAR_12 = VAR_11 & (VAR_2 | VAR_3);
    int VAR_13 =
        FUNC_0(VAR_8, VAR_0) == VAR_1;
    if (VAR_10 != VAR_7) {
        return;
    }
    if (VAR_9 == VAR_4) {
        if (VAR_13) {
            if (VAR_12) {
                FUNC_5();
            }
            else {
                FUNC_2();
            }
        }
        else {
            FUNC_1(VAR_8, VAR_0, VAR_1);
        }
    }
    if (VAR_9 == VAR_6) {
        if (VAR_13) {
            if (VAR_12) {
                FUNC_3();
            }
            else {
                FUNC_5();
            }
        }
    }
    if (VAR_9 == VAR_5) {
        if (VAR_13) {
            FUNC_4();
        }
    }
}
