
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int classes; int coords; } ;
typedef TYPE_2__ layer ;
struct TYPE_9__ {void* mask; void* prob; } ;
typedef TYPE_3__ detection ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,float) ;

detection *FUNC_2(network *VAR_0, float VAR_1, int *VAR_2)
{
    layer VAR_3 = VAR_0->layers[VAR_0->n - 1];
    int VAR_4;
    int VAR_5 = FUNC_1(VAR_0, VAR_1);
    if(VAR_2) *VAR_2 = VAR_5;
    detection *VAR_6 = FUNC_0(VAR_5, sizeof(detection));
    for(VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4){
        VAR_6[VAR_4].prob = FUNC_0(VAR_3.classes, sizeof(float));
        if(VAR_3.coords > 4){
            VAR_6[VAR_4].mask = FUNC_0(VAR_3.coords-4, sizeof(float));
        }
    }
    return VAR_6;
}
