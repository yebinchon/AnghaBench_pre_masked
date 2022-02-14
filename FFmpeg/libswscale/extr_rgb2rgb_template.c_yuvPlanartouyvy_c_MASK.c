
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                                     const uint8_t *VAR_2, uint8_t *VAR_3,
                                     int VAR_4, int VAR_5,
                                     int VAR_6, int VAR_7,
                                     int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    const int VAR_12 = VAR_4 >> 1;

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        int *VAR_13 = (int32_t *)VAR_3;
        const uint8_t *VAR_14 = VAR_0, *VAR_15 = VAR_1, *VAR_16 = VAR_2;

        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {




            *VAR_13++ = VAR_15[0] + (VAR_14[0] << 8) +
                      (VAR_16[0] << 16) + (VAR_14[1] << 24);

            VAR_14 += 2;
            VAR_15++;
            VAR_16++;
        }

        if ((VAR_10 & (VAR_9 - 1)) == VAR_9 - 1) {
            VAR_1 += VAR_7;
            VAR_2 += VAR_7;
        }
        VAR_0 += VAR_6;
        VAR_3 += VAR_8;
    }
}
