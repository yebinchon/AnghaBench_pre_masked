
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1,
                                uint8_t *VAR_2, uint8_t *VAR_3,
                                int VAR_4, int VAR_5, int VAR_6,
                                int VAR_7, int VAR_8)
{
    int VAR_9;
    const int VAR_10 = VAR_4 >> 1;

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 2) {
        int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            VAR_1[2 * VAR_11 + 0] = VAR_0[4 * VAR_11 + 0];
            VAR_2[VAR_11] = VAR_0[4 * VAR_11 + 1];
            VAR_1[2 * VAR_11 + 1] = VAR_0[4 * VAR_11 + 2];
            VAR_3[VAR_11] = VAR_0[4 * VAR_11 + 3];
        }
        VAR_1 += VAR_6;
        VAR_0 += VAR_8;

        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            VAR_1[2 * VAR_11 + 0] = VAR_0[4 * VAR_11 + 0];
            VAR_1[2 * VAR_11 + 1] = VAR_0[4 * VAR_11 + 2];
        }
        VAR_2 += VAR_7;
        VAR_3 += VAR_7;
        VAR_1 += VAR_6;
        VAR_0 += VAR_8;
    }
}
