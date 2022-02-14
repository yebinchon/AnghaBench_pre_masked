
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_5__ {float* output; int outputs; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int ,char*,...) ;
 float FUNC_1 (float*,int) ;
 int VAR_0 ;
 float FUNC_2 (float*,int) ;

void FUNC_3(network *VAR_1)
{
    int VAR_2,VAR_3;
    for(VAR_2 = 0; VAR_2 < VAR_1->n; ++VAR_2){
        layer VAR_4 = VAR_1->layers[VAR_2];
        float *VAR_5 = VAR_4.output;
        int VAR_6 = VAR_4.outputs;
        float VAR_7 = FUNC_1(VAR_5, VAR_6);
        float VAR_8 = FUNC_2(VAR_5, VAR_6);
        FUNC_0(VAR_0, "Layer %d - Mean: %f, Variance: %f\n",VAR_2,VAR_7, VAR_8);
        if(VAR_6 > 100) VAR_6 = 100;
        for(VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) FUNC_0(VAR_0, "%f, ", VAR_5[VAR_3]);
        if(VAR_6 == 100)FUNC_0(VAR_0,".....\n");
        FUNC_0(VAR_0, "\n");
    }
}
