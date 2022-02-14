
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
typedef int image ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int * FUNC_1 (TYPE_2__,char*,int *) ;

void FUNC_2(network *VAR_1)
{
    image *VAR_2 = 0;
    int VAR_3;
    char VAR_4[256];
    for(VAR_3 = 0; VAR_3 < VAR_1->n; ++VAR_3){
        FUNC_0(VAR_4, "Layer %d", VAR_3);
        layer VAR_5 = VAR_1->layers[VAR_3];
        if(VAR_5.type == VAR_0){
            VAR_2 = FUNC_1(VAR_5, VAR_4, VAR_2);
        }
    }
}
