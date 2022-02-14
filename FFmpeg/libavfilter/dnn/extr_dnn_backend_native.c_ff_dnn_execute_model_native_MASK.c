
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_15__ {int (* pf_exec ) (TYPE_2__*,int ,int ,int ) ;} ;
struct TYPE_14__ {scalar_t__ layers_num; scalar_t__ operands_num; size_t* output_indexes; TYPE_2__* operands; TYPE_1__* layers; int nb_output; } ;
struct TYPE_13__ {int dt; int channels; int width; int height; int data; } ;
struct TYPE_12__ {scalar_t__ model; } ;
struct TYPE_11__ {int data_type; int * dims; int data; } ;
struct TYPE_10__ {size_t type; int params; int output_operand_index; int input_operand_indexes; } ;
typedef TYPE_2__ DnnOperand ;
typedef int DNNReturnType ;
typedef TYPE_3__ DNNModel ;
typedef size_t DNNLayerType ;
typedef TYPE_4__ DNNData ;
typedef TYPE_5__ ConvolutionalNetwork ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

DNNReturnType FUNC_2(const DNNModel *VAR_3, DNNData *VAR_4, uint32_t VAR_5)
{
    ConvolutionalNetwork *VAR_6 = (ConvolutionalNetwork *)VAR_3->model;
    int32_t VAR_7;
    uint32_t VAR_8 = FUNC_0(VAR_5, VAR_6->nb_output);

    if (VAR_6->layers_num <= 0 || VAR_6->operands_num <= 0)
        return VAR_0;
    if (!VAR_6->operands[0].data)
        return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_6->layers_num; ++VAR_7){
        DNNLayerType VAR_9 = VAR_6->layers[VAR_7].type;
        VAR_2[VAR_9].pf_exec(VAR_6->operands,
                                  VAR_6->layers[VAR_7].input_operand_indexes,
                                  VAR_6->layers[VAR_7].output_operand_index,
                                  VAR_6->layers[VAR_7].params);
    }

    for (uint32_t VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
        DnnOperand *VAR_11 = &VAR_6->operands[VAR_6->output_indexes[VAR_10]];
        VAR_4[VAR_10].data = VAR_11->data;
        VAR_4[VAR_10].height = VAR_11->dims[1];
        VAR_4[VAR_10].width = VAR_11->dims[2];
        VAR_4[VAR_10].channels = VAR_11->dims[3];
        VAR_4[VAR_10].dt = VAR_11->data_type;
    }

    return VAR_1;
}
