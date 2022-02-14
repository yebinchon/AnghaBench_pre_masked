
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
struct TYPE_26__ {int tile_col_start; int * c; int * c_b; int left_segpred_ctx; int left_uv_nnz_ctx; int left_y_nnz_ctx; int left_mode_ctx; int left_skip_ctx; int left_partition_ctx; } ;
typedef TYPE_6__ VP9TileData ;
struct TYPE_27__ {int mask; } ;
typedef TYPE_7__ VP9Filter ;
struct TYPE_21__ {scalar_t__ level; } ;
struct TYPE_23__ {int tile_rows; int tile_cols; int log2_tile_cols; int log2_tile_rows; } ;
struct TYPE_24__ {TYPE_1__ filter; scalar_t__ intraonly; scalar_t__ keyframe; TYPE_3__ tiling; } ;
struct TYPE_25__ {TYPE_2__* frames; TYPE_4__ h; } ;
struct TYPE_28__ {int bytesperpixel; int ss_v; int pass; int ss_h; int rows; int cols; TYPE_5__ s; TYPE_7__* lflvl; int * intra_pred_data; int sb_cols; int sb_rows; TYPE_6__* td; } ;
typedef TYPE_8__ VP9Context ;
struct TYPE_29__ {int* linesize; scalar_t__* data; } ;
struct TYPE_20__ {TYPE_9__* f; } ;
struct TYPE_22__ {TYPE_13__ tf; } ;
struct TYPE_19__ {TYPE_8__* priv_data; } ;
typedef TYPE_9__ AVFrame ;
typedef TYPE_10__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*,int,int,TYPE_7__*,int,int,int ) ;
 int FUNC_2 (TYPE_6__*,int,int,TYPE_7__*,int,int,int ) ;
 int FUNC_3 (TYPE_13__*,int,int ) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_10__*,TYPE_7__*,int,int,int,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int*,int*,int,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_6,
                        const uint8_t *VAR_7, int VAR_8)
{
    VP9Context *VAR_9 = VAR_6->priv_data;
    VP9TileData *VAR_10 = &VAR_9->td[0];
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    AVFrame *VAR_21;
    ptrdiff_t VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_21 = VAR_9->s.frames[VAR_2].tf.f;
    VAR_24 = VAR_21->linesize[0];
    VAR_25 =VAR_21->linesize[1];
    VAR_16 = VAR_9->bytesperpixel;

    VAR_22 = VAR_23 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_9->s.h.tiling.tile_rows; VAR_13++) {
        FUNC_8(&VAR_17, &VAR_18,
                        VAR_13, VAR_9->s.h.tiling.log2_tile_rows, VAR_9->sb_rows);

        for (VAR_14 = 0; VAR_14 < VAR_9->s.h.tiling.tile_cols; VAR_14++) {
            int64_t VAR_26;

            if (VAR_14 == VAR_9->s.h.tiling.tile_cols - 1 &&
                VAR_13 == VAR_9->s.h.tiling.tile_rows - 1) {
                VAR_26 = VAR_8;
            } else {
                VAR_26 = FUNC_0(VAR_7);
                VAR_7 += 4;
                VAR_8 -= 4;
            }
            if (VAR_26 > VAR_8) {
                FUNC_3(&VAR_9->s.frames[VAR_2].tf, VAR_4, 0);
                return VAR_0;
            }
            VAR_15 = FUNC_4(&VAR_10->c_b[VAR_14], VAR_7, VAR_26);
            if (VAR_15 < 0)
                return VAR_15;
            if (FUNC_9(&VAR_10->c_b[VAR_14], 128)) {
                FUNC_3(&VAR_9->s.frames[VAR_2].tf, VAR_4, 0);
                return VAR_0;
            }
            VAR_7 += VAR_26;
            VAR_8 -= VAR_26;
        }

        for (VAR_11 = VAR_17; VAR_11 < VAR_18;
             VAR_11 += 8, VAR_22 += VAR_24 * 64, VAR_23 += VAR_25 * 64 >> VAR_9->ss_v) {
            VP9Filter *VAR_27 = VAR_9->lflvl;
            ptrdiff_t VAR_28 = VAR_22, VAR_29 = VAR_23;

            for (VAR_14 = 0; VAR_14 < VAR_9->s.h.tiling.tile_cols; VAR_14++) {
                FUNC_8(&VAR_19, &VAR_20,
                                VAR_14, VAR_9->s.h.tiling.log2_tile_cols, VAR_9->sb_cols);
                VAR_10->tile_col_start = VAR_19;
                if (VAR_9->pass != 2) {
                    FUNC_7(VAR_10->left_partition_ctx, 0, 8);
                    FUNC_7(VAR_10->left_skip_ctx, 0, 8);
                    if (VAR_9->s.h.keyframe || VAR_9->s.h.intraonly) {
                        FUNC_7(VAR_10->left_mode_ctx, VAR_3, 16);
                    } else {
                        FUNC_7(VAR_10->left_mode_ctx, VAR_5, 8);
                    }
                    FUNC_7(VAR_10->left_y_nnz_ctx, 0, 16);
                    FUNC_7(VAR_10->left_uv_nnz_ctx, 0, 32);
                    FUNC_7(VAR_10->left_segpred_ctx, 0, 8);

                    VAR_10->c = &VAR_10->c_b[VAR_14];
                }

                for (VAR_12 = VAR_19;
                     VAR_12 < VAR_20;
                     VAR_12 += 8, VAR_28 += 64 * VAR_16,
                     VAR_29 += 64 * VAR_16 >> VAR_9->ss_h, VAR_27++) {


                    if (VAR_9->pass != 1) {
                        FUNC_7(VAR_27->mask, 0, sizeof(VAR_27->mask));
                    }

                    if (VAR_9->pass == 2) {
                        FUNC_2(VAR_10, VAR_11, VAR_12, VAR_27,
                                      VAR_28, VAR_29, VAR_1);
                    } else {
                        if (FUNC_10(VAR_10->c)) {
                            return VAR_0;
                        }
                        FUNC_1(VAR_10, VAR_11, VAR_12, VAR_27,
                                  VAR_28, VAR_29, VAR_1);
                    }
                }
            }

            if (VAR_9->pass == 1)
                continue;



            if (VAR_11 + 8 < VAR_9->rows) {
                FUNC_6(VAR_9->intra_pred_data[0],
                       VAR_21->data[0] + VAR_22 + 63 * VAR_24,
                       8 * VAR_9->cols * VAR_16);
                FUNC_6(VAR_9->intra_pred_data[1],
                       VAR_21->data[1] + VAR_23 + ((64 >> VAR_9->ss_v) - 1) * VAR_25,
                       8 * VAR_9->cols * VAR_16 >> VAR_9->ss_h);
                FUNC_6(VAR_9->intra_pred_data[2],
                       VAR_21->data[2] + VAR_23 + ((64 >> VAR_9->ss_v) - 1) * VAR_25,
                       8 * VAR_9->cols * VAR_16 >> VAR_9->ss_h);
            }


            if (VAR_9->s.h.filter.level) {
                VAR_28 = VAR_22;
                VAR_29 = VAR_23;
                VAR_27 = VAR_9->lflvl;
                for (VAR_12 = 0; VAR_12 < VAR_9->cols;
                     VAR_12 += 8, VAR_28 += 64 * VAR_16,
                     VAR_29 += 64 * VAR_16 >> VAR_9->ss_h, VAR_27++) {
                    FUNC_5(VAR_6, VAR_27, VAR_11, VAR_12,
                                         VAR_28, VAR_29);
                }
            }




            FUNC_3(&VAR_9->s.frames[VAR_2].tf, VAR_11 >> 3, 0);
        }
    }
    return 0;
}
