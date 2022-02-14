
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* biases; TYPE_1__* kernel; } ;
struct TYPE_6__ {size_t layers_num; scalar_t__ type; size_t operands_num; struct TYPE_6__* output_indexes; struct TYPE_6__* operands; struct TYPE_6__* data; struct TYPE_6__* layers; struct TYPE_6__* params; scalar_t__ model; } ;
typedef TYPE_1__ DNNModel ;
typedef TYPE_2__ ConvolutionalParams ;
typedef TYPE_1__ ConvolutionalNetwork ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(DNNModel **VAR_1)
{
    ConvolutionalNetwork *VAR_2;
    ConvolutionalParams *VAR_3;
    int32_t VAR_4;

    if (*VAR_1)
    {
        VAR_2 = (ConvolutionalNetwork *)(*VAR_1)->model;
        for (VAR_4 = 0; VAR_4 < VAR_2->layers_num; ++VAR_4){
            if (VAR_2->layers[VAR_4].type == VAR_0){
                VAR_3 = (ConvolutionalParams *)VAR_2->layers[VAR_4].params;
                FUNC_0(&VAR_3->kernel);
                FUNC_0(&VAR_3->biases);
            }
            FUNC_0(&VAR_2->layers[VAR_4].params);
        }
        FUNC_0(&VAR_2->layers);

        for (uint32_t VAR_5 = 0; VAR_5 < VAR_2->operands_num; ++VAR_5)
            FUNC_0(&VAR_2->operands[VAR_5].data);
        FUNC_0(&VAR_2->operands);

        FUNC_0(&VAR_2->output_indexes);
        FUNC_0(&VAR_2);
        FUNC_0(VAR_1);
    }
}
