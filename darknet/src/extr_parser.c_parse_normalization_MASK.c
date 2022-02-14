
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
typedef int layer ;


 int FUNC_0 (int ,int ,int ,int ,int,float,float,float) ;
 float FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;

layer FUNC_3(list *VAR_0, size_params VAR_1)
{
    float VAR_2 = FUNC_1(VAR_0, "alpha", .0001);
    float VAR_3 = FUNC_1(VAR_0, "beta" , .75);
    float VAR_4 = FUNC_1(VAR_0, "kappa", 1);
    int VAR_5 = FUNC_2(VAR_0, "size", 5);
    layer VAR_6 = FUNC_0(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_1.c, VAR_5, VAR_2, VAR_3, VAR_4);
    return VAR_6;
}
