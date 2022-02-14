
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float scale; int batch; int inputs; int outputs; void* delta; void* output_gpu; void* output; void* delta_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* cost; int cost_type; int type; int member_0; } ;
typedef TYPE_1__ cost_layer ;
typedef int COST_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_5 ;

cost_layer FUNC_3(int VAR_6, int VAR_7, COST_TYPE VAR_8, float VAR_9)
{
    FUNC_2(VAR_5, "cost                                           %4d\n", VAR_7);
    cost_layer VAR_10 = {0};
    VAR_10.type = VAR_0;

    VAR_10.scale = VAR_9;
    VAR_10.batch = VAR_6;
    VAR_10.inputs = VAR_7;
    VAR_10.outputs = VAR_7;
    VAR_10.cost_type = VAR_8;
    VAR_10.delta = FUNC_0(VAR_7*VAR_6, sizeof(float));
    VAR_10.output = FUNC_0(VAR_7*VAR_6, sizeof(float));
    VAR_10.cost = FUNC_0(1, sizeof(float));

    VAR_10.forward = VAR_3;
    VAR_10.backward = VAR_1;







    return VAR_10;
}
