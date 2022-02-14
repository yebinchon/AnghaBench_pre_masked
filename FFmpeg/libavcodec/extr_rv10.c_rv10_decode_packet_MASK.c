
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_27__ {TYPE_3__* priv_data; } ;
struct TYPE_26__ {scalar_t__ codec_id; int mb_x; int mb_width; int mb_y; int mb_height; int resync_mb_x; int resync_mb_y; scalar_t__ pict_type; int first_slice_line; int mb_num_left; int er; scalar_t__ loop_filter; int block; TYPE_5__* avctx; int gb; int mv_type; int mv_dir; int mb_stride; int * block_wrap; int b8_stride; scalar_t__* rv10_first_dc_coded; int qscale; int chroma_qscale_table; scalar_t__ modified_quant; int c_dc_scale_table; int y_dc_scale_table; scalar_t__ h263_aic; TYPE_2__* current_picture_ptr; } ;
struct TYPE_25__ {TYPE_4__ m; } ;
struct TYPE_24__ {TYPE_1__* f; } ;
struct TYPE_23__ {scalar_t__ pict_type; } ;
typedef TYPE_3__ RVDecContext ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_5__*,char*,int ) ;
 int FUNC_3 (int *,int,int,int,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_13 ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_14 ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_5__*,char*,int,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int const*,int) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int *,int) ;

__attribute__((used)) static int FUNC_21(AVCodecContext *VAR_15, const uint8_t *VAR_16,
                              int VAR_17, int VAR_18, int VAR_19)
{
    RVDecContext *VAR_20 = VAR_15->priv_data;
    MpegEncContext *VAR_21 = &VAR_20->m;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

    VAR_26 = VAR_17 * 8;
    FUNC_17(&VAR_21->gb, VAR_16, FUNC_0(VAR_17, VAR_18) * 8);
    if (VAR_21->codec_id == VAR_1)
        VAR_22 = FUNC_18(VAR_21);
    else
        VAR_22 = FUNC_19(VAR_20);
    if (VAR_22 < 0) {
        if (VAR_22 != VAR_5)
            FUNC_1(VAR_21->avctx, VAR_3, "HEADER ERROR\n");
        return VAR_0;
    }

    if (VAR_21->mb_x >= VAR_21->mb_width ||
        VAR_21->mb_y >= VAR_21->mb_height) {
        FUNC_1(VAR_21->avctx, VAR_3, "POS ERROR %d %d\n", VAR_21->mb_x, VAR_21->mb_y);
        return VAR_0;
    }
    VAR_23 = VAR_21->mb_y * VAR_21->mb_width + VAR_21->mb_x;
    VAR_24 = VAR_21->mb_width * VAR_21->mb_height - VAR_23;
    if (VAR_22 > VAR_24) {
        FUNC_1(VAR_21->avctx, VAR_3, "COUNT ERROR\n");
        return VAR_0;
    }

    if (VAR_19 < VAR_21->mb_width * VAR_21->mb_height / 8)
        return VAR_0;

    if ((VAR_21->mb_x == 0 && VAR_21->mb_y == 0) || !VAR_21->current_picture_ptr) {

        if (VAR_21->current_picture_ptr) {
            FUNC_4(&VAR_21->er);
            FUNC_10(VAR_21);
            VAR_21->mb_x = VAR_21->mb_y = VAR_21->resync_mb_x = VAR_21->resync_mb_y = 0;
        }
        if ((VAR_27 = FUNC_11(VAR_21, VAR_15)) < 0)
            return VAR_27;
        FUNC_9(VAR_21);
    } else {
        if (VAR_21->current_picture_ptr->f->pict_type != VAR_21->pict_type) {
            FUNC_1(VAR_21->avctx, VAR_3, "Slice type mismatch\n");
            return VAR_0;
        }
    }


    FUNC_2(VAR_15, "qscale=%d\n", VAR_21->qscale);


    if (VAR_21->codec_id == VAR_1) {
        if (VAR_21->mb_y == 0)
            VAR_21->first_slice_line = 1;
    } else {
        VAR_21->first_slice_line = 1;
        VAR_21->resync_mb_x = VAR_21->mb_x;
    }
    VAR_25 = VAR_21->mb_x;
    VAR_21->resync_mb_y = VAR_21->mb_y;
    if (VAR_21->h263_aic) {
        VAR_21->y_dc_scale_table =
        VAR_21->c_dc_scale_table = VAR_12;
    } else {
        VAR_21->y_dc_scale_table =
        VAR_21->c_dc_scale_table = VAR_14;
    }

    if (VAR_21->modified_quant)
        VAR_21->chroma_qscale_table = VAR_13;

    FUNC_13(VAR_21, VAR_21->qscale);

    VAR_21->rv10_first_dc_coded[0] = 0;
    VAR_21->rv10_first_dc_coded[1] = 0;
    VAR_21->rv10_first_dc_coded[2] = 0;
    VAR_21->block_wrap[0] =
    VAR_21->block_wrap[1] =
    VAR_21->block_wrap[2] =
    VAR_21->block_wrap[3] = VAR_21->b8_stride;
    VAR_21->block_wrap[4] =
    VAR_21->block_wrap[5] = VAR_21->mb_stride;
    FUNC_8(VAR_21);


    for (VAR_21->mb_num_left = VAR_22; VAR_21->mb_num_left > 0; VAR_21->mb_num_left--) {
        int VAR_28;
        FUNC_15(VAR_21);
        FUNC_14(VAR_15, "**mb x=%d y=%d\n", VAR_21->mb_x, VAR_21->mb_y);

        VAR_21->mv_dir = VAR_7;
        VAR_21->mv_type = VAR_8;
        VAR_28 = FUNC_5(VAR_21, VAR_21->block);



        if (VAR_28 != VAR_10 && VAR_26 >= FUNC_16(&VAR_21->gb)) {
            int VAR_29 = FUNC_20(&VAR_21->gb, 16);

            if (FUNC_16(&VAR_21->gb) + 16 > VAR_26)
                VAR_29 >>= FUNC_16(&VAR_21->gb) + 16 - VAR_26;

            if (!VAR_29)
                VAR_28 = VAR_9;
        }
        if (VAR_28 != VAR_10 && VAR_26 < FUNC_16(&VAR_21->gb) &&
            8 * VAR_18 >= FUNC_16(&VAR_21->gb)) {
            VAR_26 = VAR_18 * 8;
            FUNC_1(VAR_15, VAR_2, "update size from %d to %d\n",
                   8 * VAR_17, VAR_26);
            VAR_28 = VAR_11;
        }

        if (VAR_28 == VAR_10 || VAR_26 < FUNC_16(&VAR_21->gb)) {
            FUNC_1(VAR_21->avctx, VAR_3, "ERROR at MB %d %d\n", VAR_21->mb_x,
                   VAR_21->mb_y);
            return VAR_0;
        }
        if (VAR_21->pict_type != VAR_4)
            FUNC_7(VAR_21);
        FUNC_12(VAR_21, VAR_21->block);
        if (VAR_21->loop_filter)
            FUNC_6(VAR_21);

        if (++VAR_21->mb_x == VAR_21->mb_width) {
            VAR_21->mb_x = 0;
            VAR_21->mb_y++;
            FUNC_8(VAR_21);
        }
        if (VAR_21->mb_x == VAR_21->resync_mb_x)
            VAR_21->first_slice_line = 0;
        if (VAR_28 == VAR_9)
            break;
    }

    FUNC_3(&VAR_21->er, VAR_25, VAR_21->resync_mb_y, VAR_21->mb_x - 1, VAR_21->mb_y,
                    VAR_6);

    return VAR_26;
}
