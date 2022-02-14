
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* group; int* group_offset; int* group_size; int* parent; } ;
typedef TYPE_1__ tree ;



void FUNC_0(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, tree *VAR_5, float VAR_6, int VAR_7, float *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    if(VAR_5){
        float VAR_12 = 1;
        while(VAR_3 >= 0){
            VAR_12 *= VAR_0[VAR_2 + VAR_7*VAR_3];
            int VAR_13 = VAR_5->group[VAR_3];
            int VAR_14 = VAR_5->group_offset[VAR_13];
            for(VAR_10 = 0; VAR_10 < VAR_5->group_size[VAR_13]; ++VAR_10){
                VAR_1[VAR_2 + VAR_7*(VAR_14 + VAR_10)] = VAR_6 * (0 - VAR_0[VAR_2 + VAR_7*(VAR_14 + VAR_10)]);
            }
            VAR_1[VAR_2 + VAR_7*VAR_3] = VAR_6 * (1 - VAR_0[VAR_2 + VAR_7*VAR_3]);

            VAR_3 = VAR_5->parent[VAR_3];
        }
        *VAR_8 += VAR_12;
    } else {
        if (VAR_1[VAR_2] && VAR_9){
            VAR_1[VAR_2 + VAR_7*VAR_3] = VAR_6 * (1 - VAR_0[VAR_2 + VAR_7*VAR_3]);
            return;
        }
        for(VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11){
            VAR_1[VAR_2 + VAR_7*VAR_11] = VAR_6 * (((VAR_11 == VAR_3)?1 : 0) - VAR_0[VAR_2 + VAR_7*VAR_11]);
            if(VAR_11 == VAR_3) *VAR_8 += VAR_0[VAR_2 + VAR_7*VAR_11];
        }
    }
}
