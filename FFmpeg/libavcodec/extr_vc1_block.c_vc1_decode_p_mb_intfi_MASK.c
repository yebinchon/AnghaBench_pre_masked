
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct TYPE_25__ {int* qscale_table; int * mb_type; scalar_t__*** motion_val; } ;
struct TYPE_28__ {int mb_x; int mb_y; int mb_stride; int mb_intra; size_t* block_index; size_t* block_wrap; int linesize; int uvlinesize; TYPE_6__* avctx; scalar_t__* dest; scalar_t__** dc_val; TYPE_5__ current_picture; int gb; int first_slice_line; int ac_pred; int * c_dc_scale_table; int c_dc_scale; int * y_dc_scale_table; int y_dc_scale; } ;
struct TYPE_22__ {int (* vc1_inv_trans_8x8 ) (int ) ;} ;
struct TYPE_27__ {int ttfrm; int pq; int* is_intra; size_t blocks_off; int mb_off; int a_avail; int c_avail; int** mb_type; size_t cur_blk_idx; int fourmvbp; size_t tt_index; int* cbp; int* ttblk; scalar_t__ overlap; int ttmbf; int ** block; TYPE_4__* cbpcy_vlc; TYPE_8__ s; int range_y; int range_x; TYPE_3__* fourmvbp_vlc; TYPE_2__ vc1dsp; int codingset; int codingset2; int * acpred_plane; TYPE_1__* mbmode_vlc; } ;
typedef TYPE_7__ VC1Context ;
struct TYPE_26__ {int flags; } ;
struct TYPE_24__ {int table; } ;
struct TYPE_23__ {int table; } ;
struct TYPE_21__ {int table; } ;
struct TYPE_20__ {int table; } ;
typedef TYPE_8__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t* VAR_9 ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,int,int ,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int,int,int,int,int ,int ,int*,int,int ) ;
 TYPE_14__* VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*,int*,int*,int*) ;
 int FUNC_9 (int *,int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_7__*,int ,int,int,int,int ) ;
 int FUNC_12 (TYPE_7__*,int ,int,int,int,int,scalar_t__,int,int,int*) ;
 int FUNC_13 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_14(VC1Context *VAR_11)
{
    MpegEncContext *VAR_12 = &VAR_11->s;
    GetBitContext *VAR_13 = &VAR_12->gb;
    int VAR_14;
    int VAR_15 = VAR_12->mb_x + VAR_12->mb_y * VAR_12->mb_stride;
    int VAR_16 = 0;
    int VAR_17, VAR_18;
    int VAR_19 = VAR_11->ttfrm;

    int VAR_20 = 1;
    int VAR_21, VAR_22;
    int VAR_23;
    int VAR_24 = 1;
    int VAR_25, VAR_26;
    int VAR_27 = 0;
    int VAR_28 = 0, VAR_29, VAR_30 = 0;
    int VAR_31 = 0;

    VAR_18 = VAR_11->pq;

    VAR_31 = FUNC_9(VAR_13, VAR_11->mbmode_vlc->table, VAR_7, 2);
    if (VAR_31 <= 1) {
        VAR_11->is_intra[VAR_12->mb_x] = 0x3f;
        VAR_12->mb_intra = 1;
        VAR_12->current_picture.motion_val[1][VAR_12->block_index[0] + VAR_11->blocks_off][0] = 0;
        VAR_12->current_picture.motion_val[1][VAR_12->block_index[0] + VAR_11->blocks_off][1] = 0;
        VAR_12->current_picture.mb_type[VAR_15 + VAR_11->mb_off] = VAR_3;
        FUNC_1();
        VAR_12->current_picture.qscale_table[VAR_15] = VAR_18;

        VAR_12->y_dc_scale = VAR_12->y_dc_scale_table[FUNC_0(VAR_18)];
        VAR_12->c_dc_scale = VAR_12->c_dc_scale_table[FUNC_0(VAR_18)];
        VAR_11->s.ac_pred = VAR_11->acpred_plane[VAR_15] = FUNC_7(VAR_13);
        VAR_20 = VAR_31 & 1;
        if (VAR_20)
            VAR_16 = 1 + FUNC_9(&VAR_11->s.gb, VAR_11->cbpcy_vlc->table, VAR_6, 2);
        VAR_25 = 0;
        for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
            VAR_11->a_avail = VAR_11->c_avail = 0;
            VAR_11->mb_type[0][VAR_12->block_index[VAR_14]] = 1;
            VAR_12->dc_val[0][VAR_12->block_index[VAR_14]] = 0;
            VAR_25 += VAR_14 >> 2;
            VAR_23 = ((VAR_16 >> (5 - VAR_14)) & 1);
            if (VAR_14 == 2 || VAR_14 == 3 || !VAR_12->first_slice_line)
                VAR_11->a_avail = VAR_11->mb_type[0][VAR_12->block_index[VAR_14] - VAR_12->block_wrap[VAR_14]];
            if (VAR_14 == 1 || VAR_14 == 3 || VAR_12->mb_x)
                VAR_11->c_avail = VAR_11->mb_type[0][VAR_12->block_index[VAR_14] - 1];

            FUNC_11(VAR_11, VAR_11->block[VAR_11->cur_blk_idx][VAR_9[VAR_14]], VAR_14, VAR_23, VAR_18,
                                   (VAR_14 & 4) ? VAR_11->codingset2 : VAR_11->codingset);
            if (VAR_1 && (VAR_14 > 3) && (VAR_12->avctx->flags & VAR_0))
                continue;
            VAR_11->vc1dsp.vc1_inv_trans_8x8(VAR_11->block[VAR_11->cur_blk_idx][VAR_9[VAR_14]]);
            VAR_26 = (VAR_14 & 4) ? 0 : ((VAR_14 & 1) * 8 + (VAR_14 & 2) * 4 * VAR_12->linesize);
            VAR_28 |= 0xf << (VAR_14 << 2);
        }
    } else {
        VAR_12->mb_intra = VAR_11->is_intra[VAR_12->mb_x] = 0;
        VAR_12->current_picture.mb_type[VAR_15 + VAR_11->mb_off] = VAR_2;
        for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
            VAR_11->mb_type[0][VAR_12->block_index[VAR_14]] = 0;
        if (VAR_31 <= 5) {
            VAR_21 = VAR_22 = VAR_27 = 0;
            if (VAR_31 & 1) {
                FUNC_8(VAR_11, &VAR_21, &VAR_22, &VAR_27);
            }
            FUNC_6(VAR_11, 0, VAR_21, VAR_22, 1, VAR_11->range_x, VAR_11->range_y, VAR_11->mb_type[0], VAR_27, 0);
            FUNC_2(VAR_11, 0);
            VAR_20 = !(VAR_31 & 2);
        } else {
            VAR_11->fourmvbp = FUNC_9(VAR_13, VAR_11->fourmvbp_vlc->table, VAR_4, 1);
            for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
                VAR_21 = VAR_22 = VAR_27 = 0;
                if (VAR_11->fourmvbp & (8 >> VAR_14))
                    FUNC_8(VAR_11, &VAR_21, &VAR_22, &VAR_27);
                FUNC_6(VAR_11, VAR_14, VAR_21, VAR_22, 0, VAR_11->range_x, VAR_11->range_y, VAR_11->mb_type[0], VAR_27, 0);
                FUNC_4(VAR_11, VAR_14, 0, 0);
            }
            FUNC_3(VAR_11, 0);
            VAR_20 = VAR_31 & 1;
        }
        if (VAR_20)
            VAR_16 = 1 + FUNC_9(&VAR_11->s.gb, VAR_11->cbpcy_vlc->table, VAR_5, 2);
        if (VAR_16) {
            FUNC_1();
        }
        VAR_12->current_picture.qscale_table[VAR_15] = VAR_18;
        if (!VAR_11->ttmbf && VAR_16) {
            VAR_19 = FUNC_9(VAR_13, VAR_10[VAR_11->tt_index].table, VAR_8, 2);
        }
        VAR_25 = 0;
        for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
            VAR_12->dc_val[0][VAR_12->block_index[VAR_14]] = 0;
            VAR_25 += VAR_14 >> 2;
            VAR_23 = ((VAR_16 >> (5 - VAR_14)) & 1);
            VAR_26 = (VAR_14 & 4) ? 0 : (VAR_14 & 1) * 8 + (VAR_14 & 2) * 4 * VAR_12->linesize;
            if (VAR_23) {
                VAR_29 = FUNC_12(VAR_11, VAR_11->block[VAR_11->cur_blk_idx][VAR_9[VAR_14]], VAR_14, VAR_18, VAR_19,
                                         VAR_24, VAR_12->dest[VAR_25] + VAR_26,
                                         (VAR_14 & 4) ? VAR_12->uvlinesize : VAR_12->linesize,
                                         VAR_1 && (VAR_14 & 4) && (VAR_12->avctx->flags & VAR_0),
                                         &VAR_30);
                if (VAR_29 < 0)
                    return VAR_29;
                VAR_28 |= VAR_29 << (VAR_14 << 2);
                if (!VAR_11->ttmbf && VAR_19 < 8)
                    VAR_19 = -1;
                VAR_24 = 0;
            }
        }
    }
    if (VAR_11->overlap && VAR_11->pq >= 9)
        FUNC_5(VAR_11);
    FUNC_13(VAR_11, 1);

    VAR_11->cbp[VAR_12->mb_x] = VAR_28;
    VAR_11->ttblk[VAR_12->mb_x] = VAR_30;

    return 0;
}
