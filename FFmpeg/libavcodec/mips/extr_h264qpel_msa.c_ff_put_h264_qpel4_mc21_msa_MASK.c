
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int const*,int,int ,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int ,int ,int,int,int,int *,int) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int const) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

void FUNC_16(uint8_t *VAR_1, const uint8_t *VAR_2,
                                ptrdiff_t VAR_3)
{
    const int32_t VAR_4 = 0xfffb0001;
    const int32_t VAR_5 = 0x140014;
    const int32_t VAR_6 = 0x1fffb;
    v16u8 VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    v8i16 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39, VAR_40, VAR_41;
    v4i32 VAR_42, VAR_43;

    FUNC_3(&VAR_0[48], 16, VAR_17, VAR_18, VAR_19);

    VAR_31 = (v8i16) FUNC_14(VAR_4);
    VAR_32 = (v8i16) FUNC_14(VAR_5);
    VAR_33 = (v8i16) FUNC_14(VAR_6);

    VAR_2 -= ((2 * VAR_3) + 2);

    FUNC_5(VAR_2, VAR_3, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_2 += (5 * VAR_3);
    FUNC_4(VAR_2, VAR_3, VAR_13, VAR_14, VAR_15, VAR_16);

    FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16);

    VAR_20 = FUNC_1(VAR_8, VAR_9, VAR_17, VAR_18, VAR_19);
    VAR_22 = FUNC_1(VAR_10, VAR_11, VAR_17, VAR_18, VAR_19);
    VAR_24 = FUNC_1(VAR_12, VAR_13, VAR_17, VAR_18, VAR_19);
    VAR_26 = FUNC_1(VAR_14, VAR_15, VAR_17, VAR_18, VAR_19);
    VAR_28 = FUNC_1(VAR_16, VAR_16, VAR_17, VAR_18, VAR_19);
    FUNC_7(VAR_20, VAR_20, VAR_22, VAR_22, VAR_21, VAR_23);
    FUNC_7(VAR_24, VAR_24, VAR_26, VAR_26, VAR_25, VAR_27);

    FUNC_2(VAR_21, VAR_20, VAR_22, VAR_21, VAR_23, VAR_22, VAR_24,
               VAR_23, VAR_34, VAR_35, VAR_36, VAR_37);
    FUNC_2(VAR_25, VAR_24, VAR_26, VAR_25, VAR_27, VAR_26, VAR_28,
               VAR_27, VAR_38, VAR_39, VAR_40, VAR_41);

    VAR_42 = FUNC_0(VAR_34, VAR_36, VAR_38, VAR_31, VAR_32,
                          VAR_33);
    VAR_43 = FUNC_0(VAR_35, VAR_37, VAR_39, VAR_31, VAR_32,
                          VAR_33);
    VAR_29 = FUNC_15((v8i16) VAR_43, (v8i16) VAR_42);
    VAR_42 = FUNC_0(VAR_36, VAR_38, VAR_40, VAR_31, VAR_32,
                          VAR_33);
    VAR_43 = FUNC_0(VAR_37, VAR_39, VAR_41, VAR_31, VAR_32,
                          VAR_33);
    VAR_30 = FUNC_15((v8i16) VAR_43, (v8i16) VAR_42);

    FUNC_9(VAR_22, VAR_24, 5);
    FUNC_8(VAR_22, VAR_24, 7);

    VAR_29 = FUNC_13(VAR_29, VAR_22);
    VAR_30 = FUNC_13(VAR_30, VAR_24);

    VAR_7 = FUNC_6(VAR_29, VAR_30);
    FUNC_10(VAR_7, 0, 1, 2, 3, VAR_1, VAR_3);
}
