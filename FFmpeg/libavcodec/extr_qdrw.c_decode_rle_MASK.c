
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

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1, AVFrame *VAR_2, GetByteContext *VAR_3,
                      int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = VAR_1->width * VAR_4;
    uint8_t *VAR_8 = VAR_2->data[0];

    for (VAR_5 = 0; VAR_5 < VAR_1->height; VAR_5++) {
        int VAR_9, VAR_10, VAR_11, VAR_12;
        uint8_t *VAR_13 = VAR_8;
        int VAR_14 = 0;


        VAR_9 = VAR_10 = FUNC_0(VAR_3);
        if (FUNC_2(VAR_3) < VAR_9)
            return VAR_0;


        while (VAR_10 > 0) {
            VAR_11 = FUNC_1(VAR_3);
            if (VAR_11 & 0x80 ) {
                VAR_12 = FUNC_1(VAR_3);
                for (VAR_6 = 0; VAR_6 < 257 - VAR_11; VAR_6++) {
                    if (VAR_14 < VAR_7)
                        VAR_13[VAR_14] = VAR_12;
                    VAR_14 += VAR_4;
                    if (VAR_14 >= VAR_7 && VAR_4 > 1) {
                        VAR_14 -= VAR_7;
                        VAR_14++;
                    }
                }
                VAR_10 -= 2;
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_11 + 1; VAR_6++) {
                    VAR_12 = FUNC_1(VAR_3);
                    if (VAR_14 < VAR_7)
                        VAR_13[VAR_14] = VAR_12;
                    VAR_14 += VAR_4;
                    if (VAR_14 >= VAR_7 && VAR_4 > 1) {
                        VAR_14 -= VAR_7;
                        VAR_14++;
                    }
                }
                VAR_10 -= 2 + VAR_11;
            }
        }
        VAR_8 += VAR_2->linesize[0];
    }
    return 0;
}
