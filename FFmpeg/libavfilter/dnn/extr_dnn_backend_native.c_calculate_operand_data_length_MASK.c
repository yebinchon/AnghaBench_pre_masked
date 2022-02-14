
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int* dims; } ;
typedef TYPE_1__ DnnOperand ;



int32_t FUNC_0(const DnnOperand* VAR_0)
{

    return VAR_0->dims[0] * VAR_0->dims[1] * VAR_0->dims[2] * VAR_0->dims[3] * sizeof(float);
}
