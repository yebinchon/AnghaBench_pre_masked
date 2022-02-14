
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int** data; int* linesize; } ;
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
    uint8_t *VAR_4;
    int VAR_5, VAR_6;

    VAR_4 = VAR_1->data[0];
    if (FUNC_1(VAR_2)) {
        for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
            VAR_4[VAR_5 * 4 + 0] = FUNC_0(VAR_2, 8);
            VAR_4[VAR_5 * 4 + 1] = FUNC_0(VAR_2, 8);
            VAR_4[VAR_5 * 4 + 2] = FUNC_0(VAR_2, 8);
        }
    } else {
        int VAR_7[4] = { -128, -128, -128, -128 };

        for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
            int VAR_8, VAR_9, VAR_10;

            VAR_8 = FUNC_2(VAR_2, VAR_3->vlc[0].table, VAR_3->vlc[0].bits, 2);
            VAR_9 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
            VAR_10 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);

            VAR_4[4 * VAR_5 + 0] = VAR_7[0] = (VAR_8 + VAR_7[0]) & 0xff;
            VAR_4[4 * VAR_5 + 1] = VAR_7[1] = (VAR_8 + VAR_9 + VAR_7[1]) & 0xff;
            VAR_4[4 * VAR_5 + 2] = VAR_7[2] = (VAR_8 + VAR_9 + VAR_10 + VAR_7[2]) & 0xff;
        }
    }

    VAR_4 += VAR_1->linesize[0];
    for (VAR_6 = 1; VAR_6 < VAR_0->height; VAR_6++) {
        if (FUNC_1(VAR_2)) {
            for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
                VAR_4[VAR_5 * 4 + 0] = FUNC_0(VAR_2, 8);
                VAR_4[VAR_5 * 4 + 1] = FUNC_0(VAR_2, 8);
                VAR_4[VAR_5 * 4 + 2] = FUNC_0(VAR_2, 8);
            }
        } else {
            int VAR_11[4];
            int VAR_12, VAR_13, VAR_14;

            VAR_11[0] = VAR_4[-VAR_1->linesize[0] + 0];
            VAR_11[1] = VAR_4[-VAR_1->linesize[0] + 1];
            VAR_11[2] = VAR_4[-VAR_1->linesize[0] + 2];

            for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++) {
                VAR_12 = FUNC_2(VAR_2, VAR_3->vlc[0].table, VAR_3->vlc[0].bits, 2);
                VAR_13 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
                VAR_14 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);

                VAR_4[4 * VAR_5 + 0] = VAR_11[0] = (VAR_12 + VAR_11[0]) & 0xff;
                VAR_4[4 * VAR_5 + 1] = VAR_11[1] = (VAR_12 + VAR_13 + VAR_11[1]) & 0xff;
                VAR_4[4 * VAR_5 + 2] = VAR_11[2] = (VAR_12 + VAR_13 + VAR_14 + VAR_11[2]) & 0xff;
            }
        }
        VAR_4 += VAR_1->linesize[0];
    }
}
