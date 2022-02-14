
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;

layer FUNC_0(network *VAR_1)
{
    int VAR_2;
    for(VAR_2 = VAR_1->n - 1; VAR_2 >= 0; --VAR_2){
        if(VAR_1->layers[VAR_2].type != VAR_0) break;
    }
    return VAR_1->layers[VAR_2];
}
