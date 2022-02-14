
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int const uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int const*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int ** VAR_0 ;

void FUNC_10(uint8_t *VAR_1, ptrdiff_t VAR_2,
                          const uint8_t *VAR_3, ptrdiff_t VAR_4,
                          int VAR_5, int VAR_6, int VAR_7)
{
    uint32_t VAR_8;
    const int8_t *VAR_9 = VAR_0[VAR_7 - 1];
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    v8u16 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;


    VAR_32 = FUNC_5(VAR_9);
    VAR_19 = (v16u8) FUNC_9((v8i16) VAR_32, 0);

    VAR_10 = FUNC_3(VAR_3);
    VAR_3 += VAR_4;

    for (VAR_8 = (VAR_5 >> 2); VAR_8--;) {
        FUNC_4(VAR_3, VAR_4, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_3 += (4 * VAR_4);

        FUNC_4(VAR_1, VAR_2, VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_2(VAR_11, VAR_10, VAR_12, VAR_11, VAR_20, VAR_22);
        FUNC_1(VAR_11, VAR_10, VAR_12, VAR_11, VAR_21, VAR_23);
        FUNC_0(VAR_20, VAR_21, VAR_19, VAR_19, VAR_28, VAR_29);
        FUNC_8(VAR_28, VAR_29, 7);
        FUNC_7(VAR_28, VAR_29, 7);
        FUNC_6(VAR_29, VAR_28, VAR_15, VAR_1);
        VAR_1 += VAR_2;

        FUNC_2(VAR_13, VAR_12, VAR_14, VAR_13, VAR_24, VAR_26);
        FUNC_1(VAR_13, VAR_12, VAR_14, VAR_13, VAR_25, VAR_27);
        FUNC_0(VAR_22, VAR_23, VAR_19, VAR_19, VAR_30, VAR_31);
        FUNC_8(VAR_30, VAR_31, 7);
        FUNC_7(VAR_30, VAR_31, 7);
        FUNC_6(VAR_31, VAR_30, VAR_16, VAR_1);
        VAR_1 += VAR_2;

        FUNC_0(VAR_24, VAR_25, VAR_19, VAR_19, VAR_28, VAR_29);
        FUNC_8(VAR_28, VAR_29, 7);
        FUNC_7(VAR_28, VAR_29, 7);
        FUNC_6(VAR_29, VAR_28, VAR_17, VAR_1);
        VAR_1 += VAR_2;

        FUNC_0(VAR_26, VAR_27, VAR_19, VAR_19, VAR_30, VAR_31);
        FUNC_8(VAR_30, VAR_31, 7);
        FUNC_7(VAR_30, VAR_31, 7);
        FUNC_6(VAR_31, VAR_30, VAR_18, VAR_1);
        VAR_1 += VAR_2;

        VAR_10 = VAR_14;
    }
}
