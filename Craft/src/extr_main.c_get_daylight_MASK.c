
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,float) ;
 float FUNC_1 () ;

float FUNC_2() {
    float VAR_0 = FUNC_1();
    if (VAR_0 < 0.5) {
        float VAR_1 = (VAR_0 - 0.25) * 100;
        return 1 / (1 + FUNC_0(2, -VAR_1));
    }
    else {
        float VAR_2 = (VAR_0 - 0.85) * 100;
        return 1 - 1 / (1 + FUNC_0(2, -VAR_2));
    }
}
