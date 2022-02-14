
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {float re; } ;
typedef TYPE_1__ FFTComplex ;
typedef TYPE_2__ ConvolveContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (float,int ,int const) ;
 int FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(ConvolveContext *VAR_0, FFTComplex *VAR_1, AVFrame *VAR_2,
                       int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7)
{
    const int VAR_8 = (1 << VAR_0->depth) - 1;
    const int VAR_9 = VAR_4 / 2;
    const int VAR_10 = VAR_3 / 2;
    int VAR_11, VAR_12;

    if (VAR_0->depth == 8) {
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint8_t *VAR_13 = VAR_2->data[VAR_6] + (VAR_11 + VAR_9) * VAR_2->linesize[VAR_6] + VAR_10;
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_13[VAR_12] = FUNC_1(VAR_1[VAR_11 * VAR_5 + VAR_12].re * VAR_7);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint8_t *VAR_14 = VAR_2->data[VAR_6] + (VAR_11 + VAR_9) * VAR_2->linesize[VAR_6];
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_14[VAR_12] = FUNC_1(VAR_1[VAR_11 * VAR_5 + VAR_5 - VAR_10 + VAR_12].re * VAR_7);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint8_t *VAR_15 = VAR_2->data[VAR_6] + VAR_11 * VAR_2->linesize[VAR_6] + VAR_10;
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_15[VAR_12] = FUNC_1(VAR_1[(VAR_5 - VAR_9 + VAR_11) * VAR_5 + VAR_12].re * VAR_7);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint8_t *VAR_16 = VAR_2->data[VAR_6] + VAR_11 * VAR_2->linesize[VAR_6];
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_16[VAR_12] = FUNC_1(VAR_1[(VAR_5 - VAR_9 + VAR_11) * VAR_5 + VAR_5 - VAR_10 + VAR_12].re * VAR_7);
        }
    } else {
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint16_t *VAR_17 = (uint16_t *)(VAR_2->data[VAR_6] + (VAR_11 + VAR_9) * VAR_2->linesize[VAR_6] + VAR_10 * 2);
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_17[VAR_12] = FUNC_0(VAR_1[VAR_11 * VAR_5 + VAR_12].re * VAR_7, 0, VAR_8);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint16_t *VAR_18 = (uint16_t *)(VAR_2->data[VAR_6] + (VAR_11 + VAR_9) * VAR_2->linesize[VAR_6]);
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_18[VAR_12] = FUNC_0(VAR_1[VAR_11 * VAR_5 + VAR_5 - VAR_10 + VAR_12].re * VAR_7, 0, VAR_8);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint16_t *VAR_19 = (uint16_t *)(VAR_2->data[VAR_6] + VAR_11 * VAR_2->linesize[VAR_6] + VAR_10 * 2);
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_19[VAR_12] = FUNC_0(VAR_1[(VAR_5 - VAR_9 + VAR_11) * VAR_5 + VAR_12].re * VAR_7, 0, VAR_8);
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            uint16_t *VAR_20 = (uint16_t *)(VAR_2->data[VAR_6] + VAR_11 * VAR_2->linesize[VAR_6]);
            for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_20[VAR_12] = FUNC_0(VAR_1[(VAR_5 - VAR_9 + VAR_11) * VAR_5 + VAR_5 - VAR_10 + VAR_12].re * VAR_7, 0, VAR_8);
        }
    }
}
