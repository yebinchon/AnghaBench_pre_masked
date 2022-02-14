
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;
typedef int int_simd16_t ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_6, int16_t *VAR_7, ptrdiff_t VAR_8, int VAR_9)
{
    int_simd16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int_simd16_t VAR_18, VAR_19, VAR_20, VAR_21;
    int_simd16_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    int16_t *VAR_27;
    int16_t *VAR_28;

    VAR_9 *= 4;
    VAR_28 = VAR_6;
    VAR_27 = VAR_7;
    for (; VAR_9 > 0; VAR_9--) {


        VAR_18 = VAR_28[2] + VAR_28[3];
        VAR_19 = VAR_28[2] - VAR_28[3];

        VAR_21 = VAR_28[0] + VAR_28[1];
        VAR_20 = (FUNC_1(VAR_28[0] - VAR_28[1], VAR_3) << 2) - VAR_21;

        VAR_10 = VAR_18 + VAR_21;
        VAR_13 = VAR_18 - VAR_21;
        VAR_11 = VAR_19 + VAR_20;
        VAR_12 = VAR_19 - VAR_20;







        VAR_26 = VAR_28[4] + VAR_28[5];
        VAR_23 = VAR_28[4] - VAR_28[5];
        VAR_24 = VAR_28[6] + VAR_28[7];
        VAR_25 = VAR_28[6] - VAR_28[7];

        VAR_17 = VAR_24 + VAR_26;
        VAR_19 = FUNC_1(VAR_24 - VAR_26, VAR_2);

        VAR_22 = FUNC_1(VAR_23 + VAR_25, VAR_4);
        VAR_18 = FUNC_1(VAR_25, VAR_1) - VAR_22;
        VAR_20 = FUNC_1(VAR_23, VAR_5) + VAR_22;

        VAR_16 = (VAR_20 << 3) - VAR_17;
        VAR_15 = (VAR_19 << 3) - VAR_16;
        VAR_14 = (VAR_18 << 3) + VAR_15;


        VAR_27[0 * VAR_8] += FUNC_0(VAR_10 + VAR_17, 3);
        VAR_27[1 * VAR_8] += FUNC_0(VAR_11 + VAR_16, 3);
        VAR_27[2 * VAR_8] += FUNC_0(VAR_12 + VAR_15, 3);
        VAR_27[3 * VAR_8] += FUNC_0(VAR_13 - VAR_14, 3);
        VAR_27[4 * VAR_8] += FUNC_0(VAR_13 + VAR_14, 3);
        VAR_27[5 * VAR_8] += FUNC_0(VAR_12 - VAR_15, 3);
        VAR_27[6 * VAR_8] += FUNC_0(VAR_11 - VAR_16, 3);
        VAR_27[7 * VAR_8] += FUNC_0(VAR_10 - VAR_17, 3);
        VAR_27++;

        VAR_28 += VAR_0;
    }
}
