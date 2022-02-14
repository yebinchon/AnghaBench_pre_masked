
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                        const uint8_t *VAR_2, const uint8_t *VAR_3,
                        uint8_t *VAR_4,
                        ptrdiff_t VAR_5, ptrdiff_t VAR_6,
                        ptrdiff_t VAR_7, ptrdiff_t VAR_8,
                        ptrdiff_t VAR_9,
                        int VAR_10, int VAR_11)
{
    const uint16_t *VAR_12 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_13 = (const uint16_t *)VAR_1;
    const uint16_t *VAR_14 = (const uint16_t *)VAR_2;
    const uint16_t *VAR_15 = (const uint16_t *)VAR_3;
    uint16_t *VAR_16 = (uint16_t *)VAR_4;
    int VAR_17, VAR_18;

    for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
        for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
            VAR_16[VAR_17] = VAR_12[VAR_17] < VAR_13[VAR_17] ? VAR_14[VAR_17] : VAR_15[VAR_17];
        }

        VAR_12 += VAR_5 / 2;
        VAR_13 += VAR_6 / 2;
        VAR_14 += VAR_7 / 2;
        VAR_15 += VAR_8 / 2;
        VAR_16 += VAR_9 / 2;
    }
}
