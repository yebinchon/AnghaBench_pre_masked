
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int,int) ;
 int** VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_2, ptrdiff_t VAR_3,
                         uint16_t *VAR_4, uint16_t *VAR_5, uint32_t VAR_6)
{
    uint32_t VAR_7 = VAR_6;
    uint16_t VAR_8 = *VAR_5;
    uint16_t VAR_9 = *VAR_4;
    uint16_t VAR_10, VAR_11;
    int VAR_12, VAR_13;




    static const int VAR_14[4] = { 3, 0, 2, 1 };
    static const int VAR_15[4] = { 0x090000, 0x000900, 0x040102, 0x010402 };


    if ((VAR_6 ^ (VAR_6 << 2)) < 4) {


        int VAR_16 = 8, VAR_17 = 8, VAR_18 = 8;
        for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
            for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
                VAR_16 += VAR_2[0 + VAR_12 * 4 + VAR_13 * VAR_3];
                VAR_17 += VAR_2[1 + VAR_12 * 4 + VAR_13 * VAR_3];
                VAR_18 += VAR_2[2 + VAR_12 * 4 + VAR_13 * VAR_3];
            }
        }

        VAR_16 >>= 4;
        VAR_17 >>= 4;
        VAR_18 >>= 4;

        VAR_11 = (VAR_0[VAR_16][0] << 11) | (VAR_1[VAR_17][0] << 5) | VAR_0[VAR_18][0];
        VAR_10 = (VAR_0[VAR_16][1] << 11) | (VAR_1[VAR_17][1] << 5) | VAR_0[VAR_18][1];
    } else {
        float VAR_19, VAR_20, VAR_21;
        int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
        int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
        int VAR_28 = 0;
        int VAR_29, VAR_30, VAR_31;

        for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
            for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
                int VAR_32 = VAR_7 & 3;
                int VAR_33 = VAR_14[VAR_32];
                int VAR_34 = VAR_2[0 + VAR_12 * 4 + VAR_13 * VAR_3];
                int VAR_35 = VAR_2[1 + VAR_12 * 4 + VAR_13 * VAR_3];
                int VAR_36 = VAR_2[2 + VAR_12 * 4 + VAR_13 * VAR_3];

                VAR_28 += VAR_15[VAR_32];
                VAR_22 += VAR_33 * VAR_34;
                VAR_23 += VAR_33 * VAR_35;
                VAR_24 += VAR_33 * VAR_36;
                VAR_25 += VAR_34;
                VAR_26 += VAR_35;
                VAR_27 += VAR_36;

                VAR_7 >>= 2;
            }
        }

        VAR_25 = 3 * VAR_25 - VAR_22;
        VAR_26 = 3 * VAR_26 - VAR_23;
        VAR_27 = 3 * VAR_27 - VAR_24;


        VAR_29 = VAR_28 >> 16;
        VAR_31 = (VAR_28 >> 8) & 0xFF;
        VAR_30 = (VAR_28 >> 0) & 0xFF;

        VAR_19 = 3.0f * 31.0f / 255.0f / (VAR_29 * VAR_31 - VAR_30 * VAR_30);
        VAR_20 = VAR_19 * 63.0f / 31.0f;
        VAR_21 = VAR_19;


        VAR_11 = FUNC_0((VAR_22 * VAR_31 - VAR_25 * VAR_30) * VAR_19 + 0.5f, 5) << 11;
        VAR_11 |= FUNC_0((VAR_23 * VAR_31 - VAR_26 * VAR_30) * VAR_20 + 0.5f, 6) << 5;
        VAR_11 |= FUNC_0((VAR_24 * VAR_31 - VAR_27 * VAR_30) * VAR_21 + 0.5f, 5) << 0;

        VAR_10 = FUNC_0((VAR_25 * VAR_29 - VAR_22 * VAR_30) * VAR_19 + 0.5f, 5) << 11;
        VAR_10 |= FUNC_0((VAR_26 * VAR_29 - VAR_23 * VAR_30) * VAR_20 + 0.5f, 6) << 5;
        VAR_10 |= FUNC_0((VAR_27 * VAR_29 - VAR_24 * VAR_30) * VAR_21 + 0.5f, 5) << 0;
    }

    *VAR_5 = VAR_10;
    *VAR_4 = VAR_11;
    return VAR_8 != VAR_10 || VAR_9 != VAR_11;
}
