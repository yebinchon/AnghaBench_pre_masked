
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
            const int16_t *VAR_2[2], const int16_t *VAR_3[2],
            const int16_t *VAR_4, uint8_t *VAR_5, int VAR_6,
            int VAR_7, int VAR_8)
{
    int VAR_9 = !!VAR_4;
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        int VAR_11 = (VAR_1[VAR_10] + 64) >> 7;
        int VAR_12;

        VAR_11 = FUNC_0(VAR_11);

        if (VAR_9) {
            VAR_12 = (VAR_4[VAR_10] + 64) >> 7;
            if (VAR_12 & 0x100)
                VAR_12 = FUNC_0(VAR_12);
        }

        VAR_5[VAR_10 * 2 ] = VAR_11;
        VAR_5[VAR_10 * 2 + 1] = VAR_9 ? VAR_12 : 255;
    }
}
