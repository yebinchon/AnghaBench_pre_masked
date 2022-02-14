
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* group_size; int* group_offset; int* child; int* parent; } ;
typedef TYPE_1__ tree ;



int FUNC_0(float *VAR_0, tree *VAR_1, float VAR_2, int VAR_3)
{
    float VAR_4 = 1;
    int VAR_5 = 0;
    int VAR_6;
    while(1){
        float VAR_7 = 0;
        int VAR_8 = 0;

        for(VAR_6 = 0; VAR_6 < VAR_1->group_size[VAR_5]; ++VAR_6){
            int VAR_9 = VAR_6 + VAR_1->group_offset[VAR_5];
            float VAR_10 = VAR_0[(VAR_6 + VAR_1->group_offset[VAR_5])*VAR_3];
            if(VAR_10 > VAR_7){
                VAR_8 = VAR_9;
                VAR_7 = VAR_10;
            }
        }
        if(VAR_4*VAR_7 > VAR_2){
            VAR_4 = VAR_4*VAR_7;
            VAR_5 = VAR_1->child[VAR_8];
            if(VAR_1->child[VAR_8] < 0) return VAR_8;
        } else if (VAR_5 == 0){
            return VAR_8;
        } else {
            return VAR_1->parent[VAR_1->group_offset[VAR_5]];
        }
    }
    return 0;
}
