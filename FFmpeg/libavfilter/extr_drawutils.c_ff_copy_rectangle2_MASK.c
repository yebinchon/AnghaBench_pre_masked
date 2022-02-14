
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int nb_planes; int* pixelstep; int * vsub; int * hsub; } ;
typedef TYPE_1__ FFDrawContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (TYPE_1__*,int **,int*,int,int,int) ;

void FUNC_3(FFDrawContext *VAR_0,
                        uint8_t *VAR_1[], int VAR_2[],
                        uint8_t *VAR_3[], int VAR_4[],
                        int VAR_5, int VAR_6, int VAR_7, int VAR_8,
                        int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14;
    uint8_t *VAR_15, *VAR_16;

    for (VAR_11 = 0; VAR_11 < VAR_0->nb_planes; VAR_11++) {
        VAR_15 = FUNC_2(VAR_0, VAR_3, VAR_4, VAR_11, VAR_7, VAR_8);
        VAR_16 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_11, VAR_5, VAR_6);
        VAR_13 = FUNC_0(VAR_9, VAR_0->hsub[VAR_11]) * VAR_0->pixelstep[VAR_11];
        VAR_14 = FUNC_0(VAR_10, VAR_0->vsub[VAR_11]);
        for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
            FUNC_1(VAR_16, VAR_15, VAR_13);
            VAR_15 += VAR_4[VAR_11];
            VAR_16 += VAR_2[VAR_11];
        }
    }
}
