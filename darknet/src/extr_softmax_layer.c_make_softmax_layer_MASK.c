
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int batch; int groups; int inputs; int outputs; void* delta; void* delta_gpu; void* loss; void* loss_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* cost; int type; int member_0; } ;
typedef TYPE_1__ softmax_layer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;

softmax_layer FUNC_4(int VAR_6, int VAR_7, int VAR_8)
{
    FUNC_0(VAR_7%VAR_8 == 0);
    FUNC_3(VAR_5, "softmax                                        %4d\n", VAR_7);
    softmax_layer VAR_9 = {0};
    VAR_9.type = VAR_0;
    VAR_9.batch = VAR_6;
    VAR_9.groups = VAR_8;
    VAR_9.inputs = VAR_7;
    VAR_9.outputs = VAR_7;
    VAR_9.loss = FUNC_1(VAR_7*VAR_6, sizeof(float));
    VAR_9.output = FUNC_1(VAR_7*VAR_6, sizeof(float));
    VAR_9.delta = FUNC_1(VAR_7*VAR_6, sizeof(float));
    VAR_9.cost = FUNC_1(1, sizeof(float));

    VAR_9.forward = VAR_3;
    VAR_9.backward = VAR_1;
    return VAR_9;
}
