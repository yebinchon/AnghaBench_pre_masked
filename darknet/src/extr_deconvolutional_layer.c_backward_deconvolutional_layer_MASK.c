
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* input; float* workspace; float* delta; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int outputs; int batch; int n; int out_w; int out_h; int c; int size; int h; int w; float* weight_updates; float* weights; int pad; int stride; int out_c; scalar_t__ delta; int bias_updates; scalar_t__ batch_normalize; int activation; int output; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (TYPE_2__,TYPE_1__) ;
 int FUNC_1 (int ,scalar_t__,int,int,int) ;
 int FUNC_2 (int ,int,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_3 (int ,int,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int,int,int,int ,int ,float*) ;

void FUNC_5(layer VAR_0, network VAR_1)
{
    int VAR_2;

    FUNC_3(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation, VAR_0.delta);

    if(VAR_0.batch_normalize){
        FUNC_0(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.bias_updates, VAR_0.delta, VAR_0.batch, VAR_0.n, VAR_0.out_w*VAR_0.out_h);
    }



    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        int VAR_3 = VAR_0.c;
        int VAR_4 = VAR_0.size*VAR_0.size*VAR_0.n;
        int VAR_5 = VAR_0.h*VAR_0.w;

        float *VAR_6 = VAR_1.input + VAR_2*VAR_3*VAR_5;
        float *VAR_7 = VAR_1.workspace;
        float *VAR_8 = VAR_0.weight_updates;

        FUNC_4(VAR_0.delta + VAR_2*VAR_0.outputs, VAR_0.out_c, VAR_0.out_h, VAR_0.out_w,
                VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_7);
        FUNC_2(0,1,VAR_3,VAR_4,VAR_5,1,VAR_6,VAR_5,VAR_7,VAR_5,1,VAR_8,VAR_4);

        if(VAR_1.delta){
            int VAR_9 = VAR_0.c;
            int VAR_10 = VAR_0.h*VAR_0.w;
            int VAR_11 = VAR_0.size*VAR_0.size*VAR_0.n;

            float *VAR_12 = VAR_0.weights;
            float *VAR_13 = VAR_1.workspace;
            float *VAR_14 = VAR_1.delta + VAR_2*VAR_10*VAR_9;

            FUNC_2(0,0,VAR_9,VAR_10,VAR_11,1,VAR_12,VAR_11,VAR_13,VAR_10,1,VAR_14,VAR_10);
        }
    }
}
