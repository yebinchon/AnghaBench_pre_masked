
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int b_height; int b_width; int log2_mb_size; int mb_size; TYPE_4__* pixel_refs; int * pixel_weights; int * pixel_mvs; TYPE_3__* frames; } ;
struct TYPE_10__ {scalar_t__ nb; } ;
struct TYPE_9__ {TYPE_2__* blocks; TYPE_1__* avf; } ;
struct TYPE_8__ {int** mvs; } ;
struct TYPE_7__ {int width; int height; } ;
typedef int PixelWeights ;
typedef TYPE_4__ PixelRefs ;
typedef int PixelMVS ;
typedef TYPE_5__ MIContext ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int) ;
 int** VAR_1 ;

__attribute__((used)) static void FUNC_2(MIContext *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = VAR_2->frames[0].avf->width;
    int VAR_7 = VAR_2->frames[0].avf->height;
    int VAR_8, VAR_9, VAR_10;

    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
        for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
            VAR_2->pixel_refs[VAR_4 + VAR_5 * VAR_6].nb = 0;

    for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
        for (VAR_8 = 0; VAR_8 < VAR_2->b_height; VAR_8++)
            for (VAR_9 = 0; VAR_9 < VAR_2->b_width; VAR_9++) {
                int VAR_11 = VAR_10 ? VAR_3 : (VAR_0 - VAR_3);
                int VAR_12 = VAR_2->frames[2 - VAR_10].blocks[VAR_9 + VAR_8 * VAR_2->b_width].mvs[VAR_10][0];
                int VAR_13 = VAR_2->frames[2 - VAR_10].blocks[VAR_9 + VAR_8 * VAR_2->b_width].mvs[VAR_10][1];
                int VAR_14, VAR_15;
                int VAR_16, VAR_17, VAR_18, VAR_19;

                VAR_14 = (VAR_9 << VAR_2->log2_mb_size) - VAR_2->mb_size / 2 + VAR_12 * VAR_11 / VAR_0;
                VAR_15 = (VAR_8 << VAR_2->log2_mb_size) - VAR_2->mb_size / 2 + VAR_13 * VAR_11 / VAR_0;

                VAR_16 = FUNC_1(VAR_14, 0, VAR_6 - 1);
                VAR_17 = FUNC_1(VAR_15, 0, VAR_7 - 1);
                VAR_18 = FUNC_1(VAR_14 + (2 << VAR_2->log2_mb_size), 0, VAR_6 - 1);
                VAR_19 = FUNC_1(VAR_15 + (2 << VAR_2->log2_mb_size), 0, VAR_7 - 1);

                if (VAR_10) {
                    VAR_12 = -VAR_12;
                    VAR_13 = -VAR_13;
                }

                for (VAR_5 = VAR_17; VAR_5 < VAR_19; VAR_5++) {
                    int VAR_20 = -VAR_5;
                    int VAR_21 = VAR_7 - VAR_5 - 1;
                    for (VAR_4 = VAR_16; VAR_4 < VAR_18; VAR_4++) {
                        int VAR_22 = -VAR_4;
                        int VAR_23 = VAR_6 - VAR_4 - 1;
                        int VAR_24 = VAR_1[4 - VAR_2->log2_mb_size][(VAR_4 - VAR_14) + ((VAR_5 - VAR_15) << (VAR_2->log2_mb_size + 1))];
                        PixelMVS *VAR_25 = &VAR_2->pixel_mvs[VAR_4 + VAR_5 * VAR_6];
                        PixelWeights *VAR_26 = &VAR_2->pixel_weights[VAR_4 + VAR_5 * VAR_6];
                        PixelRefs *VAR_27 = &VAR_2->pixel_refs[VAR_4 + VAR_5 * VAR_6];

                        FUNC_0(VAR_24, VAR_12, VAR_13);
                    }
                }
            }
}
