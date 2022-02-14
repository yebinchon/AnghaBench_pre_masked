
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inputs; int outputs; int batch; int activation; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ layer ;
typedef int ACTIVATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_5 ;

layer FUNC_3(int VAR_6, int VAR_7, ACTIVATION VAR_8)
{
    layer VAR_9 = {0};
    VAR_9.type = VAR_0;

    VAR_9.inputs = VAR_7;
    VAR_9.outputs = VAR_7;
    VAR_9.batch=VAR_6;

    VAR_9.output = FUNC_0(VAR_6*VAR_7, sizeof(float*));
    VAR_9.delta = FUNC_0(VAR_6*VAR_7, sizeof(float*));

    VAR_9.forward = VAR_3;
    VAR_9.backward = VAR_1;







    VAR_9.activation = VAR_8;
    FUNC_2(VAR_5, "Activation Layer: %d inputs\n", VAR_7);
    return VAR_9;
}
