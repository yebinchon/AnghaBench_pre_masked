
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * delta; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int out_h; int out_w; int c; int batch; int* indexes; scalar_t__* delta; } ;
typedef TYPE_2__ maxpool_layer ;



void FUNC_0(const maxpool_layer VAR_0, network VAR_1)
{
    int VAR_2;
    int VAR_3 = VAR_0.out_h;
    int VAR_4 = VAR_0.out_w;
    int VAR_5 = VAR_0.c;
    for(VAR_2 = 0; VAR_2 < VAR_3*VAR_4*VAR_5*VAR_0.batch; ++VAR_2){
        int VAR_6 = VAR_0.indexes[VAR_2];
        VAR_1.delta[VAR_6] += VAR_0.delta[VAR_2];
    }
}
