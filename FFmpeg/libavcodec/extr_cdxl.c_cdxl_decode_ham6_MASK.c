
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_9__ {int** data; int * linesize; } ;
struct TYPE_8__ {int* new_video; TYPE_3__* avctx; } ;
typedef TYPE_1__ CDXLVideoContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_3(CDXLVideoContext *VAR_0, AVFrame *VAR_1)
{
    AVCodecContext *VAR_2 = VAR_0->avctx;
    uint32_t VAR_3[16], VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7, *VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;

    VAR_7 = VAR_0->new_video;
    VAR_8 = VAR_1->data[0];

    FUNC_2(VAR_0, VAR_3);
    FUNC_1(VAR_0, VAR_2->width, VAR_0->new_video);

    for (VAR_12 = 0; VAR_12 < VAR_2->height; VAR_12++) {
        VAR_4 = VAR_3[0] & 0xFF0000;
        VAR_5 = VAR_3[0] & 0xFF00;
        VAR_6 = VAR_3[0] & 0xFF;
        for (VAR_11 = 0; VAR_11 < VAR_2->width; VAR_11++) {
            VAR_9 = *VAR_7++;
            VAR_10 = VAR_9 >> 4;
            VAR_9 &= 15;
            switch (VAR_10) {
            case 0:
                VAR_4 = VAR_3[VAR_9] & 0xFF0000;
                VAR_5 = VAR_3[VAR_9] & 0xFF00;
                VAR_6 = VAR_3[VAR_9] & 0xFF;
                break;
            case 1:
                VAR_6 = VAR_9 * 0x11;
                break;
            case 2:
                VAR_4 = VAR_9 * 0x11 << 16;
                break;
            case 3:
                VAR_5 = VAR_9 * 0x11 << 8;
                break;
            }
            FUNC_0(VAR_8 + VAR_11 * 3, VAR_4 | VAR_5 | VAR_6);
        }
        VAR_8 += VAR_1->linesize[0];
    }
}
