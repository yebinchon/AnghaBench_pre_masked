
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_4__ {float temperature; } ;



void FUNC_0(network *VAR_0, float VAR_1)
{
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0->n; ++VAR_2){
        VAR_0->layers[VAR_2].temperature = VAR_1;
    }
}
