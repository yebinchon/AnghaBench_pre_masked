
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                                  const uint8_t *VAR_2, uint8_t *VAR_3,
                                  int VAR_4, int VAR_5,
                                  int VAR_6, int VAR_7,
                                  int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12 = VAR_4 / 2;
    int VAR_13 = VAR_5;

    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        const uint8_t *VAR_14 = VAR_0 + VAR_6 * VAR_11;
        const uint8_t *VAR_15 = VAR_1 + VAR_7 * (VAR_11 >> 2);
        const uint8_t *VAR_16 = VAR_2 + VAR_8 * (VAR_11 >> 2);
        uint8_t *VAR_17 = VAR_3 + VAR_9 * VAR_11;
        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
            const int VAR_18 = VAR_10 << 2;
            VAR_17[8 * VAR_10 + 0] = VAR_14[VAR_18];
            VAR_17[8 * VAR_10 + 1] = VAR_15[VAR_10];
            VAR_17[8 * VAR_10 + 2] = VAR_14[VAR_18 + 1];
            VAR_17[8 * VAR_10 + 3] = VAR_16[VAR_10];
            VAR_17[8 * VAR_10 + 4] = VAR_14[VAR_18 + 2];
            VAR_17[8 * VAR_10 + 5] = VAR_15[VAR_10];
            VAR_17[8 * VAR_10 + 6] = VAR_14[VAR_18 + 3];
            VAR_17[8 * VAR_10 + 7] = VAR_16[VAR_10];
        }
    }
}
