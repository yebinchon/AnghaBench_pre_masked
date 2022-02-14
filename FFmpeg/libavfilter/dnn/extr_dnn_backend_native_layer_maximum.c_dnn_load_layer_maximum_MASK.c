
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* int32_t ;
struct TYPE_6__ {scalar_t__ u32; } ;
struct TYPE_8__ {TYPE_1__ val; } ;
struct TYPE_7__ {void* output_operand_index; void** input_operand_indexes; TYPE_3__* params; } ;
typedef TYPE_2__ Layer ;
typedef TYPE_3__ DnnLayerMaximumParams ;
typedef int AVIOContext ;


 TYPE_3__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(Layer *VAR_0, AVIOContext *VAR_1, int VAR_2)
{
    DnnLayerMaximumParams *VAR_3;
    int VAR_4 = 0;
    VAR_3 = FUNC_0(sizeof(*VAR_3));
    if (!VAR_3)
        return 0;

    VAR_3->val.u32 = FUNC_1(VAR_1);
    VAR_4 += 4;
    VAR_0->params = VAR_3;
    VAR_0->input_operand_indexes[0] = (int32_t)FUNC_1(VAR_1);
    VAR_0->output_operand_index = (int32_t)FUNC_1(VAR_1);
    VAR_4 += 8;

    return VAR_4;
}
