
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int* dims; } ;
typedef TYPE_1__ DnnOperand ;



int32_t FUNC_0(const DnnOperand *VAR_0)
{
    int32_t VAR_1 = 1;
    for (int VAR_2 = 0; VAR_2 < 4; ++VAR_2)
        VAR_1 *= VAR_0->dims[VAR_2];

    return VAR_1;
}
