
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; unsigned char* mb_change_bits; unsigned int* vert_pred; int block_width; TYPE_2__* frame; int mb_change_bits_row_size; int block_type; TYPE_1__* avctx; } ;
typedef TYPE_3__ TrueMotion1Context ;
struct TYPE_6__ {unsigned char** data; int * linesize; } ;
struct TYPE_5__ {int width; int height; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_5(TrueMotion1Context *VAR_3)
{
    int VAR_4;
    int VAR_5;
    unsigned int VAR_6;
    unsigned int VAR_7;
    unsigned int *VAR_8;
    unsigned int *VAR_9;
    unsigned char *VAR_10 = VAR_3->frame->data[0];
    int VAR_11 = VAR_3->flags & VAR_2;


    const unsigned char *VAR_12 = VAR_3->mb_change_bits;
    unsigned char VAR_13;
    unsigned char VAR_14;
    int VAR_15;


    int VAR_16 = 0;
    int VAR_17;


    FUNC_4(VAR_3->vert_pred, 0, VAR_3->avctx->width * sizeof(unsigned int));

    FUNC_2();

    for (VAR_4 = 0; VAR_4 < VAR_3->avctx->height; VAR_4++) {


        VAR_7 = 0;
        VAR_9 = (unsigned int *)VAR_10;
        VAR_8 = VAR_3->vert_pred;
        VAR_15 = 0;
        if (!VAR_11)
            VAR_13 = VAR_12[VAR_15++];
        VAR_14 = 0x01;
        VAR_5 = VAR_3->avctx->width;

        while (VAR_5 > 0) {

            if (VAR_11 || ((VAR_13 & VAR_14) == 0)) {

                switch (VAR_4 & 3) {
                case 0:


                    if (VAR_3->block_width == 2) {
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                    } else {
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                        FUNC_1();
                        FUNC_3();
                    }
                    break;

                case 1:
                case 3:

                    FUNC_1();
                    FUNC_3();
                    FUNC_1();
                    FUNC_3();
                    break;

                case 2:


                    if (VAR_3->block_type == VAR_0) {
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                    } else if (VAR_3->block_type == VAR_1) {
                        FUNC_0();
                        FUNC_1();
                        FUNC_3();
                        FUNC_1();
                        FUNC_3();
                    } else {
                        FUNC_1();
                        FUNC_3();
                        FUNC_1();
                        FUNC_3();
                    }
                    break;
                }

            } else {



                *VAR_8++ = *VAR_9++;
                VAR_7 = *VAR_9 - *VAR_8;
                *VAR_8++ = *VAR_9++;

            }

            if (!VAR_11) {
                VAR_14 <<= 1;


                if (!VAR_14) {
                    VAR_13 = VAR_12[VAR_15++];
                    VAR_14 = 0x01;
                }
            }

            VAR_5 -= 4;
        }


        if (((VAR_4 + 1) & 3) == 0)
            VAR_12 += VAR_3->mb_change_bits_row_size;

        VAR_10 += VAR_3->frame->linesize[0];
    }
}
