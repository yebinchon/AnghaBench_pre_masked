
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int batch; int inputs; int classes; int coords; int rescore; int side; int w; int h; int outputs; int truths; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void* cost; int type; int member_0; } ;
typedef TYPE_1__ detection_layer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

detection_layer FUNC_5(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    detection_layer VAR_13 = {0};
    VAR_13.type = VAR_0;

    VAR_13.n = VAR_8;
    VAR_13.batch = VAR_6;
    VAR_13.inputs = VAR_7;
    VAR_13.classes = VAR_10;
    VAR_13.coords = VAR_11;
    VAR_13.rescore = VAR_12;
    VAR_13.side = VAR_9;
    VAR_13.w = VAR_9;
    VAR_13.h = VAR_9;
    FUNC_0(VAR_9*VAR_9*((1 + VAR_13.coords)*VAR_13.n + VAR_13.classes) == VAR_7);
    VAR_13.cost = FUNC_1(1, sizeof(float));
    VAR_13.outputs = VAR_13.inputs;
    VAR_13.truths = VAR_13.side*VAR_13.side*(1+VAR_13.coords+VAR_13.classes);
    VAR_13.output = FUNC_1(VAR_6*VAR_13.outputs, sizeof(float));
    VAR_13.delta = FUNC_1(VAR_6*VAR_13.outputs, sizeof(float));

    VAR_13.forward = VAR_3;
    VAR_13.backward = VAR_1;







    FUNC_3(VAR_5, "Detection Layer\n");
    FUNC_4(0);

    return VAR_13;
}
