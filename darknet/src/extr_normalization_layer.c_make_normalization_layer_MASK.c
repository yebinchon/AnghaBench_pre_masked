
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int h; int out_h; int w; int out_w; int c; int out_c; float kappa; int size; float alpha; float beta; int inputs; int outputs; void* norms; void* norms_gpu; void* squared; void* squared_gpu; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int VAR_5 ;

layer FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, float VAR_11, float VAR_12, float VAR_13)
{
    FUNC_2(VAR_5, "Local Response Normalization Layer: %d x %d x %d image, %d size\n", VAR_7,VAR_8,VAR_9,VAR_10);
    layer VAR_14 = {0};
    VAR_14.type = VAR_0;
    VAR_14.batch = VAR_6;
    VAR_14.h = VAR_14.out_h = VAR_8;
    VAR_14.w = VAR_14.out_w = VAR_7;
    VAR_14.c = VAR_14.out_c = VAR_9;
    VAR_14.kappa = VAR_13;
    VAR_14.size = VAR_10;
    VAR_14.alpha = VAR_11;
    VAR_14.beta = VAR_12;
    VAR_14.output = FUNC_0(VAR_8 * VAR_7 * VAR_9 * VAR_6, sizeof(float));
    VAR_14.delta = FUNC_0(VAR_8 * VAR_7 * VAR_9 * VAR_6, sizeof(float));
    VAR_14.squared = FUNC_0(VAR_8 * VAR_7 * VAR_9 * VAR_6, sizeof(float));
    VAR_14.norms = FUNC_0(VAR_8 * VAR_7 * VAR_9 * VAR_6, sizeof(float));
    VAR_14.inputs = VAR_7*VAR_8*VAR_9;
    VAR_14.outputs = VAR_14.inputs;

    VAR_14.forward = VAR_3;
    VAR_14.backward = VAR_1;
    return VAR_14;
}
