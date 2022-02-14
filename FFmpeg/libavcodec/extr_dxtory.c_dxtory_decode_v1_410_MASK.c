
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_9__ {int width; int height; int pix_fmt; } ;
struct TYPE_8__ {int* linesize; scalar_t__** data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 long long FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, AVFrame *VAR_4,
                                const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    uint8_t *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;
    int VAR_15;

    if (VAR_6 < FUNC_1(VAR_3->width, 4) * FUNC_1(VAR_3->height, 4) * 9LL / 8) {
        FUNC_2(VAR_3, VAR_1, "packet too small\n");
        return VAR_0;
    }

    VAR_3->pix_fmt = VAR_2;
    if ((VAR_15 = FUNC_3(VAR_3, VAR_4, 0)) < 0)
        return VAR_15;

    VAR_9 = VAR_4->data[0];
    VAR_10 = VAR_4->data[0] + VAR_4->linesize[0];
    VAR_11 = VAR_4->data[0] + VAR_4->linesize[0] * 2;
    VAR_12 = VAR_4->data[0] + VAR_4->linesize[0] * 3;
    VAR_13 = VAR_4->data[1];
    VAR_14 = VAR_4->data[2];
    for (VAR_7 = 0; VAR_7 < VAR_3->height; VAR_7 += 4) {
        for (VAR_8 = 0; VAR_8 < VAR_3->width; VAR_8 += 4) {
            FUNC_0(VAR_9 + VAR_8, VAR_5);
            FUNC_0(VAR_10 + VAR_8, VAR_5 + 4);
            FUNC_0(VAR_11 + VAR_8, VAR_5 + 8);
            FUNC_0(VAR_12 + VAR_8, VAR_5 + 12);
            VAR_13[VAR_8 >> 2] = VAR_5[16] + 0x80;
            VAR_14[VAR_8 >> 2] = VAR_5[17] + 0x80;
            VAR_5 += 18;
        }
        VAR_9 += VAR_4->linesize[0] << 2;
        VAR_10 += VAR_4->linesize[0] << 2;
        VAR_11 += VAR_4->linesize[0] << 2;
        VAR_12 += VAR_4->linesize[0] << 2;
        VAR_13 += VAR_4->linesize[1];
        VAR_14 += VAR_4->linesize[2];
    }

    return 0;
}
