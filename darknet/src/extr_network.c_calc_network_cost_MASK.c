
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; float* cost; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_4__ {scalar_t__* cost; } ;



void FUNC_0(network *VAR_0)
{
    network VAR_1 = *VAR_0;
    int VAR_2;
    float VAR_3 = 0;
    int VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_1.n; ++VAR_2){
        if(VAR_1.layers[VAR_2].cost){
            VAR_3 += VAR_1.layers[VAR_2].cost[0];
            ++VAR_4;
        }
    }
    *VAR_1.cost = VAR_3/VAR_4;
}
