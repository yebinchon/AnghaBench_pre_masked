
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* seen; int batch; int train; float* cost; int subdivisions; } ;
typedef TYPE_1__ network ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

float FUNC_3(network *VAR_0)
{
    *VAR_0->seen += VAR_0->batch;
    VAR_0->train = 1;
    FUNC_1(VAR_0);
    FUNC_0(VAR_0);
    float VAR_1 = *VAR_0->cost;
    if(((*VAR_0->seen)/VAR_0->batch)%VAR_0->subdivisions == 0) FUNC_2(VAR_0);
    return VAR_1;
}
