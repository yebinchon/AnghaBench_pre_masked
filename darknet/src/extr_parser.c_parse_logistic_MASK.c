
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int w; int h; int inputs; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {int out_c; int c; int out_w; int w; int out_h; int h; } ;
typedef TYPE_2__ layer ;


 TYPE_2__ FUNC_0 (int ,int ) ;

layer FUNC_1(list *VAR_0, size_params VAR_1)
{
    layer VAR_2 = FUNC_0(VAR_1.batch, VAR_1.inputs);
    VAR_2.h = VAR_2.out_h = VAR_1.h;
    VAR_2.w = VAR_2.out_w = VAR_1.w;
    VAR_2.c = VAR_2.out_c = VAR_1.c;
    return VAR_2;
}
