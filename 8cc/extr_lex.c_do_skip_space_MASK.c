
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6() {
    int VAR_1 = FUNC_2();
    if (VAR_1 == VAR_0)
        return 0;
    if (FUNC_0(VAR_1))
        return 1;
    if (VAR_1 == '/') {
        if (FUNC_1('*')) {
            FUNC_3();
            return 1;
        }
        if (FUNC_1('/')) {
            FUNC_4();
            return 1;
        }
    }
    FUNC_5(VAR_1);
    return 0;
}
