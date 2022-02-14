
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_17__ {int (* vc1_inv_trans_8x8 ) (int*) ;} ;
struct TYPE_18__ {int (* put_signed_pixels_clamped ) (int*,scalar_t__,int) ;} ;
struct TYPE_16__ {int* qscale_table; } ;
struct TYPE_21__ {int mb_x; int mb_y; int mb_stride; int* mbskip_table; size_t* block_index; int linesize; size_t* block_wrap; int** block; int uvlinesize; TYPE_5__* avctx; scalar_t__* dest; TYPE_4__ idsp; int first_slice_line; scalar_t__ mb_intra; scalar_t__** dc_val; TYPE_2__ current_picture; int gb; void* ac_pred; } ;
struct TYPE_20__ {int ttfrm; int pq; int* direct_mb_plane; int bfraction; size_t tt_index; int ttmbf; scalar_t__ rangeredfrm; TYPE_3__ vc1dsp; int codingset; int codingset2; scalar_t__** mb_type; scalar_t__ c_avail; scalar_t__ a_avail; TYPE_1__* cbpcy_vlc; TYPE_7__ s; scalar_t__ skip_is_raw; scalar_t__ dmb_is_raw; } ;
typedef TYPE_6__ VC1Context ;
struct TYPE_19__ {int flags; } ;
struct TYPE_15__ {int table; } ;
struct TYPE_14__ {int table; } ;
typedef TYPE_7__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,int*,int*,int,int) ;
 TYPE_12__* VAR_8 ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,scalar_t__,int) ;
 int FUNC_8 (TYPE_6__*,int*,int*,int,int) ;
 int FUNC_9 (TYPE_6__*,int*,int,int,int,int ) ;
 int FUNC_10 (TYPE_6__*,int*,int,int,int,int,scalar_t__,int,int,int *) ;

__attribute__((used)) static int FUNC_11(VC1Context *VAR_9)
{
    MpegEncContext *VAR_10 = &VAR_9->s;
    GetBitContext *VAR_11 = &VAR_10->gb;
    int VAR_12, VAR_13;
    int VAR_14 = VAR_10->mb_x + VAR_10->mb_y * VAR_10->mb_stride;
    int VAR_15 = 0;
    int VAR_16, VAR_17;
    int VAR_18 = VAR_9->ttfrm;
    int VAR_19 = 0;
    int VAR_20, VAR_21;
    int VAR_22, VAR_23;
    int VAR_24 = 1;
    int VAR_25, VAR_26;
    int VAR_27, VAR_28;
    int VAR_29[2], VAR_30[2];
    int VAR_31 = VAR_1;

    VAR_17 = VAR_9->pq;
    VAR_10->mb_intra = 0;

    if (VAR_9->dmb_is_raw)
        VAR_28 = FUNC_4(VAR_11);
    else
        VAR_28 = VAR_9->direct_mb_plane[VAR_14];
    if (VAR_9->skip_is_raw)
        VAR_27 = FUNC_4(VAR_11);
    else
        VAR_27 = VAR_9->s.mbskip_table[VAR_14];

    VAR_29[0] = VAR_29[1] = VAR_30[0] = VAR_30[1] = 0;
    for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
        VAR_9->mb_type[0][VAR_10->block_index[VAR_12]] = 0;
        VAR_10->dc_val[0][VAR_10->block_index[VAR_12]] = 0;
    }
    VAR_10->current_picture.qscale_table[VAR_14] = 0;

    if (!VAR_28) {
        if (!VAR_27) {
            FUNC_1(VAR_29[0], VAR_30[0]);
            VAR_29[1] = VAR_29[0];
            VAR_30[1] = VAR_30[0];
        }
        if (VAR_27 || !VAR_10->mb_intra) {
            VAR_31 = FUNC_2(VAR_11);
            switch (VAR_31) {
            case 0:
                VAR_31 = (VAR_9->bfraction >= (VAR_4/2)) ? VAR_1 : VAR_2;
                break;
            case 1:
                VAR_31 = (VAR_9->bfraction >= (VAR_4/2)) ? VAR_2 : VAR_1;
                break;
            case 2:
                VAR_31 = VAR_3;
                VAR_29[0] = VAR_30[0] = 0;
            }
        }
    }
    for (VAR_12 = 0; VAR_12 < 6; VAR_12++)
        VAR_9->mb_type[0][VAR_10->block_index[VAR_12]] = VAR_10->mb_intra;

    if (VAR_27) {
        if (VAR_28)
            VAR_31 = VAR_3;
        FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
        FUNC_8(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
        return 0;
    }
    if (VAR_28) {
        VAR_15 = FUNC_5(&VAR_9->s.gb, VAR_9->cbpcy_vlc->table, VAR_6, 2);
        FUNC_0();
        VAR_10->mb_intra = 0;
        VAR_10->current_picture.qscale_table[VAR_14] = VAR_17;
        if (!VAR_9->ttmbf)
            VAR_18 = FUNC_5(VAR_11, VAR_8[VAR_9->tt_index].table, VAR_7, 2);
        VAR_29[0] = VAR_30[0] = VAR_29[1] = VAR_30[1] = 0;
        FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
        FUNC_8(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
    } else {
        if (!VAR_19 && !VAR_10->mb_intra) {

            FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
            FUNC_8(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
            return 0;
        }
        if (VAR_10->mb_intra && !VAR_19) {
            FUNC_0();
            VAR_10->current_picture.qscale_table[VAR_14] = VAR_17;
            VAR_10->ac_pred = FUNC_4(VAR_11);
            VAR_15 = 0;
            FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
        } else {
            if (VAR_31 == VAR_3) {
                FUNC_1(VAR_29[0], VAR_30[0]);
                if (!VAR_19) {

                    FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
                    FUNC_8(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
                    return 0;
                }
            }
            FUNC_3(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
            if (!VAR_10->mb_intra) {
                FUNC_8(VAR_9, VAR_29, VAR_30, VAR_28, VAR_31);
            }
            if (VAR_10->mb_intra)
                VAR_10->ac_pred = FUNC_4(VAR_11);
            VAR_15 = FUNC_5(&VAR_9->s.gb, VAR_9->cbpcy_vlc->table, VAR_6, 2);
            FUNC_0();
            VAR_10->current_picture.qscale_table[VAR_14] = VAR_17;
            if (!VAR_9->ttmbf && !VAR_10->mb_intra && VAR_19)
                VAR_18 = FUNC_5(VAR_11, VAR_8[VAR_9->tt_index].table, VAR_7, 2);
        }
    }
    VAR_25 = 0;
    for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
        VAR_10->dc_val[0][VAR_10->block_index[VAR_12]] = 0;
        VAR_25 += VAR_12 >> 2;
        VAR_22 = ((VAR_15 >> (5 - VAR_12)) & 1);
        VAR_26 = (VAR_12 & 4) ? 0 : ((VAR_12 & 1) * 8 + (VAR_12 & 2) * 4 * VAR_10->linesize);
        VAR_9->mb_type[0][VAR_10->block_index[VAR_12]] = VAR_10->mb_intra;
        if (VAR_10->mb_intra) {

            VAR_9->a_avail = VAR_9->c_avail = 0;
            if (VAR_12 == 2 || VAR_12 == 3 || !VAR_10->first_slice_line)
                VAR_9->a_avail = VAR_9->mb_type[0][VAR_10->block_index[VAR_12] - VAR_10->block_wrap[VAR_12]];
            if (VAR_12 == 1 || VAR_12 == 3 || VAR_10->mb_x)
                VAR_9->c_avail = VAR_9->mb_type[0][VAR_10->block_index[VAR_12] - 1];

            FUNC_9(VAR_9, VAR_10->block[VAR_12], VAR_12, VAR_22, VAR_17,
                                   (VAR_12 & 4) ? VAR_9->codingset2 : VAR_9->codingset);
            if (VAR_5 && (VAR_12 > 3) && (VAR_10->avctx->flags & VAR_0))
                continue;
            VAR_9->vc1dsp.vc1_inv_trans_8x8(VAR_10->block[VAR_12]);
            if (VAR_9->rangeredfrm)
                for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
                    VAR_10->block[VAR_12][VAR_13] *= 2;
            VAR_10->idsp.put_signed_pixels_clamped(VAR_10->block[VAR_12],
                                              VAR_10->dest[VAR_25] + VAR_26,
                                              VAR_12 & 4 ? VAR_10->uvlinesize
                                                    : VAR_10->linesize);
        } else if (VAR_22) {
            int VAR_32 = FUNC_10(VAR_9, VAR_10->block[VAR_12], VAR_12, VAR_17, VAR_18,
                                         VAR_24, VAR_10->dest[VAR_25] + VAR_26,
                                         (VAR_12 & 4) ? VAR_10->uvlinesize : VAR_10->linesize,
                                         VAR_5 && (VAR_12 & 4) && (VAR_10->avctx->flags & VAR_0), ((void*)0));
            if (VAR_32 < 0)
                return VAR_32;
            if (!VAR_9->ttmbf && VAR_18 < 8)
                VAR_18 = -1;
            VAR_24 = 0;
        }
    }
    return 0;
}
