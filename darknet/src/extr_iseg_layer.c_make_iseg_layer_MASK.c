
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; int out_w; int out_h; int out_c; int classes; int batch; int extra; int outputs; int inputs; int truths; void* delta; void* delta_gpu; void* output; void* output_gpu; int backward_gpu; int forward_gpu; int backward; int forward; void** sums; void* counts; void* cost; int type; int member_0; } ;
typedef TYPE_1__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

layer FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    layer VAR_11 = {0};
    VAR_11.type = VAR_0;

    VAR_11.h = VAR_8;
    VAR_11.w = VAR_7;
    VAR_11.c = VAR_9 + VAR_10;
    VAR_11.out_w = VAR_11.w;
    VAR_11.out_h = VAR_11.h;
    VAR_11.out_c = VAR_11.c;
    VAR_11.classes = VAR_9;
    VAR_11.batch = VAR_6;
    VAR_11.extra = VAR_10;
    VAR_11.cost = FUNC_0(1, sizeof(float));
    VAR_11.outputs = VAR_8*VAR_7*VAR_11.c;
    VAR_11.inputs = VAR_11.outputs;
    VAR_11.truths = 90*(VAR_11.w*VAR_11.h+1);
    VAR_11.delta = FUNC_0(VAR_6*VAR_11.outputs, sizeof(float));
    VAR_11.output = FUNC_0(VAR_6*VAR_11.outputs, sizeof(float));

    VAR_11.counts = FUNC_0(90, sizeof(int));
    VAR_11.sums = FUNC_0(90, sizeof(float*));
    if(VAR_10){
        int VAR_12;
        for(VAR_12 = 0; VAR_12 < 90; ++VAR_12){
            VAR_11.sums[VAR_12] = FUNC_0(VAR_10, sizeof(float));
        }
    }

    VAR_11.forward = VAR_3;
    VAR_11.backward = VAR_1;







    FUNC_2(VAR_5, "iseg\n");
    FUNC_3(0);

    return VAR_11;
}
