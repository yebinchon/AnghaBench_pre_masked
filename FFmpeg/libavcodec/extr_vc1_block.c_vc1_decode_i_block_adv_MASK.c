
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef unsigned int int16_t ;
struct TYPE_9__ {int* qscale_table; } ;
struct TYPE_11__ {int ac_pred; int mb_x; int mb_y; int mb_stride; size_t dc_table_index; int y_dc_scale; int c_dc_scale; unsigned int*** ac_val; size_t* block_index; int* block_wrap; int* block_last_index; TYPE_1__ current_picture; int avctx; int gb; } ;
struct TYPE_10__ {int a_avail; int c_avail; int halfpq; scalar_t__ fcm; size_t* zzi_8x8; size_t** zz_8x8; int left_blk_sh; int top_blk_sh; int pquantizer; TYPE_3__ s; int overlap; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_13__ {int table; } ;
struct TYPE_12__ {int table; } ;
typedef TYPE_3__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_8__* VAR_4 ;
 TYPE_7__* VAR_5 ;
 unsigned int* VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int,int,int,int,unsigned int**,int*) ;
 int FUNC_3 (int *,int const) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (unsigned int*,unsigned int*,int) ;
 int FUNC_7 (unsigned int*,int ,int) ;
 int FUNC_8 (TYPE_2__*,int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_9(VC1Context *VAR_7, int16_t VAR_8[64], int VAR_9,
                                  int VAR_10, int VAR_11, int VAR_12)
{
    GetBitContext *VAR_13 = &VAR_7->s.gb;
    MpegEncContext *VAR_14 = &VAR_7->s;
    int VAR_15 = 0;
    int VAR_16;
    int16_t *VAR_17 = ((void*)0);
    int16_t *VAR_18, *VAR_19;
    int VAR_20;
    int VAR_21 = VAR_7->a_avail, VAR_22 = VAR_7->c_avail;
    int VAR_23 = VAR_14->ac_pred;
    int VAR_24;
    int VAR_25, VAR_26 = 0;
    int VAR_27 = VAR_14->mb_x + VAR_14->mb_y * VAR_14->mb_stride;
    int VAR_28 = FUNC_0(VAR_12);


    if (VAR_9 < 4) {
        VAR_20 = FUNC_5(&VAR_14->gb, VAR_5[VAR_14->dc_table_index].table, VAR_2, 3);
    } else {
        VAR_20 = FUNC_5(&VAR_14->gb, VAR_4[VAR_14->dc_table_index].table, VAR_2, 3);
    }
    if (VAR_20 < 0) {
        FUNC_1(VAR_14->avctx, VAR_1, "Illegal DC VLC\n");
        return -1;
    }
    if (VAR_20) {
        const int VAR_29 = (VAR_28 == 1 || VAR_28 == 2) ? 3 - VAR_28 : 0;
        if (VAR_20 == 119 ) {
            VAR_20 = FUNC_3(VAR_13, 8 + VAR_29);
        } else {
            if (VAR_29)
                VAR_20 = (VAR_20 << VAR_29) + FUNC_3(VAR_13, VAR_29) - ((1 << VAR_29) - 1);
        }
        if (FUNC_4(VAR_13))
            VAR_20 = -VAR_20;
    }


    VAR_20 += FUNC_2(&VAR_7->s, VAR_7->overlap, VAR_28, VAR_9, VAR_7->a_avail, VAR_7->c_avail, &VAR_17, &VAR_15);
    *VAR_17 = VAR_20;


    if (VAR_9 < 4)
        VAR_24 = VAR_14->y_dc_scale;
    else
        VAR_24 = VAR_14->c_dc_scale;
    VAR_8[0] = VAR_20 * VAR_24;


    if (!VAR_21 && !VAR_22)
        VAR_23 = 0;

    VAR_24 = VAR_28 * 2 + ((VAR_12 < 0) ? 0 : VAR_7->halfpq);

    VAR_18 = VAR_14->ac_val[0][VAR_14->block_index[VAR_9]];
    VAR_19 = VAR_18;
    if (VAR_15)
        VAR_18 -= 16;
    else
        VAR_18 -= 16 * VAR_14->block_wrap[VAR_9];

    VAR_25 = VAR_14->current_picture.qscale_table[VAR_27];
    if (VAR_9 == 3)
        VAR_26 = VAR_25;
    else if (VAR_15) {
        if (VAR_9 == 1)
            VAR_26 = VAR_25;
        else if (VAR_22 && VAR_27)
            VAR_26 = VAR_14->current_picture.qscale_table[VAR_27 - 1];
    } else {
        if (VAR_9 == 2)
            VAR_26 = VAR_25;
        else if (VAR_21 && VAR_27 >= VAR_14->mb_stride)
            VAR_26 = VAR_14->current_picture.qscale_table[VAR_27 - VAR_14->mb_stride];
    }


    VAR_16 = 1;

    if (VAR_10) {
        int VAR_30 = 0, VAR_31, VAR_32;
        const uint8_t *VAR_33;
        int VAR_34;

        if (VAR_7->s.ac_pred) {
            if (!VAR_23 && VAR_7->fcm == VAR_3) {
                VAR_33 = VAR_7->zzi_8x8;
            } else {
                if (!VAR_15)
                    VAR_33 = VAR_7->zz_8x8[2];
                else
                    VAR_33 = VAR_7->zz_8x8[3];
            }
        } else {
            if (VAR_7->fcm != VAR_3)
                VAR_33 = VAR_7->zz_8x8[1];
            else
                VAR_33 = VAR_7->zzi_8x8;
        }

        while (!VAR_30) {
            int VAR_35 = FUNC_8(VAR_7, &VAR_30, &VAR_31, &VAR_32, VAR_11);
            if (VAR_35 < 0)
                return VAR_35;
            VAR_16 += VAR_31;
            if (VAR_16 > 63)
                break;
            VAR_8[VAR_33[VAR_16++]] = VAR_32;
        }


        if (VAR_23) {
            int VAR_36;
            if (VAR_15) {
                VAR_36 = VAR_7->left_blk_sh;
            } else {
                VAR_36 = VAR_7->top_blk_sh;
                VAR_18 += 8;
            }

            VAR_25 = FUNC_0(VAR_25) * 2 + ((VAR_25 < 0) ? 0 : VAR_7->halfpq) - 1;
            if (VAR_25 < 1)
                return VAR_0;
            if (VAR_26)
                VAR_26 = FUNC_0(VAR_26) * 2 + ((VAR_26 < 0) ? 0 : VAR_7->halfpq) - 1;
            if (VAR_26 && VAR_25 != VAR_26) {
                for (VAR_34 = 1; VAR_34 < 8; VAR_34++)
                    VAR_8[VAR_34 << VAR_36] += (int)(VAR_18[VAR_34] * (unsigned)VAR_26 * VAR_6[VAR_25 - 1] + 0x20000) >> 18;
            } else {
                for (VAR_34 = 1; VAR_34 < 8; VAR_34++)
                    VAR_8[VAR_34 << VAR_36] += VAR_18[VAR_34];
            }
        }

        for (VAR_34 = 1; VAR_34 < 8; VAR_34++) {
            VAR_19[VAR_34 ] = VAR_8[VAR_34 << VAR_7->left_blk_sh];
            VAR_19[VAR_34 + 8] = VAR_8[VAR_34 << VAR_7->top_blk_sh];
        }


        for (VAR_34 = 1; VAR_34 < 64; VAR_34++)
            if (VAR_8[VAR_34]) {
                VAR_8[VAR_34] *= VAR_24;
                if (!VAR_7->pquantizer)
                    VAR_8[VAR_34] += (VAR_8[VAR_34] < 0) ? -VAR_28 : VAR_28;
            }

    } else {
        int VAR_37;

        FUNC_7(VAR_19, 0, 16 * 2);


        if (VAR_23) {
            int VAR_38;
            if (VAR_15) {
                VAR_38 = VAR_7->left_blk_sh;
            } else {
                VAR_38 = VAR_7->top_blk_sh;
                VAR_18 += 8;
                VAR_19 += 8;
            }
            FUNC_6(VAR_19, VAR_18, 8 * 2);
            VAR_25 = FUNC_0(VAR_25) * 2 + ((VAR_25 < 0) ? 0 : VAR_7->halfpq) - 1;
            if (VAR_25 < 1)
                return VAR_0;
            if (VAR_26)
                VAR_26 = FUNC_0(VAR_26) * 2 + ((VAR_26 < 0) ? 0 : VAR_7->halfpq) - 1;
            if (VAR_26 && VAR_25 != VAR_26) {
                for (VAR_37 = 1; VAR_37 < 8; VAR_37++)
                    VAR_19[VAR_37] = (VAR_19[VAR_37] * VAR_26 * VAR_6[VAR_25 - 1] + 0x20000) >> 18;
            }
            for (VAR_37 = 1; VAR_37 < 8; VAR_37++) {
                VAR_8[VAR_37 << VAR_38] = VAR_19[VAR_37] * VAR_24;
                if (!VAR_7->pquantizer && VAR_8[VAR_37 << VAR_38])
                    VAR_8[VAR_37 << VAR_38] += (VAR_8[VAR_37 << VAR_38] < 0) ? -VAR_28 : VAR_28;
            }
        }
    }
    if (VAR_23) VAR_16 = 63;
    VAR_14->block_last_index[VAR_9] = VAR_16;

    return 0;
}
