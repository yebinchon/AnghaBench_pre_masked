
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
typedef int layer ;


 int FUNC_0 (int ,int ,int ,int ) ;

layer FUNC_1(list *VAR_0, size_params VAR_1)
{
    layer VAR_2 = FUNC_0(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_1.c);
    return VAR_2;
}
