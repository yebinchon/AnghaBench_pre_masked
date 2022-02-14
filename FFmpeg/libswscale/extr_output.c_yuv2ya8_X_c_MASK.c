
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int SwsContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(SwsContext *VAR_0, const int16_t *VAR_1,
            const int16_t **VAR_2, int VAR_3,
            const int16_t *VAR_4, const int16_t **VAR_5,
            const int16_t **VAR_6, int VAR_7,
            const int16_t **VAR_8, uint8_t *VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12 = !!VAR_8;
    int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
        int VAR_14;
        int VAR_15 = 1 << 18, VAR_16 = 1 << 18;

        for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
            VAR_15 += VAR_2[VAR_14][VAR_13] * VAR_1[VAR_14];

        VAR_15 >>= 19;
        if (VAR_15 & 0x100)
            VAR_15 = FUNC_0(VAR_15);

        if (VAR_12) {
            for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
                VAR_16 += VAR_8[VAR_14][VAR_13] * VAR_1[VAR_14];

            VAR_16 >>= 19;

            if (VAR_16 & 0x100)
                VAR_16 = FUNC_0(VAR_16);
        }

        VAR_9[2 * VAR_13 ] = VAR_15;
        VAR_9[2 * VAR_13 + 1] = VAR_12 ? VAR_16 : 255;
    }
}
