
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int* rgba; TYPE_3__* comp; } ;
struct TYPE_13__ {int nb_planes; int flags; unsigned int* pixelstep; int* hsub; int* vsub; TYPE_2__* desc; } ;
struct TYPE_12__ {int * u16; int * u8; } ;
struct TYPE_11__ {int flags; TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_4__ FFDrawContext ;
typedef TYPE_5__ FFDrawColor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int ,unsigned int,int const*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,unsigned int,int ,unsigned int,int const*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int,int*,int*,int*) ;
 int FUNC_3 (TYPE_4__*,unsigned int,unsigned int) ;
 int * FUNC_4 (TYPE_4__*,int **,int*,unsigned int,int,int) ;
 int FUNC_5 (int,int*,int*,int*,int*) ;

void FUNC_6(FFDrawContext *VAR_2, FFDrawColor *VAR_3,
                   uint8_t *VAR_4[], int VAR_5[], int VAR_6, int VAR_7,
                   const uint8_t *VAR_8, int VAR_9, int VAR_10, int VAR_11,
                   int VAR_12, unsigned VAR_13, int VAR_14, int VAR_15)
{
    unsigned VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    uint8_t *VAR_32, *VAR_33;
    const uint8_t *VAR_34;

    FUNC_2(VAR_6, &VAR_14, &VAR_10, &VAR_21);
    FUNC_2(VAR_7, &VAR_15, &VAR_11, &VAR_22);
    VAR_8 += VAR_22 * VAR_9;
    if (VAR_10 <= 0 || VAR_11 <= 0 || !VAR_3->rgba[3])
        return;
    if (VAR_2->desc->comp[0].depth <= 8) {


        VAR_16 = (0x10307 * VAR_3->rgba[3] + 0x3) >> 8;
    } else {
        VAR_16 = (0x101 * VAR_3->rgba[3] + 0x2) >> 8;
    }
    VAR_17 = VAR_2->nb_planes - !!(VAR_2->desc->flags & VAR_0 && !(VAR_2->flags & VAR_1));
    VAR_17 += !VAR_17;
    for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
        VAR_18 = VAR_2->pixelstep[VAR_19];
        VAR_32 = FUNC_4(VAR_2, VAR_4, VAR_5, VAR_19, VAR_14, VAR_15);
        VAR_23 = VAR_10;
        VAR_24 = VAR_11;
        VAR_25 = VAR_14;
        VAR_26 = VAR_15;
        FUNC_5(VAR_2->hsub[VAR_19], &VAR_25, &VAR_23, &VAR_27, &VAR_28);
        FUNC_5(VAR_2->vsub[VAR_19], &VAR_26, &VAR_24, &VAR_29, &VAR_30);
        for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
            const int VAR_35 = VAR_2->desc->comp[VAR_20].depth;

            if (!FUNC_3(VAR_2, VAR_19, VAR_20))
                continue;
            VAR_33 = VAR_32 + VAR_20;
            VAR_34 = VAR_8;
            if (VAR_29) {
                if (VAR_35 <= 8) {
                    FUNC_0(VAR_33, VAR_2->pixelstep[VAR_19],
                                  VAR_3->comp[VAR_19].u8[VAR_20], VAR_16,
                                  VAR_34, VAR_9, VAR_12, VAR_23,
                                  VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                  VAR_21, VAR_27, VAR_28, VAR_29);
                } else {
                    FUNC_1(VAR_33, VAR_2->pixelstep[VAR_19],
                                    VAR_3->comp[VAR_19].u16[VAR_20], VAR_16,
                                    VAR_34, VAR_9, VAR_12, VAR_23,
                                    VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                    VAR_21, VAR_27, VAR_28, VAR_29);
                }
                VAR_33 += VAR_5[VAR_19];
                VAR_34 += VAR_29 * VAR_9;
            }
            if (VAR_35 <= 8) {
                for (VAR_31 = 0; VAR_31 < VAR_24; VAR_31++) {
                    FUNC_0(VAR_33, VAR_2->pixelstep[VAR_19],
                                  VAR_3->comp[VAR_19].u8[VAR_20], VAR_16,
                                  VAR_34, VAR_9, VAR_12, VAR_23,
                                  VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                  VAR_21, VAR_27, VAR_28, 1 << VAR_2->vsub[VAR_19]);
                    VAR_33 += VAR_5[VAR_19];
                    VAR_34 += VAR_9 << VAR_2->vsub[VAR_19];
                }
            } else {
                for (VAR_31 = 0; VAR_31 < VAR_24; VAR_31++) {
                    FUNC_1(VAR_33, VAR_2->pixelstep[VAR_19],
                                    VAR_3->comp[VAR_19].u16[VAR_20], VAR_16,
                                    VAR_34, VAR_9, VAR_12, VAR_23,
                                    VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                    VAR_21, VAR_27, VAR_28, 1 << VAR_2->vsub[VAR_19]);
                    VAR_33 += VAR_5[VAR_19];
                    VAR_34 += VAR_9 << VAR_2->vsub[VAR_19];
                }
            }
            if (VAR_30) {
                if (VAR_35 <= 8) {
                    FUNC_0(VAR_33, VAR_2->pixelstep[VAR_19],
                                  VAR_3->comp[VAR_19].u8[VAR_20], VAR_16,
                                  VAR_34, VAR_9, VAR_12, VAR_23,
                                  VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                  VAR_21, VAR_27, VAR_28, VAR_30);
                } else {
                    FUNC_1(VAR_33, VAR_2->pixelstep[VAR_19],
                                    VAR_3->comp[VAR_19].u16[VAR_20], VAR_16,
                                    VAR_34, VAR_9, VAR_12, VAR_23,
                                    VAR_2->hsub[VAR_19], VAR_2->vsub[VAR_19],
                                    VAR_21, VAR_27, VAR_28, VAR_30);
                }
            }
        }
    }
}
