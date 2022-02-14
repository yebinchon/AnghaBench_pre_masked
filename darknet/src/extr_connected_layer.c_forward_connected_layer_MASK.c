
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* input; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int outputs; int batch; float* output; int inputs; float* weights; int activation; int biases; scalar_t__ batch_normalize; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (float*,int,int ) ;
 int FUNC_1 (float*,int ,int,int,int) ;
 int FUNC_2 (int,int ,float*,int) ;
 int FUNC_3 (TYPE_2__,TYPE_1__) ;
 int FUNC_4 (int ,int,int,int,int,int,float*,int,float*,int,int,float*,int) ;

void FUNC_5(layer VAR_0, network VAR_1)
{
    FUNC_2(VAR_0.outputs*VAR_0.batch, 0, VAR_0.output, 1);
    int VAR_2 = VAR_0.batch;
    int VAR_3 = VAR_0.inputs;
    int VAR_4 = VAR_0.outputs;
    float *VAR_5 = VAR_1.input;
    float *VAR_6 = VAR_0.weights;
    float *VAR_7 = VAR_0.output;
    FUNC_4(0,1,VAR_2,VAR_4,VAR_3,1,VAR_5,VAR_3,VAR_6,VAR_3,1,VAR_7,VAR_4);
    if(VAR_0.batch_normalize){
        FUNC_3(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.output, VAR_0.biases, VAR_0.batch, VAR_0.outputs, 1);
    }
    FUNC_0(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation);
}
