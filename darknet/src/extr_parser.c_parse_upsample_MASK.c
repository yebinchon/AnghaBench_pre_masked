
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int network ;
typedef int list ;
struct TYPE_7__ {int scale; } ;
typedef TYPE_2__ layer ;


 TYPE_2__ FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;

layer FUNC_3(list *VAR_0, size_params VAR_1, network *VAR_2)
{

    int VAR_3 = FUNC_2(VAR_0, "stride",2);
    layer VAR_4 = FUNC_0(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_1.c, VAR_3);
    VAR_4.scale = FUNC_1(VAR_0, "scale", 1);
    return VAR_4;
}
