
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float uint8_t ;
typedef float uint16_t ;
struct TYPE_9__ {float** data; int* linesize; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {float re; scalar_t__ im; } ;
typedef TYPE_1__ FFTComplex ;
typedef TYPE_2__ ConvolveContext ;
typedef TYPE_3__ AVFrame ;



__attribute__((used)) static void FUNC_0(ConvolveContext *VAR_0, FFTComplex *VAR_1,
                      AVFrame *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7)
{
    const int VAR_8 = (VAR_5 - VAR_3) / 2, VAR_9 = (VAR_5 - VAR_4) / 2;
    int VAR_10, VAR_11;

    if (VAR_0->depth == 8) {
        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
            const uint8_t *VAR_12 = VAR_2->data[VAR_6] + VAR_2->linesize[VAR_6] * VAR_10;

            for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8 + VAR_11].re = VAR_12[VAR_11] * VAR_7;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8 + VAR_11].im = 0;
            }

            for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].re = VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8].re;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].im = 0;
            }

            for (VAR_11 = VAR_5 - VAR_8; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].re = VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_5 - VAR_8 - 1].re;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].im = 0;
            }
        }

        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[VAR_10 * VAR_5 + VAR_11].re = VAR_1[VAR_9 * VAR_5 + VAR_11].re;
                VAR_1[VAR_10 * VAR_5 + VAR_11].im = 0;
            }
        }

        for (VAR_10 = VAR_5 - VAR_9; VAR_10 < VAR_5; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[VAR_10 * VAR_5 + VAR_11].re = VAR_1[(VAR_5 - VAR_9 - 1) * VAR_5 + VAR_11].re;
                VAR_1[VAR_10 * VAR_5 + VAR_11].im = 0;
            }
        }
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
            const uint16_t *VAR_13 = (const uint16_t *)(VAR_2->data[VAR_6] + VAR_2->linesize[VAR_6] * VAR_10);

            for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8 + VAR_11].re = VAR_13[VAR_11] * VAR_7;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8 + VAR_11].im = 0;
            }

            for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].re = VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_8].re;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].im = 0;
            }

            for (VAR_11 = VAR_5 - VAR_8; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].re = VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_5 - VAR_8 - 1].re;
                VAR_1[(VAR_10 + VAR_9) * VAR_5 + VAR_11].im = 0;
            }
        }

        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[VAR_10 * VAR_5 + VAR_11].re = VAR_1[VAR_9 * VAR_5 + VAR_11].re;
                VAR_1[VAR_10 * VAR_5 + VAR_11].im = 0;
            }
        }

        for (VAR_10 = VAR_5 - VAR_9; VAR_10 < VAR_5; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
                VAR_1[VAR_10 * VAR_5 + VAR_11].re = VAR_1[(VAR_5 - VAR_9 - 1) * VAR_5 + VAR_11].re;
                VAR_1[VAR_10 * VAR_5 + VAR_11].im = 0;
            }
        }
    }
}
