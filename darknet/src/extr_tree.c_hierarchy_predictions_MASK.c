
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* parent; int * leaf; } ;
typedef TYPE_1__ tree ;



void FUNC_0(float *VAR_0, int VAR_1, tree *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
        int VAR_6 = VAR_2->parent[VAR_5];
        if(VAR_6 >= 0){
            VAR_0[VAR_5*VAR_4] *= VAR_0[VAR_6*VAR_4];
        }
    }
    if(VAR_3){
        for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
            if(!VAR_2->leaf[VAR_5]) VAR_0[VAR_5*VAR_4] = 0;
        }
    }
}
