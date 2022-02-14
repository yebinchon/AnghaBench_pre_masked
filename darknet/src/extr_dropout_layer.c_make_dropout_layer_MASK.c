
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float probability; int inputs; int outputs; int batch; int scale; int rand; int rand_gpu; int backward_gpu; int forward_gpu; int backward; int forward; int type; int member_0; } ;
typedef TYPE_1__ dropout_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,float,int,int) ;
 int VAR_5 ;

dropout_layer FUNC_3(int VAR_6, int VAR_7, float VAR_8)
{
    dropout_layer VAR_9 = {0};
    VAR_9.type = VAR_0;
    VAR_9.probability = VAR_8;
    VAR_9.inputs = VAR_7;
    VAR_9.outputs = VAR_7;
    VAR_9.batch = VAR_6;
    VAR_9.rand = FUNC_0(VAR_7*VAR_6, sizeof(float));
    VAR_9.scale = 1./(1.-VAR_8);
    VAR_9.forward = VAR_3;
    VAR_9.backward = VAR_1;





    FUNC_2(VAR_5, "dropout       p = %.2f               %4d  ->  %4d\n", VAR_8, VAR_7, VAR_7);
    return VAR_9;
}
