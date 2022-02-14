
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int w; int h; int c; int out_w; int out_h; int out_c; int reverse; int stride; int outputs; int inputs; void* output; void* output_gpu; void* delta; void* delta_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int) ;
 int VAR_5 ;

layer FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    layer VAR_11 = {0};
    VAR_11.type = VAR_0;
    VAR_11.batch = VAR_6;
    VAR_11.w = VAR_7;
    VAR_11.h = VAR_8;
    VAR_11.c = VAR_9;
    VAR_11.out_w = VAR_7*VAR_10;
    VAR_11.out_h = VAR_8*VAR_10;
    VAR_11.out_c = VAR_9;
    if(VAR_10 < 0){
        VAR_10 = -VAR_10;
        VAR_11.reverse=1;
        VAR_11.out_w = VAR_7/VAR_10;
        VAR_11.out_h = VAR_8/VAR_10;
    }
    VAR_11.stride = VAR_10;
    VAR_11.outputs = VAR_11.out_w*VAR_11.out_h*VAR_11.out_c;
    VAR_11.inputs = VAR_11.w*VAR_11.h*VAR_11.c;
    VAR_11.delta = FUNC_0(VAR_11.outputs*VAR_6, sizeof(float));
    VAR_11.output = FUNC_0(VAR_11.outputs*VAR_6, sizeof(float));;

    VAR_11.forward = VAR_3;
    VAR_11.backward = VAR_1;







    if(VAR_11.reverse) FUNC_2(VAR_5, "downsample         %2dx  %4d x%4d x%4d   ->  %4d x%4d x%4d\n", VAR_10, VAR_7, VAR_8, VAR_9, VAR_11.out_w, VAR_11.out_h, VAR_11.out_c);
    else FUNC_2(VAR_5, "upsample           %2dx  %4d x%4d x%4d   ->  %4d x%4d x%4d\n", VAR_10, VAR_7, VAR_8, VAR_9, VAR_11.out_w, VAR_11.out_h, VAR_11.out_c);
    return VAR_11;
}
