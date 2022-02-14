
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* tap; int normalize; } ;
typedef TYPE_1__ filter_param_t ;


 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(filter_param_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{

    int VAR_7 = 0;

    VAR_7 += VAR_2 * VAR_1->tap[0];
    VAR_7 += VAR_3 * VAR_1->tap[1];
    VAR_7 += VAR_4 * VAR_1->tap[2];
    VAR_7 += VAR_5 * VAR_1->tap[3];
    VAR_7 += VAR_6 * VAR_1->tap[4];
    VAR_7 >>= VAR_1->normalize;

    VAR_7 = VAR_0[VAR_7 + 1024];
    return VAR_7;
}
