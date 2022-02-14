
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* input; float* workspace; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int outputs; int batch; float* output; float* weights; int n; int c; int groups; int size; int h; int w; float* binary_input; int out_w; int out_h; int nweights; scalar_t__ xnor; scalar_t__ binary; int activation; int biases; scalar_t__ batch_normalize; int pad; int stride; int binary_weights; } ;
typedef TYPE_2__ convolutional_layer ;


 int FUNC_0 (float*,int,int ) ;
 int FUNC_1 (float*,int ,int,int,int) ;
 int FUNC_2 (float*,int,float*) ;
 int FUNC_3 (float*,int,int,int ) ;
 int FUNC_4 (int,int ,float*,int) ;
 int FUNC_5 (TYPE_2__,TYPE_1__) ;
 int FUNC_6 (int ,int ,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_7 (float*,int,int,int,int,int ,int ,float*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(convolutional_layer VAR_0, network VAR_1)
{
    int VAR_2, VAR_3;

    FUNC_4(VAR_0.outputs*VAR_0.batch, 0, VAR_0.output, 1);

    if(VAR_0.xnor){
        FUNC_3(VAR_0.weights, VAR_0.n, VAR_0.c/VAR_0.groups*VAR_0.size*VAR_0.size, VAR_0.binary_weights);
        FUNC_8(&VAR_0);
        FUNC_2(VAR_1.input, VAR_0.c*VAR_0.h*VAR_0.w*VAR_0.batch, VAR_0.binary_input);
        VAR_1.input = VAR_0.binary_input;
    }

    int VAR_4 = VAR_0.n/VAR_0.groups;
    int VAR_5 = VAR_0.size*VAR_0.size*VAR_0.c/VAR_0.groups;
    int VAR_6 = VAR_0.out_w*VAR_0.out_h;
    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.groups; ++VAR_3){
            float *VAR_7 = VAR_0.weights + VAR_3*VAR_0.nweights/VAR_0.groups;
            float *VAR_8 = VAR_1.workspace;
            float *VAR_9 = VAR_0.output + (VAR_2*VAR_0.groups + VAR_3)*VAR_6*VAR_4;
            float *VAR_10 = VAR_1.input + (VAR_2*VAR_0.groups + VAR_3)*VAR_0.c/VAR_0.groups*VAR_0.h*VAR_0.w;

            if (VAR_0.size == 1) {
                VAR_8 = VAR_10;
            } else {
                FUNC_7(VAR_10, VAR_0.c/VAR_0.groups, VAR_0.h, VAR_0.w, VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_8);
            }
            FUNC_6(0,0,VAR_4,VAR_6,VAR_5,1,VAR_7,VAR_5,VAR_8,VAR_6,1,VAR_9,VAR_6);
        }
    }

    if(VAR_0.batch_normalize){
        FUNC_5(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.output, VAR_0.biases, VAR_0.batch, VAR_0.n, VAR_0.out_h*VAR_0.out_w);
    }

    FUNC_0(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation);
    if(VAR_0.binary || VAR_0.xnor) FUNC_8(&VAR_0);
}
