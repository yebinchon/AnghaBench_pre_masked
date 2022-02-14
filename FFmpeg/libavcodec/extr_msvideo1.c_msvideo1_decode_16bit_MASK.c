
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* buf; TYPE_2__* avctx; TYPE_1__* frame; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ Msvideo1Context ;


 unsigned short FUNC_0 (unsigned char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(Msvideo1Context *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3;
    int VAR_4, VAR_5;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;
    int VAR_11;


    int VAR_12;
    unsigned char VAR_13, VAR_14;
    unsigned short VAR_15;
    int VAR_16;
    unsigned short VAR_17[8];
    unsigned short *VAR_18 = (unsigned short *)VAR_0->frame->data[0];
    int VAR_19 = VAR_0->frame->linesize[0] / 2;

    VAR_12 = 0;
    VAR_16 = 0;
    VAR_8 = VAR_0->avctx->width / 4;
    VAR_9 = VAR_0->avctx->height / 4;
    VAR_3 = VAR_8 * VAR_9;
    VAR_10 = 4;
    VAR_11 = VAR_19 + 4;

    for (VAR_7 = VAR_9; VAR_7 > 0; VAR_7--) {
        VAR_1 = ((VAR_7 * 4) - 1) * VAR_19;
        for (VAR_6 = VAR_8; VAR_6 > 0; VAR_6--) {

            if (VAR_16) {
                VAR_1 += VAR_10;
                VAR_16--;
                VAR_3--;
                continue;
            }

            VAR_2 = VAR_1;


            FUNC_1(2);
            VAR_13 = VAR_0->buf[VAR_12++];
            VAR_14 = VAR_0->buf[VAR_12++];


            if ((VAR_13 == 0) && (VAR_14 == 0) && (VAR_3 == 0)) {
                return;
            } else if ((VAR_14 & 0xFC) == 0x84) {

                VAR_16 = ((VAR_14 - 0x84) << 8) + VAR_13 - 1;
            } else if (VAR_14 < 0x80) {

                VAR_15 = (VAR_14 << 8) | VAR_13;

                FUNC_1(4);
                VAR_17[0] = FUNC_0(&VAR_0->buf[VAR_12]);
                VAR_12 += 2;
                VAR_17[1] = FUNC_0(&VAR_0->buf[VAR_12]);
                VAR_12 += 2;

                if (VAR_17[0] & 0x8000) {

                    FUNC_1(12);
                    VAR_17[2] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;
                    VAR_17[3] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;
                    VAR_17[4] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;
                    VAR_17[5] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;
                    VAR_17[6] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;
                    VAR_17[7] = FUNC_0(&VAR_0->buf[VAR_12]);
                    VAR_12 += 2;

                    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                        for (VAR_4 = 0; VAR_4 < 4; VAR_4++, VAR_15 >>= 1)
                            VAR_18[VAR_2++] =
                                VAR_17[((VAR_5 & 0x2) << 1) +
                                    (VAR_4 & 0x2) + ((VAR_15 & 0x1) ^ 1)];
                        VAR_2 -= VAR_11;
                    }
                } else {

                    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                        for (VAR_4 = 0; VAR_4 < 4; VAR_4++, VAR_15 >>= 1)
                            VAR_18[VAR_2++] = VAR_17[(VAR_15 & 0x1) ^ 1];
                        VAR_2 -= VAR_11;
                    }
                }
            } else {

                VAR_17[0] = (VAR_14 << 8) | VAR_13;

                for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
                        VAR_18[VAR_2++] = VAR_17[0];
                    VAR_2 -= VAR_11;
                }
            }

            VAR_1 += VAR_10;
            VAR_3--;
        }
    }
}
