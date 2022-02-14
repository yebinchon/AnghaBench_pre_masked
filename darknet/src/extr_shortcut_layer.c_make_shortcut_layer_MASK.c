
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int w; int h; int c; int out_w; int out_h; int out_c; int outputs; int inputs; int index; void* output; void* output_gpu; void* delta; void* delta_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
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

layer FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
    FUNC_2(VAR_5, "res  %3d                %4d x%4d x%4d   ->  %4d x%4d x%4d\n",VAR_7, VAR_11,VAR_12,VAR_13, VAR_8,VAR_9,VAR_10);
    layer VAR_14 = {0};
    VAR_14.type = VAR_0;
    VAR_14.batch = VAR_6;
    VAR_14.w = VAR_11;
    VAR_14.h = VAR_12;
    VAR_14.c = VAR_13;
    VAR_14.out_w = VAR_8;
    VAR_14.out_h = VAR_9;
    VAR_14.out_c = VAR_10;
    VAR_14.outputs = VAR_8*VAR_9*VAR_10;
    VAR_14.inputs = VAR_14.outputs;

    VAR_14.index = VAR_7;

    VAR_14.delta = FUNC_0(VAR_14.outputs*VAR_6, sizeof(float));
    VAR_14.output = FUNC_0(VAR_14.outputs*VAR_6, sizeof(float));;

    VAR_14.forward = VAR_3;
    VAR_14.backward = VAR_1;







    return VAR_14;
}
