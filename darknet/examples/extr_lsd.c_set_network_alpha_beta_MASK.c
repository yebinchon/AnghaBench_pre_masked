
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_4__ {scalar_t__ type; float alpha; float beta; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(network *VAR_1, float VAR_2, float VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_1->n; ++VAR_4){
        if(VAR_1->layers[VAR_4].type == VAR_0){
            VAR_1->layers[VAR_4].alpha = VAR_2;
            VAR_1->layers[VAR_4].beta = VAR_3;
        }
    }
}
