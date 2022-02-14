
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* input; float* delta; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int outputs; int batch; float* delta; int inputs; float* weight_updates; float* weights; int bias_updates; scalar_t__ batch_normalize; int activation; int output; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (TYPE_2__,TYPE_1__) ;
 int FUNC_1 (int ,float*,int,int,int) ;
 int FUNC_2 (int,int ,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_3 (int ,int,int ,float*) ;

void FUNC_4(layer VAR_0, network VAR_1)
{
    FUNC_3(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation, VAR_0.delta);

    if(VAR_0.batch_normalize){
        FUNC_0(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.bias_updates, VAR_0.delta, VAR_0.batch, VAR_0.outputs, 1);
    }

    int VAR_2 = VAR_0.outputs;
    int VAR_3 = VAR_0.batch;
    int VAR_4 = VAR_0.inputs;
    float *VAR_5 = VAR_0.delta;
    float *VAR_6 = VAR_1.input;
    float *VAR_7 = VAR_0.weight_updates;
    FUNC_2(1,0,VAR_2,VAR_4,VAR_3,1,VAR_5,VAR_2,VAR_6,VAR_4,1,VAR_7,VAR_4);

    VAR_2 = VAR_0.batch;
    VAR_3 = VAR_0.outputs;
    VAR_4 = VAR_0.inputs;

    VAR_5 = VAR_0.delta;
    VAR_6 = VAR_0.weights;
    VAR_7 = VAR_1.delta;

    if(VAR_7) FUNC_2(0,0,VAR_2,VAR_4,VAR_3,1,VAR_5,VAR_3,VAR_6,VAR_4,1,VAR_7,VAR_4);
}
