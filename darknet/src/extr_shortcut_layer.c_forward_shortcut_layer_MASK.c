
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* layers; int input; } ;
typedef TYPE_2__ network ;
struct TYPE_8__ {int outputs; int batch; size_t index; int activation; int output; int beta; int alpha; int out_c; int out_h; int out_w; int c; int h; int w; } ;
typedef TYPE_3__ layer ;
struct TYPE_6__ {int output; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ,int,int ,int) ;
 int FUNC_2 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_3(const layer VAR_0, network VAR_1)
{
    FUNC_1(VAR_0.outputs*VAR_0.batch, VAR_1.input, 1, VAR_0.output, 1);
    FUNC_2(VAR_0.batch, VAR_0.w, VAR_0.h, VAR_0.c, VAR_1.layers[VAR_0.index].output, VAR_0.out_w, VAR_0.out_h, VAR_0.out_c, VAR_0.alpha, VAR_0.beta, VAR_0.output);
    FUNC_0(VAR_0.output, VAR_0.outputs*VAR_0.batch, VAR_0.activation);
}
