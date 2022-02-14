
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                                 uint8_t *VAR_2, uint8_t *VAR_3,
                                 int VAR_4, int VAR_5,
                                 int VAR_6, int VAR_7,
                                 int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12 = VAR_4 / 2;
    int VAR_13 = VAR_5 / 2;

    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        const uint8_t *VAR_14 = VAR_0 + VAR_6 * (VAR_11 >> 1);
        uint8_t *VAR_15 = VAR_2 + VAR_8 * VAR_11;
        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
            VAR_15[2 * VAR_10] = VAR_15[2 * VAR_10 + 1] = VAR_14[VAR_10];
    }
    for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
        const uint8_t *VAR_16 = VAR_1 + VAR_7 * (VAR_11 >> 1);
        uint8_t *VAR_17 = VAR_3 + VAR_9 * VAR_11;
        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
            VAR_17[2 * VAR_10] = VAR_17[2 * VAR_10 + 1] = VAR_16[VAR_10];
    }
}
