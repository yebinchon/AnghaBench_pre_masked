
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int h; int w; int c; int pad; int out_w; int out_h; int out_c; int outputs; int inputs; int size; int stride; void* delta; void* delta_gpu; void* output; void* output_gpu; int indexes_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* indexes; int type; int member_0; } ;
typedef TYPE_1__ maxpool_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int,int,int,int,int,int,int,int,int) ;
 int VAR_5 ;

maxpool_layer FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    maxpool_layer VAR_13 = {0};
    VAR_13.type = VAR_0;
    VAR_13.batch = VAR_6;
    VAR_13.h = VAR_7;
    VAR_13.w = VAR_8;
    VAR_13.c = VAR_9;
    VAR_13.pad = VAR_12;
    VAR_13.out_w = (VAR_8 + VAR_12 - VAR_10)/VAR_11 + 1;
    VAR_13.out_h = (VAR_7 + VAR_12 - VAR_10)/VAR_11 + 1;
    VAR_13.out_c = VAR_9;
    VAR_13.outputs = VAR_13.out_h * VAR_13.out_w * VAR_13.out_c;
    VAR_13.inputs = VAR_7*VAR_8*VAR_9;
    VAR_13.size = VAR_10;
    VAR_13.stride = VAR_11;
    int VAR_14 = VAR_13.out_h * VAR_13.out_w * VAR_13.out_c * VAR_6;
    VAR_13.indexes = FUNC_0(VAR_14, sizeof(int));
    VAR_13.output = FUNC_0(VAR_14, sizeof(float));
    VAR_13.delta = FUNC_0(VAR_14, sizeof(float));
    VAR_13.forward = VAR_3;
    VAR_13.backward = VAR_1;







    FUNC_3(VAR_5, "max          %d x %d / %d  %4d x%4d x%4d   ->  %4d x%4d x%4d\n", VAR_10, VAR_10, VAR_11, VAR_8, VAR_7, VAR_9, VAR_13.out_w, VAR_13.out_h, VAR_13.out_c);
    return VAR_13;
}
