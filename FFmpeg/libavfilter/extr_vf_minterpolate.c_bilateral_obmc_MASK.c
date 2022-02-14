
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int** mvs; int sbad; } ;
struct TYPE_9__ {scalar_t__ mc_mode; int b_height; int b_width; int log2_mb_size; int mb_size; TYPE_4__* int_blocks; int * pixel_refs; int * pixel_weights; int * pixel_mvs; int me_ctx; TYPE_2__* frames; } ;
struct TYPE_8__ {TYPE_1__* avf; } ;
struct TYPE_7__ {int width; int height; } ;
typedef int PixelWeights ;
typedef int PixelRefs ;
typedef int PixelMVS ;
typedef TYPE_3__ MIContext ;
typedef TYPE_4__ Block ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int** VAR_3 ;

__attribute__((used)) static void FUNC_5(MIContext *VAR_4, Block *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11 = VAR_4->frames[0].avf->width;
    int VAR_12 = VAR_4->frames[0].avf->height;

    Block *VAR_13;
    int VAR_14, VAR_15;
    uint64_t VAR_16[9];

    int VAR_17 = VAR_5->mvs[0][0] * 2;
    int VAR_18 = VAR_5->mvs[0][1] * 2;
    int VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24;

    if (VAR_4->mc_mode == VAR_1)
        for (VAR_15 = FUNC_1(0, VAR_7 - 1); VAR_15 < FUNC_2(VAR_7 + 2, VAR_4->b_height); VAR_15++)
            for (VAR_14 = FUNC_1(0, VAR_6 - 1); VAR_14 < FUNC_2(VAR_6 + 2, VAR_4->b_width); VAR_14++) {
                int VAR_25 = VAR_14 << VAR_4->log2_mb_size;
                int VAR_26 = VAR_15 << VAR_4->log2_mb_size;

                if (VAR_14 - VAR_6 || VAR_15 - VAR_7)
                    VAR_16[VAR_14 - VAR_6 + 1 + (VAR_15 - VAR_7 + 1) * 3] = FUNC_4(&VAR_4->me_ctx, VAR_25, VAR_26, VAR_25 + VAR_5->mvs[0][0], VAR_26 + VAR_5->mvs[0][1]);
            }

    VAR_19 = (VAR_6 << VAR_4->log2_mb_size) - VAR_4->mb_size / 2;
    VAR_20 = (VAR_7 << VAR_4->log2_mb_size) - VAR_4->mb_size / 2;

    VAR_21 = FUNC_3(VAR_19, 0, VAR_11 - 1);
    VAR_22 = FUNC_3(VAR_20, 0, VAR_12 - 1);
    VAR_23 = FUNC_3(VAR_19 + (2 << VAR_4->log2_mb_size), 0, VAR_11 - 1);
    VAR_24 = FUNC_3(VAR_20 + (2 << VAR_4->log2_mb_size), 0, VAR_12 - 1);

    for (VAR_10 = VAR_22; VAR_10 < VAR_24; VAR_10++) {
        int VAR_27 = -VAR_10;
        int VAR_28 = VAR_12 - VAR_10 - 1;
        for (VAR_9 = VAR_21; VAR_9 < VAR_23; VAR_9++) {
            int VAR_29 = -VAR_9;
            int VAR_30 = VAR_11 - VAR_9 - 1;
            int VAR_31 = VAR_3[4 - VAR_4->log2_mb_size][(VAR_9 - VAR_19) + ((VAR_10 - VAR_20) << (VAR_4->log2_mb_size + 1))];
            PixelMVS *VAR_32 = &VAR_4->pixel_mvs[VAR_9 + VAR_10 * VAR_11];
            PixelWeights *VAR_33 = &VAR_4->pixel_weights[VAR_9 + VAR_10 * VAR_11];
            PixelRefs *VAR_34 = &VAR_4->pixel_refs[VAR_9 + VAR_10 * VAR_11];

            if (VAR_4->mc_mode == VAR_1) {
                VAR_14 = (((VAR_9 - VAR_19) >> (VAR_4->log2_mb_size - 1)) * 2 - 3) / 2;
                VAR_15 = (((VAR_10 - VAR_20) >> (VAR_4->log2_mb_size - 1)) * 2 - 3) / 2;

                if (VAR_14 || VAR_15) {
                    uint64_t VAR_35 = VAR_16[VAR_14 + 1 + (VAR_15 + 1) * 3];
                    VAR_13 = &VAR_4->int_blocks[VAR_6 + VAR_14 + (VAR_7 + VAR_15) * VAR_4->b_width];

                    if (VAR_35 && VAR_35 != VAR_2 && VAR_13->sbad != VAR_2) {
                        int VAR_36 = FUNC_3(VAR_0 * VAR_13->sbad / VAR_35, 0, VAR_0);
                        VAR_31 = VAR_31 * VAR_36 / VAR_0;
                    }
                }
            }

            FUNC_0(VAR_31, VAR_17, VAR_18);
        }
    }
}
