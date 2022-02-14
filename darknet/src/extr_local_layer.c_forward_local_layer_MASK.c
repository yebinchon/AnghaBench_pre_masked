
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* input; int workspace; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int batch; int outputs; float* output; int w; int h; int c; int size; float* weights; int n; int activation; int pad; int stride; int biases; } ;
typedef TYPE_2__ local_layer ;


 int FUNC_0 (float*,int,int ) ;
 int FUNC_1 (int,int ,int,float*,int) ;
 int FUNC_2 (int ,int ,int,int,int,int,float*,int,float*,int,int,float*,int) ;
 int FUNC_3 (float*,int,int,int,int,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__ const) ;
 int FUNC_5 (TYPE_2__ const) ;

void FUNC_6(const local_layer VAR_0, network VAR_1)
{
    int VAR_2 = FUNC_4(VAR_0);
    int VAR_3 = FUNC_5(VAR_0);
    int VAR_4, VAR_5;
    int VAR_6 = VAR_2 * VAR_3;

    for(VAR_4 = 0; VAR_4 < VAR_0.batch; ++VAR_4){
        FUNC_1(VAR_0.outputs, VAR_0.biases, 1, VAR_0.output + VAR_4*VAR_0.outputs, 1);
    }

    for(VAR_4 = 0; VAR_4 < VAR_0.batch; ++VAR_4){
        float *VAR_7 = VAR_1.input + VAR_4*VAR_0.w*VAR_0.h*VAR_0.c;
        FUNC_3(VAR_7, VAR_0.c, VAR_0.h, VAR_0.w,
                VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_1.workspace);
        float *VAR_8 = VAR_0.output + VAR_4*VAR_0.outputs;
        for(VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5){
            float *VAR_9 = VAR_0.weights + VAR_5*VAR_0.size*VAR_0.size*VAR_0.c*VAR_0.n;
            float *VAR_10 = VAR_1.workspace + VAR_5;
            float *VAR_11 = VAR_8 + VAR_5;

            int VAR_12 = VAR_0.n;
            int VAR_13 = 1;
            int VAR_14 = VAR_0.size*VAR_0.size*VAR_0.c;

            FUNC_2(0,0,VAR_12,VAR_13,VAR_14,1,VAR_9,VAR_14,VAR_10,VAR_6,1,VAR_11,VAR_6);
        }
    }
    FUNC_0(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation);
}
