
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_3__* comp; } ;
struct TYPE_12__ {int nb_planes; int* pixelstep; TYPE_2__* desc; int * vsub; int * hsub; } ;
struct TYPE_11__ {int * u8; int * u16; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_4__ FFDrawContext ;
typedef TYPE_5__ FFDrawColor ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (TYPE_4__*,int **,int*,int,int,int) ;

void FUNC_4(FFDrawContext *VAR_1, FFDrawColor *VAR_2,
                       uint8_t *VAR_3[], int VAR_4[],
                       int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    uint8_t *VAR_14, *VAR_15;
    FFDrawColor VAR_16 = *VAR_2;

    for (VAR_9 = 0; VAR_9 < VAR_1->nb_planes; VAR_9++) {
        VAR_14 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_9, VAR_5, VAR_6);
        VAR_12 = FUNC_0(VAR_7, VAR_1->hsub[VAR_9]);
        VAR_13 = FUNC_0(VAR_8, VAR_1->vsub[VAR_9]);
        if (!VAR_13)
            return;
        VAR_15 = VAR_14;

        if (VAR_0 && VAR_1->desc->comp[0].depth > 8) {
            for (VAR_10 = 0; 2*VAR_10 < VAR_1->pixelstep[VAR_9]; VAR_10++)
                VAR_16.comp[VAR_9].u16[VAR_10] = FUNC_1(VAR_16.comp[VAR_9].u16[VAR_10]);
        }


        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
            FUNC_2(VAR_15, VAR_16.comp[VAR_9].u8, VAR_1->pixelstep[VAR_9]);
            VAR_15 += VAR_1->pixelstep[VAR_9];
        }
        VAR_12 *= VAR_1->pixelstep[VAR_9];

        VAR_15 = VAR_14 + VAR_4[VAR_9];
        for (VAR_11 = 1; VAR_11 < VAR_13; VAR_11++) {
            FUNC_2(VAR_15, VAR_14, VAR_12);
            VAR_15 += VAR_4[VAR_9];
        }
    }
}
