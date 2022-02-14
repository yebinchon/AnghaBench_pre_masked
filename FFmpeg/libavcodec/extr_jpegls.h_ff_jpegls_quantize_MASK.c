
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int T3; int T2; int T1; int near; } ;
typedef TYPE_1__ JLSState ;



__attribute__((used)) static inline int FUNC_0(JLSState *VAR_0, int VAR_1)
{
    if (VAR_1 == 0)
        return 0;
    if (VAR_1 < 0) {
        if (VAR_1 <= -VAR_0->T3)
            return -4;
        if (VAR_1 <= -VAR_0->T2)
            return -3;
        if (VAR_1 <= -VAR_0->T1)
            return -2;
        if (VAR_1 < -VAR_0->near)
            return -1;
        return 0;
    } else {
        if (VAR_1 <= VAR_0->near)
            return 0;
        if (VAR_1 < VAR_0->T1)
            return 1;
        if (VAR_1 < VAR_0->T2)
            return 2;
        if (VAR_1 < VAR_0->T3)
            return 3;
        return 4;
    }
}
