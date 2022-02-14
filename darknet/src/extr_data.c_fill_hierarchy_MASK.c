
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* parent; int groups; int* group_size; } ;
typedef TYPE_1__ tree ;


 float VAR_0 ;

void FUNC_0(float *VAR_1, int VAR_2, tree *VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
        if(VAR_1[VAR_4]){
            int VAR_5 = VAR_3->parent[VAR_4];
            while(VAR_5 >= 0){
                VAR_1[VAR_5] = 1;
                VAR_5 = VAR_3->parent[VAR_5];
            }
        }
    }
    int VAR_6;
    int VAR_7 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_3->groups; ++VAR_4){

        int VAR_8 = 1;
        for(VAR_6 = 0; VAR_6 < VAR_3->group_size[VAR_4]; ++VAR_6){
            if(VAR_1[VAR_7 + VAR_6]){
                VAR_8 = 0;
                break;
            }
        }
        if (VAR_8) {
            for(VAR_6 = 0; VAR_6 < VAR_3->group_size[VAR_4]; ++VAR_6){
                VAR_1[VAR_7 + VAR_6] = VAR_0;
            }
        }
        VAR_7 += VAR_3->group_size[VAR_4];
    }
}
