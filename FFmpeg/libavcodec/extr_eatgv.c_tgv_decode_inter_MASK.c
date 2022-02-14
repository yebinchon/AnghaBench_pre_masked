
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_8__ {int num_mvs; int** mv_codebook; int num_blocks_packed; int** block_codebook; TYPE_1__* last_frame; TYPE_6__* avctx; } ;
typedef TYPE_2__ TgvContext ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_9__ {int** data; int* linesize; } ;
struct TYPE_7__ {int** data; int* linesize; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,int ,char*,int,...) ;
 int FUNC_2 (int***,int) ;
 int FUNC_3 (int***,int,int) ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_8(TgvContext *VAR_3, AVFrame *VAR_4,
                            const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11,VAR_12,VAR_13,VAR_14;
    GetBitContext VAR_15;
    int VAR_16;
    const uint8_t *VAR_17;

    if(VAR_6 - VAR_5 < 12)
        return VAR_0;

    VAR_7 = FUNC_0(&VAR_5[0]);
    VAR_8 = FUNC_0(&VAR_5[2]);
    VAR_9 = FUNC_0(&VAR_5[4]);
    VAR_10 = FUNC_0(&VAR_5[6]);
    VAR_5 += 12;

    if (VAR_10 > VAR_2 || !VAR_10) {
        FUNC_1(VAR_3->avctx, VAR_1,
               "Invalid value for motion vector bits: %d\n", VAR_10);
        return VAR_0;
    }


    if (VAR_7 > VAR_3->num_mvs) {
        int VAR_18 = FUNC_3(&VAR_3->mv_codebook, VAR_7, sizeof(*VAR_3->mv_codebook));
        if (VAR_18 < 0) {
            VAR_3->num_mvs = 0;
            return VAR_18;
        }
        VAR_3->num_mvs = VAR_7;
    }

    if (VAR_9 > VAR_3->num_blocks_packed) {
        int VAR_19;
        if ((VAR_19 = FUNC_2(&VAR_3->block_codebook, VAR_9 * 16)) < 0) {
            VAR_3->num_blocks_packed = 0;
            return VAR_19;
        }
        VAR_3->num_blocks_packed = VAR_9;
    }


    VAR_16 = (VAR_7 * 2 * 10 + 31) & ~31;

    if (VAR_6 - VAR_5 < (VAR_16>>3) + 16*VAR_8 + 8*VAR_9)
        return VAR_0;

    FUNC_7(&VAR_15, VAR_5, VAR_16);
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
        VAR_3->mv_codebook[VAR_11][0] = FUNC_6(&VAR_15, 10);
        VAR_3->mv_codebook[VAR_11][1] = FUNC_6(&VAR_15, 10);
    }
    VAR_5 += VAR_16 >> 3;


    VAR_17 = VAR_5;
    VAR_5 += VAR_8 * 16;


    FUNC_7(&VAR_15, VAR_5, (VAR_6 - VAR_5) << 3);
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
        int VAR_20[4];
        for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
            VAR_20[VAR_12] = FUNC_4(&VAR_15, 8);
        for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
            VAR_3->block_codebook[VAR_11][15-VAR_12] = VAR_20[FUNC_4(&VAR_15, 2)];
    }

    if (FUNC_5(&VAR_15) < VAR_10 *
        (VAR_3->avctx->height / 4) * (VAR_3->avctx->width / 4))
        return VAR_0;


    for (VAR_14 = 0; VAR_14 < VAR_3->avctx->height / 4; VAR_14++)
        for (VAR_13 = 0; VAR_13 < VAR_3->avctx->width / 4; VAR_13++) {
            unsigned int VAR_21 = FUNC_4(&VAR_15, VAR_10);
            const uint8_t *VAR_22;
            ptrdiff_t VAR_23;

            if (VAR_21 < VAR_7) {
                int VAR_24 = VAR_13 * 4 + VAR_3->mv_codebook[VAR_21][0];
                int VAR_25 = VAR_14 * 4 + VAR_3->mv_codebook[VAR_21][1];

                if (VAR_24 < 0 || VAR_24 + 4 > VAR_3->avctx->width ||
                    VAR_25 < 0 || VAR_25 + 4 > VAR_3->avctx->height) {
                    FUNC_1(VAR_3->avctx, VAR_1, "MV %d %d out of picture\n", VAR_24, VAR_25);
                    continue;
                }

                VAR_22 = VAR_3->last_frame->data[0] + VAR_24 + VAR_25 * VAR_3->last_frame->linesize[0];
                VAR_23 = VAR_3->last_frame->linesize[0];
            } else {
                int VAR_26 = VAR_21 - VAR_7;
                if (VAR_26 < VAR_8)
                    VAR_22 = VAR_17 + 16*VAR_26;
                else if (VAR_26 - VAR_8 < VAR_9)
                    VAR_22 = VAR_3->block_codebook[VAR_26 - VAR_8];
                else
                    continue;
                VAR_23 = 4;
            }

            for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
                for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
                    VAR_4->data[0][(VAR_14 * 4 + VAR_12) * VAR_4->linesize[0] + (VAR_13 * 4 + VAR_11)] =
                        VAR_22[VAR_12 * VAR_23 + VAR_11];
    }

    return 0;
}
