
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_2,
                              const AVFrame *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10 = FUNC_0(VAR_2->height, VAR_1);
    int VAR_11 = FUNC_0(VAR_2->width , VAR_0);
    uint8_t *VAR_12 = VAR_3->data[0];

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += 8) {
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 8) {
            for (VAR_8 = VAR_6; VAR_8 < VAR_6 + 8 && VAR_8 < VAR_1; VAR_8++) {
                for (VAR_7 = VAR_5; VAR_7 < VAR_5 + 8 && VAR_7 < VAR_0; VAR_7 += 2) {
                    if(VAR_7 < VAR_11 && VAR_8 < VAR_10) {
                        if (VAR_7 + 1 < VAR_11) {

                            VAR_9 = (VAR_12[(VAR_7 + 0 + VAR_8 * VAR_3->linesize[0])] +
                                    VAR_12[(VAR_7 + 1 + VAR_8 * VAR_3->linesize[0])]) / 2;
                        } else {
                            VAR_9 = VAR_12[(VAR_7 + VAR_8 * VAR_3->linesize[0])];
                        }

                        VAR_4[0] = VAR_9;
                    }
                    VAR_4++;
                }
            }
        }
    }
}
