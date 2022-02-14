
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; void* cost; void* t; void* seen; void* layers; } ;
typedef TYPE_1__ network ;
typedef int layer ;


 void* FUNC_0 (int,int) ;

network *FUNC_1(int VAR_0)
{
    network *VAR_1 = FUNC_0(1, sizeof(network));
    VAR_1->n = VAR_0;
    VAR_1->layers = FUNC_0(VAR_1->n, sizeof(layer));
    VAR_1->seen = FUNC_0(1, sizeof(size_t));
    VAR_1->t = FUNC_0(1, sizeof(int));
    VAR_1->cost = FUNC_0(1, sizeof(float));
    return VAR_1;
}
