
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int uint8_t ;
struct TYPE_19__ {size_t* qscale_table; scalar_t__*** motion_val; int * mb_type; } ;
struct TYPE_21__ {int (* clear_blocks ) (int*) ;} ;
struct TYPE_23__ {int mb_x; int mb_y; int mb_intra; int first_slice_line; int start_mb_y; int end_mb_y; int mb_width; size_t* block_index; int mb_height; int er; scalar_t__ loop_filter; int gb; TYPE_16__* avctx; int ac_pred; TYPE_1__ current_picture; TYPE_3__ bdsp; int * c_dc_scale_table; int c_dc_scale; int * y_dc_scale_table; int y_dc_scale; } ;
struct TYPE_20__ {int (* vc1_inv_trans_8x8 ) (int*) ;} ;
struct TYPE_22__ {int y_ac_table_index; int pqindex; int c_ac_table_index; size_t pq; int end_mb_x; int*** block; size_t cur_blk_idx; int** mb_type; int topleft_blk_idx; int top_blk_idx; int left_blk_idx; TYPE_5__ s; int bits; scalar_t__ rangeredfrm; scalar_t__ overlap; TYPE_2__ vc1dsp; int codingset2; int codingset; } ;
typedef TYPE_4__ VC1Context ;
struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {int table; } ;
typedef TYPE_5__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_16__*,int ,char*,int ,int ) ;
 size_t* VAR_15 ;
 int FUNC_1 (int *,int ,int ,int,int,int ) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 TYPE_14__ VAR_16 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (TYPE_5__*,int,int**) ;
 int FUNC_13 (TYPE_4__*,int*,int,int,int ) ;
 int FUNC_14 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_15(VC1Context *VAR_17)
{
    int VAR_18, VAR_19;
    MpegEncContext *VAR_20 = &VAR_17->s;
    int VAR_21, VAR_22;
    uint8_t *VAR_23;
    int VAR_24;


    switch (VAR_17->y_ac_table_index) {
    case 0:
        VAR_17->codingset = (VAR_17->pqindex <= 8) ? VAR_6 : VAR_8;
        break;
    case 1:
        VAR_17->codingset = VAR_4;
        break;
    case 2:
        VAR_17->codingset = VAR_10;
        break;
    }

    switch (VAR_17->c_ac_table_index) {
    case 0:
        VAR_17->codingset2 = (VAR_17->pqindex <= 8) ? VAR_5 : VAR_7;
        break;
    case 1:
        VAR_17->codingset2 = VAR_3;
        break;
    case 2:
        VAR_17->codingset2 = VAR_9;
        break;
    }


    VAR_20->y_dc_scale = VAR_20->y_dc_scale_table[VAR_17->pq];
    VAR_20->c_dc_scale = VAR_20->c_dc_scale_table[VAR_17->pq];


    VAR_20->mb_x = VAR_20->mb_y = 0;
    VAR_20->mb_intra = 1;
    VAR_20->first_slice_line = 1;
    for (VAR_20->mb_y = VAR_20->start_mb_y; VAR_20->mb_y < VAR_20->end_mb_y; VAR_20->mb_y++) {
        VAR_20->mb_x = 0;
        FUNC_9(VAR_17);
        for (; VAR_20->mb_x < VAR_17->end_mb_x; VAR_20->mb_x++) {
            FUNC_3(VAR_20);
            VAR_20->bdsp.clear_blocks(VAR_17->block[VAR_17->cur_blk_idx][0]);
            VAR_24 = VAR_20->mb_x + VAR_20->mb_y * VAR_20->mb_width;
            VAR_20->current_picture.mb_type[VAR_24] = VAR_14;
            VAR_20->current_picture.qscale_table[VAR_24] = VAR_17->pq;
            for (int VAR_25 = 0; VAR_25 < 4; VAR_25++) {
                VAR_20->current_picture.motion_val[1][VAR_20->block_index[VAR_25]][0] = 0;
                VAR_20->current_picture.motion_val[1][VAR_20->block_index[VAR_25]][1] = 0;
            }


            VAR_21 = FUNC_8(&VAR_17->s.gb, VAR_16.table, VAR_13, 2);
            VAR_17->s.ac_pred = FUNC_6(&VAR_17->s.gb);

            for (VAR_18 = 0; VAR_18 < 6; VAR_18++) {
                VAR_17->mb_type[0][VAR_20->block_index[VAR_18]] = 1;

                VAR_22 = ((VAR_21 >> (5 - VAR_18)) & 1);

                if (VAR_18 < 4) {
                    int VAR_26 = FUNC_12(&VAR_17->s, VAR_18, &VAR_23);
                    VAR_22 = VAR_22 ^ VAR_26;
                    *VAR_23 = VAR_22;
                }
                VAR_21 |= VAR_22 << (5 - VAR_18);

                FUNC_13(VAR_17, VAR_17->block[VAR_17->cur_blk_idx][VAR_15[VAR_18]], VAR_18, VAR_22, (VAR_18 < 4) ? VAR_17->codingset : VAR_17->codingset2);

                if (VAR_2 && VAR_18 > 3 && (VAR_20->avctx->flags & VAR_0))
                    continue;
                VAR_17->vc1dsp.vc1_inv_trans_8x8(VAR_17->block[VAR_17->cur_blk_idx][VAR_15[VAR_18]]);
            }

            if (VAR_17->overlap && VAR_17->pq >= 9) {
                FUNC_5(VAR_17);
                if (VAR_17->rangeredfrm)
                    for (VAR_18 = 0; VAR_18 < 6; VAR_18++)
                        for (VAR_19 = 0; VAR_19 < 64; VAR_19++)
                            VAR_17->block[VAR_17->cur_blk_idx][VAR_15[VAR_18]][VAR_19] *= 2;
                FUNC_14(VAR_17, 1);
            } else {
                if (VAR_17->rangeredfrm)
                    for (VAR_18 = 0; VAR_18 < 6; VAR_18++)
                        for (VAR_19 = 0; VAR_19 < 64; VAR_19++)
                            VAR_17->block[VAR_17->cur_blk_idx][VAR_15[VAR_18]][VAR_19] = (VAR_17->block[VAR_17->cur_blk_idx][VAR_15[VAR_18]][VAR_19] - 64) * 2;
                FUNC_14(VAR_17, 0);
            }

            if (VAR_17->s.loop_filter)
                FUNC_4(VAR_17);

            if (FUNC_7(&VAR_20->gb) > VAR_17->bits) {
                FUNC_1(&VAR_20->er, 0, 0, VAR_20->mb_x, VAR_20->mb_y, VAR_12);
                FUNC_0(VAR_20->avctx, VAR_1, "Bits overconsumption: %i > %i\n",
                       FUNC_7(&VAR_20->gb), VAR_17->bits);
                return;
            }

            VAR_17->topleft_blk_idx = (VAR_17->topleft_blk_idx + 1) % (VAR_17->end_mb_x + 2);
            VAR_17->top_blk_idx = (VAR_17->top_blk_idx + 1) % (VAR_17->end_mb_x + 2);
            VAR_17->left_blk_idx = (VAR_17->left_blk_idx + 1) % (VAR_17->end_mb_x + 2);
            VAR_17->cur_blk_idx = (VAR_17->cur_blk_idx + 1) % (VAR_17->end_mb_x + 2);
        }
        if (!VAR_17->s.loop_filter)
            FUNC_2(VAR_20, VAR_20->mb_y * 16, 16);
        else if (VAR_20->mb_y)
            FUNC_2(VAR_20, (VAR_20->mb_y - 1) * 16, 16);

        VAR_20->first_slice_line = 0;
    }
    if (VAR_17->s.loop_filter)
        FUNC_2(VAR_20, (VAR_20->end_mb_y - 1) * 16, 16);



    FUNC_1(&VAR_20->er, 0, 0, VAR_20->mb_width - 1, VAR_20->mb_height - 1, VAR_11);
}
