
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* input; float* workspace; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int size; int n; int h; int w; int c; int outputs; int batch; float* weights; int out_h; int out_w; int activation; scalar_t__ output; int biases; scalar_t__ batch_normalize; int pad; int stride; int out_c; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (scalar_t__,int ,int,int,int) ;
 int FUNC_2 (float*,int ,int,int,int,int ,int ,scalar_t__) ;
 int FUNC_3 (int,int ,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__ const,TYPE_1__) ;
 int FUNC_5 (int,int ,int,int,int,int,float*,int,float*,int,int ,float*,int) ;

void FUNC_6(const layer VAR_0, network VAR_1)
{
    int VAR_2;

    int VAR_3 = VAR_0.size*VAR_0.size*VAR_0.n;
    int VAR_4 = VAR_0.h*VAR_0.w;
    int VAR_5 = VAR_0.c;

    FUNC_3(VAR_0.outputs*VAR_0.batch, 0, VAR_0.output, 1);

    for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
        float *VAR_6 = VAR_0.weights;
        float *VAR_7 = VAR_1.input + VAR_2*VAR_0.c*VAR_0.h*VAR_0.w;
        float *VAR_8 = VAR_1.workspace;

        FUNC_5(1,0,VAR_3,VAR_4,VAR_5,1,VAR_6,VAR_3,VAR_7,VAR_4,0,VAR_8,VAR_4);

        FUNC_2(VAR_1.workspace, VAR_0.out_c, VAR_0.out_h, VAR_0.out_w, VAR_0.size, VAR_0.stride, VAR_0.pad, VAR_0.output+VAR_2*VAR_0.outputs);
    }
    if (VAR_0.batch_normalize) {
        FUNC_4(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0.output, VAR_0.biases, VAR_0.batch, VAR_0.n, VAR_0.out_w*VAR_0.out_h);
    }
    FUNC_0(VAR_0.output, VAR_0.batch*VAR_0.n*VAR_0.out_w*VAR_0.out_h, VAR_0.activation);
}
