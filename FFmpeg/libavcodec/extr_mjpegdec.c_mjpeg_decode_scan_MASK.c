
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_25__ {int ** data; } ;
struct TYPE_24__ {int member_0; } ;
struct TYPE_21__ {int (* idct_put ) (int *,int,int ) ;} ;
struct TYPE_20__ {int (* clear_block ) (int ) ;} ;
struct TYPE_23__ {int bits; int mb_width; int mb_height; int width; int height; int* comp_index; int* linesize; int* coefs_finished; int* nb_blocks; int* h_scount; int* v_scount; int** quant_matrixes; size_t* quant_sindex; int* block_stride; int*** blocks; int bottom_field; TYPE_15__* avctx; int * dc_index; TYPE_5__ gb; int block; TYPE_2__ idsp; int * ac_index; TYPE_1__ bdsp; int progressive; scalar_t__ interlaced; scalar_t__ restart_interval; scalar_t__ restart_count; TYPE_3__* picture_ptr; } ;
struct TYPE_22__ {int ** data; } ;
struct TYPE_19__ {int lowres; int pix_fmt; } ;
typedef TYPE_4__ MJpegDecodeContext ;
typedef TYPE_5__ GetBitContext ;
typedef TYPE_6__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_15__*,int ,char*,...) ;
 int FUNC_2 (int ,int*,int*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int,int ,int ,int*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int*,int,int ,int*,int) ;
 int FUNC_5 (TYPE_15__*,char*,int,int,...) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_5__*,int const*,int) ;
 int FUNC_10 (TYPE_4__*,int *,int const*,int,int) ;
 int FUNC_11 (TYPE_4__*,int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int ) ;

__attribute__((used)) static int FUNC_14(MJpegDecodeContext *VAR_3, int VAR_4, int VAR_5,
                             int VAR_6, const uint8_t *VAR_7,
                             int VAR_8,
                             const AVFrame *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    uint8_t *VAR_17[VAR_2];
    const uint8_t *VAR_18[VAR_2];
    int VAR_19[VAR_2];
    GetBitContext VAR_20 = {0};
    int VAR_21 = 1 + (VAR_3->bits > 8);

    if (VAR_7) {
        if (VAR_8 != (VAR_3->mb_width * VAR_3->mb_height + 7)>>3) {
            FUNC_1(VAR_3->avctx, VAR_1, "mb_bitmask_size mismatches\n");
            return VAR_0;
        }
        FUNC_9(&VAR_20, VAR_7, VAR_3->mb_width * VAR_3->mb_height);
    }

    VAR_3->restart_count = 0;

    FUNC_2(VAR_3->avctx->pix_fmt, &VAR_13,
                                     &VAR_14);
    VAR_15 = FUNC_0(VAR_3->width, VAR_13);
    VAR_16 = FUNC_0(VAR_3->height, VAR_14);

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        int VAR_22 = VAR_3->comp_index[VAR_10];
        VAR_17[VAR_22] = VAR_3->picture_ptr->data[VAR_22];
        VAR_18[VAR_22] = VAR_9 ? VAR_9->data[VAR_22] : ((void*)0);
        VAR_19[VAR_22] = VAR_3->linesize[VAR_22];
        VAR_3->coefs_finished[VAR_22] |= 1;
    }

    for (VAR_12 = 0; VAR_12 < VAR_3->mb_height; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_3->mb_width; VAR_11++) {
            const int VAR_23 = VAR_7 && !FUNC_6(&VAR_20);

            if (VAR_3->restart_interval && !VAR_3->restart_count)
                VAR_3->restart_count = VAR_3->restart_interval;

            if (FUNC_7(&VAR_3->gb) < 0) {
                FUNC_1(VAR_3->avctx, VAR_1, "overread %d\n",
                       -FUNC_7(&VAR_3->gb));
                return VAR_0;
            }
            for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
                uint8_t *VAR_24;
                int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
                int VAR_32;
                VAR_25 = VAR_3->nb_blocks[VAR_10];
                VAR_30 = VAR_3->comp_index[VAR_10];
                VAR_26 = VAR_3->h_scount[VAR_10];
                VAR_27 = VAR_3->v_scount[VAR_10];
                VAR_28 = 0;
                VAR_29 = 0;
                for (VAR_31 = 0; VAR_31 < VAR_25; VAR_31++) {
                    VAR_32 = (((VAR_19[VAR_30] * (VAR_27 * VAR_12 + VAR_29) * 8) +
                                     (VAR_26 * VAR_11 + VAR_28) * 8 * VAR_21) >> VAR_3->avctx->lowres);

                    if (VAR_3->interlaced && VAR_3->bottom_field)
                        VAR_32 += VAR_19[VAR_30] >> 1;
                    if ( 8*(VAR_26 * VAR_11 + VAR_28) < ((VAR_30 == 1) || (VAR_30 == 2) ? VAR_15 : VAR_3->width)
                        && 8*(VAR_27 * VAR_12 + VAR_29) < ((VAR_30 == 1) || (VAR_30 == 2) ? VAR_16 : VAR_3->height)) {
                        VAR_24 = VAR_17[VAR_30] + VAR_32;
                    } else
                        VAR_24 = ((void*)0);
                    if (!VAR_3->progressive) {
                        if (VAR_23) {
                            if (VAR_24)
                                FUNC_10(VAR_3, VAR_24, VAR_18[VAR_30] + VAR_32,
                                                VAR_19[VAR_30], VAR_3->avctx->lowres);

                        } else {
                            VAR_3->bdsp.clear_block(VAR_3->block);
                            if (FUNC_3(VAR_3, VAR_3->block, VAR_10,
                                             VAR_3->dc_index[VAR_10], VAR_3->ac_index[VAR_10],
                                             VAR_3->quant_matrixes[VAR_3->quant_sindex[VAR_10]]) < 0) {
                                FUNC_1(VAR_3->avctx, VAR_1,
                                       "error y=%d x=%d\n", VAR_12, VAR_11);
                                return VAR_0;
                            }
                            if (VAR_24) {
                                VAR_3->idsp.idct_put(VAR_24, VAR_19[VAR_30], VAR_3->block);
                                if (VAR_3->bits & 7)
                                    FUNC_11(VAR_3, VAR_24, VAR_19[VAR_30]);
                            }
                        }
                    } else {
                        int VAR_33 = VAR_3->block_stride[VAR_30] * (VAR_27 * VAR_12 + VAR_29) +
                                         (VAR_26 * VAR_11 + VAR_28);
                        int16_t *VAR_34 = VAR_3->blocks[VAR_30][VAR_33];
                        if (VAR_5)
                            VAR_34[0] += FUNC_6(&VAR_3->gb) *
                                        VAR_3->quant_matrixes[VAR_3->quant_sindex[VAR_10]][0] << VAR_6;
                        else if (FUNC_4(VAR_3, VAR_34, VAR_10, VAR_3->dc_index[VAR_10],
                                                       VAR_3->quant_matrixes[VAR_3->quant_sindex[VAR_10]],
                                                       VAR_6) < 0) {
                            FUNC_1(VAR_3->avctx, VAR_1,
                                   "error y=%d x=%d\n", VAR_12, VAR_11);
                            return VAR_0;
                        }
                    }
                    FUNC_5(VAR_3->avctx, "mb: %d %d processed\n", VAR_12, VAR_11);
                    FUNC_5(VAR_3->avctx, "%d %d %d %d %d %d %d %d \n",
                            VAR_11, VAR_12, VAR_28, VAR_29, VAR_30, VAR_3->bottom_field,
                            (VAR_27 * VAR_12 + VAR_29) * 8, (VAR_26 * VAR_11 + VAR_28) * 8);
                    if (++VAR_28 == VAR_26) {
                        VAR_28 = 0;
                        VAR_29++;
                    }
                }
            }

            FUNC_8(VAR_3, VAR_4);
        }
    }
    return 0;
}
