
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* workspace; float* input; float* delta; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int n; int groups; int size; int c; int out_w; int out_h; int outputs; int batch; float* delta; float* weight_updates; int nweights; int h; int w; float* weights; int pad; int stride; int bias_updates; scalar_t__ batch_normalize; int activation; int output; } ;
typedef TYPE_2__ convolutional_layer ;


 int FUNC_0 (TYPE_2__,TYPE_1__) ;
 int FUNC_1 (int ,float*,int,int,int) ;
 int FUNC_2 (float*,int,int,int,int,int ,int ,float*) ;
 int FUNC_3 (int,int,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_4 (int ,int,int ,float*) ;
 int FUNC_5 (float*,int,int,int,int,int ,int ,float*) ;

void FUNC_6(convolutional_layer VAR_0, network VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = VAR_0.n/VAR_0.groups;
    int VAR_5 = VAR_0.size*VAR_0.size*VAR_0.c/VAR_0.groups;
    int VAR_6 = VAR_0.out_w*VAR_0.out_h;

    FUNC_4(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation, VAR_0.delta);

    if(VAR_0.batch_normalize){
        FUNC_0(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.bias_updates, VAR_0.delta, VAR_0.batch, VAR_0.n, VAR_6);
    }

    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.groups; ++VAR_3){
            float *VAR_7 = VAR_0.delta + (VAR_2*VAR_0.groups + VAR_3)*VAR_4*VAR_6;
            float *VAR_8 = VAR_1.workspace;
            float *VAR_9 = VAR_0.weight_updates + VAR_3*VAR_0.nweights/VAR_0.groups;

            float *VAR_10 = VAR_1.input + (VAR_2*VAR_0.groups + VAR_3)*VAR_0.c/VAR_0.groups*VAR_0.h*VAR_0.w;
            float *VAR_11 = VAR_1.delta + (VAR_2*VAR_0.groups + VAR_3)*VAR_0.c/VAR_0.groups*VAR_0.h*VAR_0.w;

            if(VAR_0.size == 1){
                VAR_8 = VAR_10;
            } else {
                FUNC_5(VAR_10, VAR_0.c/VAR_0.groups, VAR_0.h, VAR_0.w,
                        VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_8);
            }

            FUNC_3(0,1,VAR_4,VAR_5,VAR_6,1,VAR_7,VAR_6,VAR_8,VAR_6,1,VAR_9,VAR_5);

            if (VAR_1.delta) {
                VAR_7 = VAR_0.weights + VAR_3*VAR_0.nweights/VAR_0.groups;
                VAR_8 = VAR_0.delta + (VAR_2*VAR_0.groups + VAR_3)*VAR_4*VAR_6;
                VAR_9 = VAR_1.workspace;
                if (VAR_0.size == 1) {
                    VAR_9 = VAR_11;
                }

                FUNC_3(1,0,VAR_5,VAR_6,VAR_4,1,VAR_7,VAR_5,VAR_8,VAR_6,0,VAR_9,VAR_6);

                if (VAR_0.size != 1) {
                    FUNC_2(VAR_1.workspace, VAR_0.c/VAR_0.groups, VAR_0.h, VAR_0.w, VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_11);
                }
            }
        }
    }
}
