
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5() {
    for (;;) {
        int VAR_2 = FUNC_1();
        if (VAR_2 == VAR_0) {
            if (FUNC_3(VAR_1) == 1)
                return VAR_2;
            FUNC_0(FUNC_4(VAR_1));
            continue;
        }
        if (VAR_2 != '\\')
            return VAR_2;
        int VAR_3 = FUNC_1();
        if (VAR_3 == '\n')
            continue;
        FUNC_2(VAR_3);
        return VAR_2;
    }
}
