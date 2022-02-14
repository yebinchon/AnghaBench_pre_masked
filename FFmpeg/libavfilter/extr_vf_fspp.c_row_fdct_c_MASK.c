
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ptrdiff_t ;
typedef int int_simd16_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_5, const uint8_t *VAR_6, ptrdiff_t VAR_7, int VAR_8)
{
    int_simd16_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int_simd16_t VAR_17, VAR_18, VAR_19, VAR_20;
    int_simd16_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    int16_t *VAR_28;

    VAR_8 *= 4;


    VAR_28 = VAR_5;
    for (; VAR_8 > 0; VAR_8--) {
        VAR_9 = VAR_6[VAR_7 * 0] + VAR_6[VAR_7 * 7];
        VAR_16 = VAR_6[VAR_7 * 0] - VAR_6[VAR_7 * 7];
        VAR_10 = VAR_6[VAR_7 * 1] + VAR_6[VAR_7 * 6];
        VAR_15 = VAR_6[VAR_7 * 1] - VAR_6[VAR_7 * 6];
        VAR_11 = VAR_6[VAR_7 * 2] + VAR_6[VAR_7 * 5];
        VAR_14 = VAR_6[VAR_7 * 2] - VAR_6[VAR_7 * 5];
        VAR_12 = VAR_6[VAR_7 * 3] + VAR_6[VAR_7 * 4];
        VAR_13 = VAR_6[VAR_7 * 3] - VAR_6[VAR_7 * 4];



        VAR_17 = VAR_9 + VAR_12;
        VAR_20 = VAR_9 - VAR_12;
        VAR_18 = VAR_10 + VAR_11;
        VAR_19 = VAR_10 - VAR_11;



        VAR_28[2] = VAR_17 + VAR_18;
        VAR_28[3] = VAR_17 - VAR_18;

        VAR_21 = FUNC_0((VAR_19 + VAR_20) << 2, VAR_3);
        VAR_28[0] = VAR_20 + VAR_21;
        VAR_28[1] = VAR_20 - VAR_21;



        VAR_17 = (VAR_13 + VAR_14) << 2;
        VAR_18 = (VAR_14 + VAR_15) << 2;
        VAR_19 = (VAR_15 + VAR_16) << 2;

        VAR_25 = FUNC_0(VAR_17 - VAR_19, VAR_1);
        VAR_22 = FUNC_0(VAR_17, VAR_2) + VAR_25;
        VAR_24 = FUNC_0(VAR_19, VAR_4) + VAR_25;
        VAR_23 = FUNC_0(VAR_18, VAR_3);

        VAR_26 = VAR_16 + VAR_23;
        VAR_27 = VAR_16 - VAR_23;

        VAR_28[4] = VAR_27 + VAR_22;
        VAR_28[5] = VAR_27 - VAR_22;
        VAR_28[6] = VAR_26 + VAR_24;
        VAR_28[7] = VAR_26 - VAR_24;

        VAR_6++;
        VAR_28 += VAR_0;
    }
}
