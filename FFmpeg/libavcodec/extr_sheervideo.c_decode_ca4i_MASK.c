
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int height; int width; TYPE_2__* priv_data; } ;
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
    uint16_t *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    int VAR_8, VAR_9;

    VAR_7 = (uint16_t *)VAR_1->data[3];
    VAR_4 = (uint16_t *)VAR_1->data[0];
    VAR_5 = (uint16_t *)VAR_1->data[1];
    VAR_6 = (uint16_t *)VAR_1->data[2];

    for (VAR_9 = 0; VAR_9 < VAR_0->height; VAR_9++) {
        if (FUNC_1(VAR_2)) {
            for (VAR_8 = 0; VAR_8 < VAR_0->width; VAR_8++) {
                VAR_7[VAR_8] = FUNC_0(VAR_2, 10);
                VAR_4[VAR_8] = FUNC_0(VAR_2, 10);
                VAR_5[VAR_8] = FUNC_0(VAR_2, 10);
                VAR_6[VAR_8] = FUNC_0(VAR_2, 10);
            }
        } else {
            int VAR_10[4] = { 502, 512, 512, 502 };

            for (VAR_8 = 0; VAR_8 < VAR_0->width; VAR_8++) {
                int VAR_11, VAR_12, VAR_13, VAR_14;

                VAR_14 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
                VAR_11 = FUNC_2(VAR_2, VAR_3->vlc[0].table, VAR_3->vlc[0].bits, 2);
                VAR_12 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);
                VAR_13 = FUNC_2(VAR_2, VAR_3->vlc[1].table, VAR_3->vlc[1].bits, 2);

                VAR_7[VAR_8] = VAR_10[3] = (VAR_14 + VAR_10[3]) & 0x3ff;
                VAR_4[VAR_8] = VAR_10[0] = (VAR_11 + VAR_10[0]) & 0x3ff;
                VAR_5[VAR_8] = VAR_10[1] = (VAR_12 + VAR_10[1]) & 0x3ff;
                VAR_6[VAR_8] = VAR_10[2] = (VAR_13 + VAR_10[2]) & 0x3ff;
            }
        }

        VAR_4 += VAR_1->linesize[0] / 2;
        VAR_5 += VAR_1->linesize[1] / 2;
        VAR_6 += VAR_1->linesize[2] / 2;
        VAR_7 += VAR_1->linesize[3] / 2;
    }
}
