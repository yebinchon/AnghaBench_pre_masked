
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;



 scalar_t__ FUNC_1 (int) ;

int FUNC_2(int VAR_0) {
    if (VAR_0 == 130) {
        return 1;
    }
    VAR_0 = FUNC_0(VAR_0);
    if (FUNC_1(VAR_0)) {
        return 1;
    }
    switch (VAR_0) {
        case 130:
        case 129:
        case 128:
            return 1;
        default:
            return 0;
    }
}
