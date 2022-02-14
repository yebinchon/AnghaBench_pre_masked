
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int* linesize; scalar_t__* data; } ;
struct TYPE_8__ {TYPE_1__* vlc; } ;
struct TYPE_7__ {int bits; int table; } ;
typedef TYPE_2__ SheerVideoContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_0, AVFrame *VAR_1, GetBitContext *VAR_2)
{
    SheerVideoContext *VAR_3 = VAR_0->priv_data;
    uint16_t *VAR_4, *VAR_5, *VAR_6;
    int VAR_7, VAR_8;

    VAR_4 = (uint16_t *)VAR_1->data[2];
    VAR_5 = (uint16_t *)VAR_1->data[0];
    VAR_6 = (uint16_t *)VAR_1->data[1];

    if (FUNC_1(VAR_2)) {
        for (VAR_7 = 0; VAR_7 < VAR_0->width; VAR_7++) {
            VAR_4[VAR_7] = FUNC_0(VAR_2, 10);
            VAR_5[VAR_7] = FUNC_0(VAR_2, 10);
            VAR_6[VAR_7] = FUNC_0(VAR_2, 10);
        }
    } else {
        int VAR_9[4] = { 512, 512, 512, 0 };

        for (VAR_7 = 0; VAR_7 < VAR_0->width; VAR_7++) {
            int VAR_10, VAR_11, VAR_12;

            VAR_10 = FUNC_2(VAR_2, VAR_3->vlc[0].table, VAR_3->vlc[0].bits, 2);
            VAR_11 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
            VAR_12 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);

            VAR_4[VAR_7] = VAR_9[0] = (VAR_10 + VAR_9[0]) & 0x3ff;
            VAR_5[VAR_7] = VAR_9[1] = (VAR_10 + VAR_11 + VAR_9[1]) & 0x3ff;
            VAR_6[VAR_7] = VAR_9[2] = (VAR_10 + VAR_11 + VAR_12 + VAR_9[2]) & 0x3ff;
        }
    }

    VAR_4 += VAR_1->linesize[2] / 2;
    VAR_5 += VAR_1->linesize[0] / 2;
    VAR_6 += VAR_1->linesize[1] / 2;

    for (VAR_8 = 1; VAR_8 < VAR_0->height; VAR_8++) {
        if (FUNC_1(VAR_2)) {
            for (VAR_7 = 0; VAR_7 < VAR_0->width; VAR_7++) {
                VAR_4[VAR_7] = FUNC_0(VAR_2, 10);
                VAR_5[VAR_7] = FUNC_0(VAR_2, 10);
                VAR_6[VAR_7] = FUNC_0(VAR_2, 10);
            }
        } else {
            int VAR_13[4], VAR_14[4], VAR_15[4];
            int VAR_16, VAR_17, VAR_18;

            VAR_13[0] = VAR_14[0] = VAR_4[-VAR_1->linesize[2] / 2];
            VAR_13[1] = VAR_14[1] = VAR_5[-VAR_1->linesize[0] / 2];
            VAR_13[2] = VAR_14[2] = VAR_6[-VAR_1->linesize[1] / 2];

            for (VAR_7 = 0; VAR_7 < VAR_0->width; VAR_7++) {
                VAR_15[0] = VAR_4[-VAR_1->linesize[2] / 2 + VAR_7];
                VAR_15[1] = VAR_5[-VAR_1->linesize[0] / 2 + VAR_7];
                VAR_15[2] = VAR_6[-VAR_1->linesize[1] / 2 + VAR_7];

                VAR_16 = FUNC_2(VAR_2, VAR_3->vlc[0].table, VAR_3->vlc[0].bits, 2);
                VAR_17 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
                VAR_18 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);

                VAR_4[VAR_7] = VAR_14[0] = (VAR_16 + ((3 * (VAR_15[0] + VAR_14[0]) - 2 * VAR_13[0]) >> 2)) & 0x3ff;
                VAR_5[VAR_7] = VAR_14[1] = (VAR_16 + VAR_17 + ((3 * (VAR_15[1] + VAR_14[1]) - 2 * VAR_13[1]) >> 2)) & 0x3ff;
                VAR_6[VAR_7] = VAR_14[2] = (VAR_16 + VAR_17 + VAR_18 + ((3 * (VAR_15[2] + VAR_14[2]) - 2 * VAR_13[2]) >> 2)) & 0x3ff;

                VAR_13[0] = VAR_15[0];
                VAR_13[1] = VAR_15[1];
                VAR_13[2] = VAR_15[2];
            }
        }

        VAR_4 += VAR_1->linesize[2] / 2;
        VAR_5 += VAR_1->linesize[0] / 2;
        VAR_6 += VAR_1->linesize[1] / 2;
    }
}
