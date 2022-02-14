
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* buf; unsigned char* pal; TYPE_2__* frame; TYPE_1__* avctx; } ;
struct TYPE_6__ {unsigned char** data; int* linesize; } ;
struct TYPE_5__ {int width; int height; scalar_t__ pix_fmt; } ;
typedef TYPE_3__ Msvideo1Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(Msvideo1Context *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;
    int VAR_13;


    int VAR_14;
    unsigned char VAR_15, VAR_16;
    unsigned short VAR_17;
    int VAR_18;
    unsigned char VAR_19[8];
    unsigned char *VAR_20 = VAR_2->frame->data[0];
    int VAR_21 = VAR_2->frame->linesize[0];

    VAR_14 = 0;
    VAR_18 = 0;
    VAR_10 = VAR_2->avctx->width / 4;
    VAR_11 = VAR_2->avctx->height / 4;
    VAR_5 = VAR_10 * VAR_11;
    VAR_12 = 4;
    VAR_13 = VAR_21 + 4;

    for (VAR_9 = VAR_11; VAR_9 > 0; VAR_9--) {
        VAR_3 = ((VAR_9 * 4) - 1) * VAR_21;
        for (VAR_8 = VAR_10; VAR_8 > 0; VAR_8--) {

            if (VAR_18) {
                VAR_3 += VAR_12;
                VAR_18--;
                VAR_5--;
                continue;
            }

            VAR_4 = VAR_3;


            FUNC_0(2);
            VAR_15 = VAR_2->buf[VAR_14++];
            VAR_16 = VAR_2->buf[VAR_14++];


            if ((VAR_15 == 0) && (VAR_16 == 0) && (VAR_5 == 0))
                return;
            else if ((VAR_16 & 0xFC) == 0x84) {

                VAR_18 = ((VAR_16 - 0x84) << 8) + VAR_15 - 1;
            } else if (VAR_16 < 0x80) {

                VAR_17 = (VAR_16 << 8) | VAR_15;

                FUNC_0(2);
                VAR_19[0] = VAR_2->buf[VAR_14++];
                VAR_19[1] = VAR_2->buf[VAR_14++];

                for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                    for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_17 >>= 1)
                        VAR_20[VAR_4++] = VAR_19[(VAR_17 & 0x1) ^ 1];
                    VAR_4 -= VAR_13;
                }
            } else if (VAR_16 >= 0x90) {

                VAR_17 = (VAR_16 << 8) | VAR_15;

                FUNC_0(8);
                FUNC_1(VAR_19, &VAR_2->buf[VAR_14], 8);
                VAR_14 += 8;

                for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                    for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_17 >>= 1)
                        VAR_20[VAR_4++] =
                            VAR_19[((VAR_7 & 0x2) << 1) +
                                (VAR_6 & 0x2) + ((VAR_17 & 0x1) ^ 1)];
                    VAR_4 -= VAR_13;
                }
            } else {

                VAR_19[0] = VAR_15;

                for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                    for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
                        VAR_20[VAR_4++] = VAR_19[0];
                    VAR_4 -= VAR_13;
                }
            }

            VAR_3 += VAR_12;
            VAR_5--;
        }
    }


    if (VAR_2->avctx->pix_fmt == VAR_1)
        FUNC_1(VAR_2->frame->data[1], VAR_2->pal, VAR_0);
}
