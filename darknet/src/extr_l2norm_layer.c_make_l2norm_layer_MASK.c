
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int inputs; int outputs; void* delta; void* delta_gpu; void* output; void* scales_gpu; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* scales; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_5 ;

layer FUNC_3(int VAR_6, int VAR_7)
{
    FUNC_2(VAR_5, "l2norm                                         %4d\n", VAR_7);
    layer VAR_8 = {0};
    VAR_8.type = VAR_0;
    VAR_8.batch = VAR_6;
    VAR_8.inputs = VAR_7;
    VAR_8.outputs = VAR_7;
    VAR_8.output = FUNC_0(VAR_7*VAR_6, sizeof(float));
    VAR_8.scales = FUNC_0(VAR_7*VAR_6, sizeof(float));
    VAR_8.delta = FUNC_0(VAR_7*VAR_6, sizeof(float));

    VAR_8.forward = VAR_3;
    VAR_8.backward = VAR_1;
    return VAR_8;
}
