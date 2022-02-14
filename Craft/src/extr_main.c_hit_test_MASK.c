
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_4__ {int map; } ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int *,int,int,float,float,float,float,float,float,int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (float) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (float,float,float*,float*,float*) ;
 scalar_t__ FUNC_4 (int,int) ;
 float FUNC_5 (scalar_t__) ;

int FUNC_6(
    int VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6,
    int *VAR_7, int *VAR_8, int *VAR_9)
{
    int VAR_10 = 0;
    float VAR_11 = 0;
    int VAR_12 = FUNC_2(VAR_2);
    int VAR_13 = FUNC_2(VAR_4);
    float VAR_14, VAR_15, VAR_16;
    FUNC_3(VAR_5, VAR_6, &VAR_14, &VAR_15, &VAR_16);
    for (int VAR_17 = 0; VAR_17 < VAR_0->chunk_count; VAR_17++) {
        Chunk *VAR_18 = VAR_0->chunks + VAR_17;
        if (FUNC_1(VAR_18, VAR_12, VAR_13) > 1) {
            continue;
        }
        int VAR_19, VAR_20, VAR_21;
        int VAR_22 = FUNC_0(&VAR_18->map, 8, VAR_1,
            VAR_2, VAR_3, VAR_4, VAR_14, VAR_15, VAR_16, &VAR_19, &VAR_20, &VAR_21);
        if (VAR_22 > 0) {
            float VAR_23 = FUNC_5(
                FUNC_4(VAR_19 - VAR_2, 2) + FUNC_4(VAR_20 - VAR_3, 2) + FUNC_4(VAR_21 - VAR_4, 2));
            if (VAR_11 == 0 || VAR_23 < VAR_11) {
                VAR_11 = VAR_23;
                *VAR_7 = VAR_19; *VAR_8 = VAR_20; *VAR_9 = VAR_21;
                VAR_10 = VAR_22;
            }
        }
    }
    return VAR_10;
}
