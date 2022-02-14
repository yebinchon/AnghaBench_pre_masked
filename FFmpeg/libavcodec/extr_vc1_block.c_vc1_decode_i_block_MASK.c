
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_9__ {size_t dc_table_index; int y_dc_scale; int c_dc_scale; int*** ac_val; size_t* block_index; int* block_wrap; int* block_last_index; scalar_t__ ac_pred; int avctx; int gb; } ;
struct TYPE_8__ {int pq; int halfpq; size_t** zz_8x8; int left_blk_sh; int top_blk_sh; int pquantizer; TYPE_2__ s; int overlap; } ;
typedef TYPE_1__ VC1Context ;
struct TYPE_11__ {int table; } ;
struct TYPE_10__ {int table; } ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_7__* VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (int *,int const) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int*,int*,int*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int,int,int**,int*) ;

__attribute__((used)) static int FUNC_8(VC1Context *VAR_4, int16_t VAR_5[64], int VAR_6,
                              int VAR_7, int VAR_8)
{
    GetBitContext *VAR_9 = &VAR_4->s.gb;
    MpegEncContext *VAR_10 = &VAR_4->s;
    int VAR_11 = 0;
    int VAR_12;
    int16_t *VAR_13;
    int16_t *VAR_14, *VAR_15;
    int VAR_16, VAR_17;


    if (VAR_6 < 4) {
        VAR_16 = FUNC_3(&VAR_10->gb, VAR_3[VAR_10->dc_table_index].table, VAR_1, 3);
    } else {
        VAR_16 = FUNC_3(&VAR_10->gb, VAR_2[VAR_10->dc_table_index].table, VAR_1, 3);
    }
    if (VAR_16 < 0) {
        FUNC_0(VAR_10->avctx, VAR_0, "Illegal DC VLC\n");
        return -1;
    }
    if (VAR_16) {
        const int VAR_18 = (VAR_4->pq == 1 || VAR_4->pq == 2) ? 3 - VAR_4->pq : 0;
        if (VAR_16 == 119 ) {
            VAR_16 = FUNC_1(VAR_9, 8 + VAR_18);
        } else {
            if (VAR_18)
                VAR_16 = (VAR_16 << VAR_18) + FUNC_1(VAR_9, VAR_18) - ((1 << VAR_18) - 1);
        }
        if (FUNC_2(VAR_9))
            VAR_16 = -VAR_16;
    }


    VAR_16 += FUNC_7(&VAR_4->s, VAR_4->overlap, VAR_4->pq, VAR_6, &VAR_13, &VAR_11);
    *VAR_13 = VAR_16;


    if (VAR_6 < 4)
        VAR_17 = VAR_10->y_dc_scale;
    else
        VAR_17 = VAR_10->c_dc_scale;
    VAR_5[0] = VAR_16 * VAR_17;

    VAR_14 = VAR_10->ac_val[0][VAR_10->block_index[VAR_6]];
    VAR_15 = VAR_14;
    if (VAR_11)
        VAR_14 -= 16;
    else
        VAR_14 -= 16 * VAR_10->block_wrap[VAR_6];

    VAR_17 = VAR_4->pq * 2 + VAR_4->halfpq;


    VAR_12 = !!VAR_7;

    if (VAR_7) {
        int VAR_19 = 0, VAR_20, VAR_21;
        const uint8_t *VAR_22;
        int VAR_23;

        if (VAR_4->s.ac_pred) {
            if (!VAR_11)
                VAR_22 = VAR_4->zz_8x8[2];
            else
                VAR_22 = VAR_4->zz_8x8[3];
        } else
            VAR_22 = VAR_4->zz_8x8[1];

        while (!VAR_19) {
            int VAR_24 = FUNC_6(VAR_4, &VAR_19, &VAR_20, &VAR_21, VAR_8);
            if (VAR_24 < 0)
                return VAR_24;
            VAR_12 += VAR_20;
            if (VAR_12 > 63)
                break;
            VAR_5[VAR_22[VAR_12++]] = VAR_21;
        }


        if (VAR_10->ac_pred) {
            int VAR_25;
            if (VAR_11) {
                VAR_25 = VAR_4->left_blk_sh;
            } else {
                VAR_25 = VAR_4->top_blk_sh;
                VAR_14 += 8;
            }
            for (VAR_23 = 1; VAR_23 < 8; VAR_23++)
                VAR_5[VAR_23 << VAR_25] += VAR_14[VAR_23];
        }

        for (VAR_23 = 1; VAR_23 < 8; VAR_23++) {
            VAR_15[VAR_23] = VAR_5[VAR_23 << VAR_4->left_blk_sh];
            VAR_15[VAR_23 + 8] = VAR_5[VAR_23 << VAR_4->top_blk_sh];
        }


        for (VAR_23 = 1; VAR_23 < 64; VAR_23++)
            if (VAR_5[VAR_23]) {
                VAR_5[VAR_23] *= VAR_17;
                if (!VAR_4->pquantizer)
                    VAR_5[VAR_23] += (VAR_5[VAR_23] < 0) ? -VAR_4->pq : VAR_4->pq;
            }

    } else {
        int VAR_26;

        FUNC_5(VAR_15, 0, 16 * 2);


        if (VAR_10->ac_pred) {
            int VAR_27;
            if (VAR_11) {
                VAR_27 = VAR_4->left_blk_sh;
            } else {
                VAR_27 = VAR_4->top_blk_sh;
                VAR_14 += 8;
                VAR_15 += 8;
            }
            FUNC_4(VAR_15, VAR_14, 8 * 2);
            for (VAR_26 = 1; VAR_26 < 8; VAR_26++) {
                VAR_5[VAR_26 << VAR_27] = VAR_14[VAR_26] * VAR_17;
                if (!VAR_4->pquantizer && VAR_5[VAR_26 << VAR_27])
                    VAR_5[VAR_26 << VAR_27] += (VAR_5[VAR_26 << VAR_27] < 0) ? -VAR_4->pq : VAR_4->pq;
            }
        }
    }
    if (VAR_10->ac_pred) VAR_12 = 63;
    VAR_10->block_last_index[VAR_6] = VAR_12;

    return 0;
}
