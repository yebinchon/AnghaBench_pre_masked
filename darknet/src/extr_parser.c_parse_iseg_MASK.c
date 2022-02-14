
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ inputs; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {scalar_t__ outputs; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int) ;
 TYPE_2__ FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int *,char*,int) ;

layer FUNC_3(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "classes", 20);
    int VAR_3 = FUNC_2(VAR_0, "ids", 32);
    layer VAR_4 = FUNC_1(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_2, VAR_3);
    FUNC_0(VAR_4.outputs == VAR_1.inputs);
    return VAR_4;
}
