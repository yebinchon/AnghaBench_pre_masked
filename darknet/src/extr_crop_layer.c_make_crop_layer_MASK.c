
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int h; int w; int c; float scale; int flip; float angle; float saturation; float exposure; int out_w; int out_h; int out_c; int inputs; int outputs; void* rand_gpu; int output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ crop_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int,int,int) ;
 int VAR_5 ;

crop_layer FUNC_3(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, float VAR_13, float VAR_14, float VAR_15)
{
    FUNC_2(VAR_5, "Crop Layer: %d x %d -> %d x %d x %d image\n", VAR_7,VAR_8,VAR_10,VAR_11,VAR_9);
    crop_layer VAR_16 = {0};
    VAR_16.type = VAR_0;
    VAR_16.batch = VAR_6;
    VAR_16.h = VAR_7;
    VAR_16.w = VAR_8;
    VAR_16.c = VAR_9;
    VAR_16.scale = (float)VAR_10 / VAR_7;
    VAR_16.flip = VAR_12;
    VAR_16.angle = VAR_13;
    VAR_16.saturation = VAR_14;
    VAR_16.exposure = VAR_15;
    VAR_16.out_w = VAR_11;
    VAR_16.out_h = VAR_10;
    VAR_16.out_c = VAR_9;
    VAR_16.inputs = VAR_16.w * VAR_16.h * VAR_16.c;
    VAR_16.outputs = VAR_16.out_w * VAR_16.out_h * VAR_16.out_c;
    VAR_16.output = FUNC_0(VAR_16.outputs*VAR_6, sizeof(float));
    VAR_16.forward = VAR_3;
    VAR_16.backward = VAR_1;







    return VAR_16;
}
