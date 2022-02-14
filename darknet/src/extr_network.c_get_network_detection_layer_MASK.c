
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ type; int member_0; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

layer FUNC_1(network *VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_2->n; ++VAR_3){
        if(VAR_2->layers[VAR_3].type == VAR_0){
            return VAR_2->layers[VAR_3];
        }
    }
    FUNC_0(VAR_1, "Detection layer not found!!\n");
    layer VAR_4 = {0};
    return VAR_4;
}
