
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drift; int count; int error_sum; int bias; } ;
typedef TYPE_1__ VlcState ;


 scalar_t__ FUNC_0 (int const) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static inline void FUNC_3(VlcState *const VAR_0, const int VAR_1)
{
    int VAR_2 = VAR_0->drift;
    int VAR_3 = VAR_0->count;
    VAR_0->error_sum += FUNC_0(VAR_1);
    VAR_2 += VAR_1;

    if (VAR_3 == 128) {
        VAR_3 >>= 1;
        VAR_2 >>= 1;
        VAR_0->error_sum >>= 1;
    }
    VAR_3++;

    if (VAR_2 <= -VAR_3) {
        VAR_0->bias = FUNC_1(VAR_0->bias - 1, -128);

        VAR_2 = FUNC_1(VAR_2 + VAR_3, -VAR_3 + 1);
    } else if (VAR_2 > 0) {
        VAR_0->bias = FUNC_2(VAR_0->bias + 1, 127);

        VAR_2 = FUNC_2(VAR_2 - VAR_3, 0);
    }

    VAR_0->drift = VAR_2;
    VAR_0->count = VAR_3;
}
