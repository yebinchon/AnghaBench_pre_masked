
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zParams; int splitPoint; int nbThreads; int steps; int d; int k; } ;
typedef TYPE_1__ ZDICT_fastCover_params_t ;
struct TYPE_6__ {int zParams; int splitPoint; int nbThreads; int steps; int d; int k; } ;
typedef TYPE_2__ ZDICT_cover_params_t ;



__attribute__((used)) static void
FUNC_0(ZDICT_fastCover_params_t VAR_0,
                               ZDICT_cover_params_t* VAR_1)
{
    VAR_1->k = VAR_0.k;
    VAR_1->d = VAR_0.d;
    VAR_1->steps = VAR_0.steps;
    VAR_1->nbThreads = VAR_0.nbThreads;
    VAR_1->splitPoint = VAR_0.splitPoint;
    VAR_1->zParams = VAR_0.zParams;
}
