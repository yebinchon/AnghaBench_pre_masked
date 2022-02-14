
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * linesize; int * data; } ;
struct TYPE_5__ {int image_width; int image_height; int avctx; int tmpblock; } ;
typedef int PutBitContext ;
typedef TYPE_1__ FlashSVContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int **,unsigned long) ;
 int FUNC_2 (int *,unsigned long*,int ,int,int) ;
 int FUNC_3 (int ,int ,int,int,int,int,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static int FUNC_8(FlashSVContext *VAR_2, const AVFrame *VAR_3, uint8_t *VAR_4,
                            int VAR_5, int VAR_6, int VAR_7,
                            uint8_t *VAR_8, int *VAR_9)
{

    PutBitContext VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    int VAR_19 = 0;

    FUNC_6(&VAR_10, VAR_4, VAR_5);

    FUNC_7(&VAR_10, 4, VAR_6 / 16 - 1);
    FUNC_7(&VAR_10, 12, VAR_2->image_width);
    FUNC_7(&VAR_10, 4, VAR_7 / 16 - 1);
    FUNC_7(&VAR_10, 12, VAR_2->image_height);
    FUNC_5(&VAR_10);
    VAR_17 = 4;

    VAR_11 = VAR_2->image_width / VAR_6;
    VAR_13 = VAR_2->image_width % VAR_6;
    VAR_12 = VAR_2->image_height / VAR_7;
    VAR_14 = VAR_2->image_height % VAR_7;


    for (VAR_16 = 0; VAR_16 < VAR_12 + (VAR_14 ? 1 : 0); VAR_16++) {

        int VAR_20 = VAR_16 * VAR_7;
        int VAR_21 = (VAR_16 < VAR_12) ? VAR_7 : VAR_14;


        for (VAR_15 = 0; VAR_15 < VAR_11 + (VAR_13 ? 1 : 0); VAR_15++) {
            int VAR_22 = VAR_15 * VAR_6;
            int VAR_23 = (VAR_15 < VAR_11) ? VAR_6 : VAR_13;
            int VAR_24 = VAR_1;
            uint8_t *VAR_25 = VAR_4 + VAR_17;



            VAR_18 = FUNC_3(VAR_3->data[0], VAR_2->tmpblock,
                                  VAR_2->image_height - (VAR_20 + VAR_21 + 1),
                                  VAR_22, VAR_21, VAR_23,
                                  VAR_3->linesize[0], VAR_8);

            if (VAR_18 || *VAR_9) {
                unsigned long VAR_26 = 3 * VAR_6 * VAR_7;
                VAR_24 = FUNC_2(VAR_25 + 2, &VAR_26, VAR_2->tmpblock,
                                3 * VAR_23 * VAR_21, 9);


                if (VAR_24 != VAR_1)
                    FUNC_0(VAR_2->avctx, VAR_0,
                           "error while compressing block %dx%d\n", VAR_15, VAR_16);

                FUNC_1(&VAR_25, VAR_26);
                VAR_17 += VAR_26 + 2;
                FUNC_4(VAR_2->avctx, "buf_pos = %d\n", VAR_17);
            } else {
                VAR_19++;
                FUNC_1(&VAR_25, 0);
                VAR_17 += 2;
            }
        }
    }

    if (VAR_19)
        *VAR_9 = 0;
    else
        *VAR_9 = 1;

    return VAR_17;
}
