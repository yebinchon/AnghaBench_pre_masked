
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* input; scalar_t__ delta; int workspace; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int out_w; int out_h; int outputs; int batch; float* delta; int w; int h; int c; int size; float* weight_updates; int n; float* weights; int pad; int stride; int bias_updates; int activation; int output; } ;
typedef TYPE_2__ local_layer ;


 int FUNC_0 (int,int,float*,int,int ,int) ;
 int FUNC_1 (int ,int,int,int,int,int ,int ,scalar_t__) ;
 int FUNC_2 (int,int,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_3 (int ,int,int ,float*) ;
 int FUNC_4 (float*,int,int,int,int,int ,int ,int ) ;

void FUNC_5(local_layer VAR_0, network VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = VAR_0.out_w*VAR_0.out_h;

    FUNC_3(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation, VAR_0.delta);

    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        FUNC_0(VAR_0.outputs, 1, VAR_0.delta + VAR_2*VAR_0.outputs, 1, VAR_0.bias_updates, 1);
    }

    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        float *VAR_5 = VAR_1.input + VAR_2*VAR_0.w*VAR_0.h*VAR_0.c;
        FUNC_4(VAR_5, VAR_0.c, VAR_0.h, VAR_0.w,
                VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_1.workspace);

        for(VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3){
            float *VAR_6 = VAR_0.delta + VAR_2*VAR_0.outputs + VAR_3;
            float *VAR_7 = VAR_1.workspace + VAR_3;
            float *VAR_8 = VAR_0.weight_updates + VAR_3*VAR_0.size*VAR_0.size*VAR_0.c*VAR_0.n;
            int VAR_9 = VAR_0.n;
            int VAR_10 = VAR_0.size*VAR_0.size*VAR_0.c;
            int VAR_11 = 1;

            FUNC_2(0,1,VAR_9,VAR_10,VAR_11,1,VAR_6,VAR_4,VAR_7,VAR_4,1,VAR_8,VAR_10);
        }

        if(VAR_1.delta){
            for(VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3){
                float *VAR_12 = VAR_0.weights + VAR_3*VAR_0.size*VAR_0.size*VAR_0.c*VAR_0.n;
                float *VAR_13 = VAR_0.delta + VAR_2*VAR_0.outputs + VAR_3;
                float *VAR_14 = VAR_1.workspace + VAR_3;

                int VAR_15 = VAR_0.size*VAR_0.size*VAR_0.c;
                int VAR_16 = 1;
                int VAR_17 = VAR_0.n;

                FUNC_2(1,0,VAR_15,VAR_16,VAR_17,1,VAR_12,VAR_15,VAR_13,VAR_4,0,VAR_14,VAR_4);
            }

            FUNC_1(VAR_1.workspace, VAR_0.c, VAR_0.h, VAR_0.w, VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_1.delta+VAR_2*VAR_0.c*VAR_0.h*VAR_0.w);
        }
    }
}
