
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int ** VAR_0 ;

void FUNC_10(uint8_t *VAR_1, ptrdiff_t VAR_2,
                          const uint8_t *VAR_3, ptrdiff_t VAR_4,
                          int VAR_5, int VAR_6, int VAR_7)
{
    uint32_t VAR_8;
    const int8_t *VAR_9 = VAR_0[VAR_7 - 1];
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8u16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39;


    VAR_39 = FUNC_3(VAR_9);
    VAR_30 = (v16u8) FUNC_9(VAR_39, 0);

    FUNC_5(VAR_3, 16, VAR_10, VAR_13, VAR_16, VAR_19);
    VAR_3 += VAR_4;

    for (VAR_8 = (VAR_5 >> 1); VAR_8--;) {
        FUNC_4(VAR_3, VAR_4, VAR_11, VAR_12);
        FUNC_4(VAR_3 + 16, VAR_4, VAR_14, VAR_15);
        FUNC_4(VAR_3 + 32, VAR_4, VAR_17, VAR_18);
        FUNC_4(VAR_3 + 48, VAR_4, VAR_20, VAR_21);
        VAR_3 += (2 * VAR_4);

        FUNC_2(VAR_11, VAR_10, VAR_12, VAR_11, VAR_22, VAR_24);
        FUNC_1(VAR_11, VAR_10, VAR_12, VAR_11, VAR_23, VAR_25);
        FUNC_0(VAR_22, VAR_23, VAR_30, VAR_30, VAR_31, VAR_32);
        FUNC_8(VAR_31, VAR_32, 7);
        FUNC_7(VAR_31, VAR_32, 7);
        FUNC_6(VAR_31, VAR_32, VAR_1);

        FUNC_0(VAR_24, VAR_25, VAR_30, VAR_30, VAR_33, VAR_34);
        FUNC_8(VAR_33, VAR_34, 7);
        FUNC_7(VAR_33, VAR_34, 7);
        FUNC_6(VAR_33, VAR_34, VAR_1 + VAR_2);

        FUNC_2(VAR_14, VAR_13, VAR_15, VAR_14, VAR_26, VAR_28);
        FUNC_1(VAR_14, VAR_13, VAR_15, VAR_14, VAR_27, VAR_29);
        FUNC_0(VAR_26, VAR_27, VAR_30, VAR_30, VAR_35, VAR_36);
        FUNC_8(VAR_35, VAR_36, 7);
        FUNC_7(VAR_35, VAR_36, 7);
        FUNC_6(VAR_35, VAR_36, VAR_1 + 16);

        FUNC_0(VAR_28, VAR_29, VAR_30, VAR_30, VAR_37, VAR_38);
        FUNC_8(VAR_37, VAR_38, 7);
        FUNC_7(VAR_37, VAR_38, 7);
        FUNC_6(VAR_37, VAR_38, VAR_1 + 16 + VAR_2);

        FUNC_2(VAR_17, VAR_16, VAR_18, VAR_17, VAR_22, VAR_24);
        FUNC_1(VAR_17, VAR_16, VAR_18, VAR_17, VAR_23, VAR_25);
        FUNC_0(VAR_22, VAR_23, VAR_30, VAR_30, VAR_31, VAR_32);
        FUNC_8(VAR_31, VAR_32, 7);
        FUNC_7(VAR_31, VAR_32, 7);
        FUNC_6(VAR_31, VAR_32, VAR_1 + 32);

        FUNC_0(VAR_24, VAR_25, VAR_30, VAR_30, VAR_33, VAR_34);
        FUNC_8(VAR_33, VAR_34, 7);
        FUNC_7(VAR_33, VAR_34, 7);
        FUNC_6(VAR_33, VAR_34, VAR_1 + 32 + VAR_2);

        FUNC_2(VAR_20, VAR_19, VAR_21, VAR_20, VAR_26, VAR_28);
        FUNC_1(VAR_20, VAR_19, VAR_21, VAR_20, VAR_27, VAR_29);
        FUNC_0(VAR_26, VAR_27, VAR_30, VAR_30, VAR_35, VAR_36);
        FUNC_8(VAR_35, VAR_36, 7);
        FUNC_7(VAR_35, VAR_36, 7);
        FUNC_6(VAR_35, VAR_36, VAR_1 + 48);

        FUNC_0(VAR_28, VAR_29, VAR_30, VAR_30, VAR_37, VAR_38);
        FUNC_8(VAR_37, VAR_38, 7);
        FUNC_7(VAR_37, VAR_38, 7);
        FUNC_6(VAR_37, VAR_38, VAR_1 + 48 + VAR_2);
        VAR_1 += (2 * VAR_2);

        VAR_10 = VAR_12;
        VAR_13 = VAR_15;
        VAR_16 = VAR_18;
        VAR_19 = VAR_21;
    }
}
