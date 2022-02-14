
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int int32_t ;
typedef scalar_t__ int16_t ;
typedef int SwsContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(SwsContext *VAR_0, const int16_t *VAR_1,
                 const int16_t **VAR_2, int VAR_3,
                 const int16_t *VAR_4, const int16_t **VAR_5,
                 const int16_t **VAR_6, int VAR_7,
                 const int16_t **VAR_8, uint8_t *VAR_9, int VAR_10, int VAR_11)
{
    const int32_t **VAR_12 = (const int32_t **) VAR_2,
                  **VAR_13 = (const int32_t **) VAR_5,
                  **VAR_14 = (const int32_t **) VAR_6,
                  **VAR_15 = (const int32_t **) VAR_8;
    int VAR_16 = !!VAR_15;
    int VAR_17;

    for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
        int VAR_18 = 1 << 14, VAR_19 = 1 << 14;
        int VAR_20 = 1 << 14, VAR_21 = 1 << 14;
        int VAR_22;

        VAR_18 -= 0x40000000;
        VAR_19 -= 0x40000000;
        VAR_20 -= 0x40000000;
        VAR_21 -= 0x40000000;

        for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++)
            VAR_18 += VAR_12[VAR_22][VAR_17] * (unsigned)VAR_1[VAR_22];

        for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
            VAR_19 += VAR_13[VAR_22][VAR_17] * (unsigned)VAR_4[VAR_22];

        for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
            VAR_20 += VAR_14[VAR_22][VAR_17] * (unsigned)VAR_4[VAR_22];

        if (VAR_16)
            for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++)
                VAR_21 += VAR_15[VAR_22][VAR_17] * (unsigned)VAR_1[VAR_22];

        VAR_18 = 0x8000 + FUNC_1(VAR_18 >> 15);
        VAR_19 = 0x8000 + FUNC_1(VAR_19 >> 15);
        VAR_20 = 0x8000 + FUNC_1(VAR_20 >> 15);
        VAR_21 = 0x8000 + FUNC_1(VAR_21 >> 15);

        FUNC_0(VAR_9 + 8 * VAR_17, VAR_16 ? VAR_21 : 65535);
        FUNC_0(VAR_9 + 8 * VAR_17 + 2, VAR_18);
        FUNC_0(VAR_9 + 8 * VAR_17 + 4, VAR_19);
        FUNC_0(VAR_9 + 8 * VAR_17 + 6, VAR_20);
    }
}
