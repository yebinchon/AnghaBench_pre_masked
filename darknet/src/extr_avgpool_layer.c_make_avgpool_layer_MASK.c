
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int h; int w; int c; int out_w; int out_h; int out_c; int outputs; int inputs; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ avgpool_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int VAR_5 ;

avgpool_layer FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    FUNC_2(VAR_5, "avg                     %4d x%4d x%4d   ->  %4d\n", VAR_7, VAR_8, VAR_9, VAR_9);
    avgpool_layer VAR_10 = {0};
    VAR_10.type = VAR_0;
    VAR_10.batch = VAR_6;
    VAR_10.h = VAR_8;
    VAR_10.w = VAR_7;
    VAR_10.c = VAR_9;
    VAR_10.out_w = 1;
    VAR_10.out_h = 1;
    VAR_10.out_c = VAR_9;
    VAR_10.outputs = VAR_10.out_c;
    VAR_10.inputs = VAR_8*VAR_7*VAR_9;
    int VAR_11 = VAR_10.outputs * VAR_6;
    VAR_10.output = FUNC_0(VAR_11, sizeof(float));
    VAR_10.delta = FUNC_0(VAR_11, sizeof(float));
    VAR_10.forward = VAR_3;
    VAR_10.backward = VAR_1;






    return VAR_10;
}
