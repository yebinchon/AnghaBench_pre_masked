
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int h; int w; int inputs; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {int out_c; int out_h; int out_w; } ;
typedef TYPE_2__ dropout_layer ;


 TYPE_2__ FUNC_0 (int ,int ,float) ;
 float FUNC_1 (int *,char*,double) ;

dropout_layer FUNC_2(list *VAR_0, size_params VAR_1)
{
    float VAR_2 = FUNC_1(VAR_0, "probability", .5);
    dropout_layer VAR_3 = FUNC_0(VAR_1.batch, VAR_1.inputs, VAR_2);
    VAR_3.out_w = VAR_1.w;
    VAR_3.out_h = VAR_1.h;
    VAR_3.out_c = VAR_1.c;
    return VAR_3;
}
