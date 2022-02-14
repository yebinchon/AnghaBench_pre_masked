
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_10__ {int* qu_sf_idx; } ;
struct TYPE_9__ {int used_quant_units; TYPE_3__* channels; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef TYPE_3__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int,int *) ;

__attribute__((used)) static int FUNC_7(GetBitContext *VAR_3, Atrac3pChanUnitCtx *VAR_4,
                                 int VAR_5, AVCodecContext *VAR_6)
{
    int VAR_7, VAR_8 = 0, VAR_9, VAR_10, VAR_11,
        VAR_12, VAR_13, VAR_14, VAR_15;
    VLC *VAR_16;
    Atrac3pChanParams *VAR_17 = &VAR_4->channels[VAR_5];
    Atrac3pChanParams *VAR_18 = &VAR_4->channels[0];

    switch (FUNC_2(VAR_3, 2)) {
    case 0:
        for (VAR_7 = 0; VAR_7 < VAR_4->used_quant_units; VAR_7++)
            VAR_17->qu_sf_idx[VAR_7] = FUNC_2(VAR_3, 6);
        break;
    case 1:
        if (VAR_5) {
            VAR_16 = &VAR_2[FUNC_2(VAR_3, 2)];

            for (VAR_7 = 0; VAR_7 < VAR_4->used_quant_units; VAR_7++) {
                VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
                VAR_17->qu_sf_idx[VAR_7] = (VAR_18->qu_sf_idx[VAR_7] + VAR_9) & 0x3F;
            }
        } else {
            VAR_8 = FUNC_2(VAR_3, 2);
            if (VAR_8 == 3) {
                FUNC_0(VAR_3, VAR_17->qu_sf_idx, VAR_4->used_quant_units);

                VAR_11 = FUNC_2(VAR_3, 5);
                VAR_12 = FUNC_2(VAR_3, 2);
                VAR_13 = FUNC_2(VAR_3, 4) - 7;

                for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
                    VAR_17->qu_sf_idx[VAR_7] = (VAR_17->qu_sf_idx[VAR_7] +
                                          FUNC_2(VAR_3, 4) - 7) & 0x3F;


                for (VAR_7 = VAR_11; VAR_7 < VAR_4->used_quant_units; VAR_7++)
                    VAR_17->qu_sf_idx[VAR_7] = (VAR_17->qu_sf_idx[VAR_7] + VAR_13 +
                                          FUNC_3(VAR_3, VAR_12)) & 0x3F;
            } else {
                VAR_11 = FUNC_2(VAR_3, 5);
                VAR_12 = FUNC_2(VAR_3, 3);
                VAR_13 = FUNC_2(VAR_3, 6);
                if (VAR_11 > VAR_4->used_quant_units || VAR_12 == 7) {
                    FUNC_1(VAR_6, VAR_1,
                           "SF mode 1: invalid parameters!\n");
                    return VAR_0;
                }


                for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
                    VAR_17->qu_sf_idx[VAR_7] = FUNC_2(VAR_3, 6);


                for (VAR_7 = VAR_11; VAR_7 < VAR_4->used_quant_units; VAR_7++)
                    VAR_17->qu_sf_idx[VAR_7] = (VAR_13 +
                                          FUNC_3(VAR_3, VAR_12)) & 0x3F;
            }
        }
        break;
    case 2:
        if (VAR_5) {
            VAR_16 = &VAR_2[FUNC_2(VAR_3, 2)];

            VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
            VAR_17->qu_sf_idx[0] = (VAR_18->qu_sf_idx[0] + VAR_9) & 0x3F;

            for (VAR_7 = 1; VAR_7 < VAR_4->used_quant_units; VAR_7++) {
                VAR_10 = VAR_18->qu_sf_idx[VAR_7] - VAR_18->qu_sf_idx[VAR_7 - 1];
                VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
                VAR_17->qu_sf_idx[VAR_7] = (VAR_17->qu_sf_idx[VAR_7 - 1] + VAR_10 + VAR_9) & 0x3F;
            }
        } else {
            VAR_16 = &VAR_2[FUNC_2(VAR_3, 2) + 4];

            FUNC_0(VAR_3, VAR_17->qu_sf_idx, VAR_4->used_quant_units);

            for (VAR_7 = 0; VAR_7 < VAR_4->used_quant_units; VAR_7++) {
                VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
                VAR_17->qu_sf_idx[VAR_7] = (VAR_17->qu_sf_idx[VAR_7] +
                                      FUNC_5(VAR_9, 4)) & 0x3F;
            }
        }
        break;
    case 3:
        if (VAR_5) {

            for (VAR_7 = 0; VAR_7 < VAR_4->used_quant_units; VAR_7++)
                VAR_17->qu_sf_idx[VAR_7] = VAR_18->qu_sf_idx[VAR_7];
        } else {
            VAR_8 = FUNC_2(VAR_3, 2);
            VAR_14 = FUNC_2(VAR_3, 2);
            VAR_16 = &VAR_2[VAR_14];

            if (VAR_8 == 3) {
                VAR_16 = &VAR_2[VAR_14 + 4];

                FUNC_0(VAR_3, VAR_17->qu_sf_idx, VAR_4->used_quant_units);

                VAR_10 = (FUNC_2(VAR_3, 4) + 56) & 0x3F;
                VAR_17->qu_sf_idx[0] = (VAR_17->qu_sf_idx[0] + VAR_10) & 0x3F;

                for (VAR_7 = 1; VAR_7 < VAR_4->used_quant_units; VAR_7++) {
                    VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
                    VAR_10 = (VAR_10 + FUNC_5(VAR_9, 4)) & 0x3F;
                    VAR_17->qu_sf_idx[VAR_7] = (VAR_10 + VAR_17->qu_sf_idx[VAR_7]) & 0x3F;
                }
            } else {

                VAR_17->qu_sf_idx[0] = FUNC_2(VAR_3, 6);

                for (VAR_7 = 1; VAR_7 < VAR_4->used_quant_units; VAR_7++) {
                    VAR_9 = FUNC_4(VAR_3, VAR_16->table, VAR_16->bits, 1);
                    VAR_17->qu_sf_idx[VAR_7] = (VAR_17->qu_sf_idx[VAR_7 - 1] + VAR_9) & 0x3F;
                }
            }
        }
        break;
    }

    if (VAR_8 && VAR_8 < 3)
        return FUNC_6(VAR_4, VAR_17, VAR_8, VAR_6);

    return 0;
}
