
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int** data; int * linesize; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1, AVFrame *VAR_2, GetByteContext *VAR_3)
{
    int VAR_4 = VAR_1->width;
    uint8_t *VAR_5 = VAR_2->data[0];
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_1->height; VAR_6++) {
        int VAR_8, VAR_9, VAR_10, VAR_11;
        uint8_t *VAR_12 = VAR_5;
        int VAR_13 = 0;


        if (VAR_4 / 4 > 200)
            VAR_8 = VAR_9 = FUNC_0(VAR_3);
        else
            VAR_8 = VAR_9 = FUNC_1(VAR_3);
        if (FUNC_2(VAR_3) < VAR_8)
            return VAR_0;


        while (VAR_9 > 0) {
            VAR_10 = FUNC_1(VAR_3);
            if (VAR_10 & 0x80 ) {
                VAR_11 = FUNC_1(VAR_3);
                for (VAR_7 = 0; VAR_7 < 257 - VAR_10; VAR_7++) {
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0xC0) >> 6;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x30) >> 4;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x0C) >> 2;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x03);
                }
                VAR_9 -= 2;
            } else {
                for (VAR_7 = 0; VAR_7 < VAR_10 + 1; VAR_7++) {
                    VAR_11 = FUNC_1(VAR_3);
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0xC0) >> 6;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x30) >> 4;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x0C) >> 2;
                    if (VAR_13 < VAR_4)
                        VAR_12[VAR_13++] = (VAR_11 & 0x03);
                }
                VAR_9 -= 1 + (VAR_10 + 1);
            }
        }
        VAR_5 += VAR_2->linesize[0];
    }
    return 0;
}
