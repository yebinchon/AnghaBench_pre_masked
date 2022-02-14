
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(const float *VAR_0, const float *VAR_1, float VAR_2[4], int VAR_3)
{
    float VAR_4, VAR_5, VAR_6, VAR_7 = 0;
    int VAR_8;

    VAR_4 = *VAR_1++;
    VAR_5 = *VAR_1++;
    VAR_6 = *VAR_1++;

    for (VAR_8 = 0; VAR_8 < VAR_3 - 3; VAR_8 += 4) {
        float VAR_9;

        VAR_9 = *VAR_0++;
        VAR_7 = *VAR_1++;
        VAR_2[0] += VAR_9 * VAR_4;
        VAR_2[1] += VAR_9 * VAR_5;
        VAR_2[2] += VAR_9 * VAR_6;
        VAR_2[3] += VAR_9 * VAR_7;
        VAR_9 = *VAR_0++;
        VAR_4 = *VAR_1++;
        VAR_2[0] += VAR_9 * VAR_5;
        VAR_2[1] += VAR_9 * VAR_6;
        VAR_2[2] += VAR_9 * VAR_7;
        VAR_2[3] += VAR_9 * VAR_4;
        VAR_9 = *VAR_0++;
        VAR_5 = *VAR_1++;
        VAR_2[0] += VAR_9 * VAR_6;
        VAR_2[1] += VAR_9 * VAR_7;
        VAR_2[2] += VAR_9 * VAR_4;
        VAR_2[3] += VAR_9 * VAR_5;
        VAR_9 = *VAR_0++;
        VAR_6 = *VAR_1++;
        VAR_2[0] += VAR_9 * VAR_7;
        VAR_2[1] += VAR_9 * VAR_4;
        VAR_2[2] += VAR_9 * VAR_5;
        VAR_2[3] += VAR_9 * VAR_6;
    }

    if (VAR_8++ < VAR_3) {
        float VAR_10 = *VAR_0++;

        VAR_7 = *VAR_1++;
        VAR_2[0] += VAR_10 * VAR_4;
        VAR_2[1] += VAR_10 * VAR_5;
        VAR_2[2] += VAR_10 * VAR_6;
        VAR_2[3] += VAR_10 * VAR_7;
    }

    if (VAR_8++ < VAR_3) {
        float VAR_11=*VAR_0++;

        VAR_4 = *VAR_1++;
        VAR_2[0] += VAR_11 * VAR_5;
        VAR_2[1] += VAR_11 * VAR_6;
        VAR_2[2] += VAR_11 * VAR_7;
        VAR_2[3] += VAR_11 * VAR_4;
    }

    if (VAR_8 < VAR_3) {
        float VAR_12=*VAR_0++;

        VAR_5 = *VAR_1++;
        VAR_2[0] += VAR_12 * VAR_6;
        VAR_2[1] += VAR_12 * VAR_7;
        VAR_2[2] += VAR_12 * VAR_4;
        VAR_2[3] += VAR_12 * VAR_5;
    }
}
