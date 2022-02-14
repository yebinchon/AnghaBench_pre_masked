
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; scalar_t__ truth_gpu; scalar_t__ input_gpu; struct TYPE_5__* truth; struct TYPE_5__* input; struct TYPE_5__* layers; } ;
typedef TYPE_1__ network ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__) ;

void FUNC_3(network *VAR_0)
{
    int VAR_1;
    for(VAR_1 = 0; VAR_1 < VAR_0->n; ++VAR_1){
        FUNC_2(VAR_0->layers[VAR_1]);
    }
    FUNC_1(VAR_0->layers);
    if(VAR_0->input) FUNC_1(VAR_0->input);
    if(VAR_0->truth) FUNC_1(VAR_0->truth);




    FUNC_1(VAR_0);
}
