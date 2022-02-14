
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* int32_t ;
struct TYPE_6__ {TYPE_1__* params; void* output_operand_index; void** input_operand_indexes; } ;
struct TYPE_5__ {void*** paddings; void* mode; } ;
typedef TYPE_1__ LayerPadParams ;
typedef TYPE_2__ Layer ;
typedef int AVIOContext ;


 TYPE_1__* FUNC_0 (int) ;
 void* FUNC_1 (int *) ;

int FUNC_2(Layer *VAR_0, AVIOContext *VAR_1, int VAR_2)
{
    LayerPadParams *VAR_3;
    int VAR_4 = 0;
    VAR_3 = FUNC_0(sizeof(*VAR_3));
    if (!VAR_3)
        return 0;

    VAR_3->mode = (int32_t)FUNC_1(VAR_1);
    VAR_4 += 4;
    for (int VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
        VAR_3->paddings[VAR_5][0] = FUNC_1(VAR_1);
        VAR_3->paddings[VAR_5][1] = FUNC_1(VAR_1);
        VAR_4 += 8;
    }
    VAR_0->input_operand_indexes[0] = (int32_t)FUNC_1(VAR_1);
    VAR_0->output_operand_index = (int32_t)FUNC_1(VAR_1);
    VAR_4 += 8;
    VAR_0->params = VAR_3;

    return VAR_4;
}
