
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* parent; } ;
typedef TYPE_1__ tree ;



float FUNC_0(float *VAR_0, tree *VAR_1, int VAR_2, int VAR_3)
{
    float VAR_4 = 1;
    while(VAR_2 >= 0){
        VAR_4 = VAR_4 * VAR_0[VAR_2*VAR_3];
        VAR_2 = VAR_1->parent[VAR_2];
    }
    return VAR_4;
}
