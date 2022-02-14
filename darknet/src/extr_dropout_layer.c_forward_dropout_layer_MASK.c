
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * input; int train; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int batch; int inputs; float* rand; float probability; int scale; } ;
typedef TYPE_2__ dropout_layer ;


 float FUNC_0 (int ,int) ;

void FUNC_1(dropout_layer VAR_0, network VAR_1)
{
    int VAR_2;
    if (!VAR_1.train) return;
    for(VAR_2 = 0; VAR_2 < VAR_0.batch * VAR_0.inputs; ++VAR_2){
        float VAR_3 = FUNC_0(0, 1);
        VAR_0.rand[VAR_2] = VAR_3;
        if(VAR_3 < VAR_0.probability) VAR_1.input[VAR_2] = 0;
        else VAR_1.input[VAR_2] *= VAR_0.scale;
    }
}
