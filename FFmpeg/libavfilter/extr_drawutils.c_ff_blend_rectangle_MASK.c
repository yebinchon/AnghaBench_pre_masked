
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
struct TYPE_13__ {int nb_planes; int flags; unsigned int* pixelstep; int * hsub; TYPE_2__* desc; int * vsub; } ;
struct TYPE_12__ {int * u16; int * u8; } ;
struct TYPE_11__ {int flags; TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_4__ FFDrawContext ;
typedef TYPE_5__ FFDrawColor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned int,unsigned int,int,int ,int,int) ;
 int FUNC_1 (int *,int ,unsigned int,unsigned int,int,int ,int,int) ;
 int FUNC_2 (int,int*,int*,int *) ;
 int FUNC_3 (TYPE_4__*,unsigned int,unsigned int) ;
 int * FUNC_4 (TYPE_4__*,int **,int*,unsigned int,int,int) ;
 int FUNC_5 (int ,int*,int*,int*,int*) ;

void FUNC_6(FFDrawContext *VAR_2, FFDrawColor *VAR_3,
                        uint8_t *VAR_4[], int VAR_5[],
                        int VAR_6, int VAR_7,
                        int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    unsigned VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    uint8_t *VAR_26, *VAR_27;


    FUNC_2(VAR_6, &VAR_8, &VAR_10, ((void*)0));
    FUNC_2(VAR_7, &VAR_9, &VAR_11, ((void*)0));
    if (VAR_10 <= 0 || VAR_11 <= 0 || !VAR_3->rgba[3])
        return;
    if (VAR_2->desc->comp[0].depth <= 8) {

        VAR_12 = 0x10203 * VAR_3->rgba[3] + 0x2;
    } else {

        VAR_12 = 0x101 * VAR_3->rgba[3] + 0x2;
    }
    VAR_13 = VAR_2->nb_planes - !!(VAR_2->desc->flags & VAR_0 && !(VAR_2->flags & VAR_1));
    VAR_13 += !VAR_13;
    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
        VAR_14 = VAR_2->pixelstep[VAR_15];
        VAR_26 = FUNC_4(VAR_2, VAR_4, VAR_5, VAR_15, VAR_8, VAR_9);
        VAR_17 = VAR_10;
        VAR_18 = VAR_11;
        VAR_19 = VAR_8;
        VAR_20 = VAR_9;
        FUNC_5(VAR_2->hsub[VAR_15], &VAR_19, &VAR_17, &VAR_21, &VAR_22);
        FUNC_5(VAR_2->vsub[VAR_15], &VAR_20, &VAR_18, &VAR_23, &VAR_24);
        for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
            const int VAR_28 = VAR_2->desc->comp[VAR_16].depth;

            if (!FUNC_3(VAR_2, VAR_15, VAR_16))
                continue;
            VAR_27 = VAR_26 + VAR_16;
            if (VAR_23) {
                if (VAR_28 <= 8) {
                    FUNC_0(VAR_27, VAR_3->comp[VAR_15].u8[VAR_16], VAR_12 >> 1,
                               VAR_2->pixelstep[VAR_15], VAR_17,
                               VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                } else {
                    FUNC_1(VAR_27, VAR_3->comp[VAR_15].u16[VAR_16], VAR_12 >> 1,
                                 VAR_2->pixelstep[VAR_15], VAR_17,
                                 VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                }
                VAR_27 += VAR_5[VAR_15];
            }
            if (VAR_28 <= 8) {
                for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
                    FUNC_0(VAR_27, VAR_3->comp[VAR_15].u8[VAR_16], VAR_12,
                               VAR_2->pixelstep[VAR_15], VAR_17,
                               VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                    VAR_27 += VAR_5[VAR_15];
                }
            } else {
                for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
                    FUNC_1(VAR_27, VAR_3->comp[VAR_15].u16[VAR_16], VAR_12,
                                 VAR_2->pixelstep[VAR_15], VAR_17,
                                 VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                    VAR_27 += VAR_5[VAR_15];
                }
            }
            if (VAR_24) {
                if (VAR_28 <= 8) {
                    FUNC_0(VAR_27, VAR_3->comp[VAR_15].u8[VAR_16], VAR_12 >> 1,
                               VAR_2->pixelstep[VAR_15], VAR_17,
                               VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                } else {
                    FUNC_1(VAR_27, VAR_3->comp[VAR_15].u16[VAR_16], VAR_12 >> 1,
                                 VAR_2->pixelstep[VAR_15], VAR_17,
                                 VAR_2->hsub[VAR_15], VAR_21, VAR_22);
                }
            }
        }
    }
}
