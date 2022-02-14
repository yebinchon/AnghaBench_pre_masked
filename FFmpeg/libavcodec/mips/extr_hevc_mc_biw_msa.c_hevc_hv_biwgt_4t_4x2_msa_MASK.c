
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int,int ,int,int,int) ;
 int FUNC_10 (int,int ,int,int) ;
 int FUNC_11 (int,int,int) ;
 int FUNC_12 (scalar_t__,int ,int,int *,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int,int,int) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_20(uint8_t *VAR_1,
                                     int32_t VAR_2,
                                     int16_t *VAR_3,
                                     int32_t VAR_4,
                                     uint8_t *VAR_5,
                                     int32_t VAR_6,
                                     const int8_t *VAR_7,
                                     const int8_t *VAR_8,
                                     int32_t VAR_9,
                                     int32_t VAR_10,
                                     int32_t VAR_11,
                                     int32_t VAR_12,
                                     int32_t VAR_13)
{
    uint64_t VAR_14, VAR_15;
    int32_t VAR_16, VAR_17;
    v8i16 VAR_18 = { 0 };
    v16u8 VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28;
    v16i8 VAR_29 = FUNC_6(VAR_0 + 16);
    v16i8 VAR_30;
    v8i16 VAR_31, VAR_32, VAR_33;
    v16i8 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
    v4i32 VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;

    VAR_1 -= (VAR_2 + 1);

    VAR_31 = FUNC_8(VAR_7);
    FUNC_9(VAR_31, 0, 1, VAR_25, VAR_26);

    VAR_31 = FUNC_8(VAR_8);
    FUNC_13(VAR_31, VAR_31);

    FUNC_10(VAR_31, 0, VAR_27, VAR_28);

    VAR_30 = VAR_29 + 2;

    VAR_16 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_17 = VAR_9 | (VAR_10 << 16);

    VAR_53 = FUNC_17((128 * VAR_10));
    VAR_53 <<= 6;
    VAR_51 = FUNC_17(VAR_16);
    VAR_33 = (v8i16) FUNC_17(VAR_17);
    VAR_52 = FUNC_17(VAR_13 + 1);
    VAR_51 += VAR_53;

    FUNC_7(VAR_1, VAR_2, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
    FUNC_15(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);

    FUNC_14(VAR_20, VAR_22, VAR_20, VAR_22, VAR_29, VAR_30, VAR_34, VAR_35);
    FUNC_14(VAR_21, VAR_23, VAR_21, VAR_23, VAR_29, VAR_30, VAR_36, VAR_37);
    FUNC_14(VAR_22, VAR_24, VAR_22, VAR_24, VAR_29, VAR_30, VAR_38, VAR_39);

    VAR_40 = FUNC_2(VAR_34, VAR_35, VAR_25, VAR_26);
    VAR_41 = FUNC_2(VAR_36, VAR_37, VAR_25, VAR_26);
    VAR_42 = FUNC_2(VAR_38, VAR_39, VAR_25, VAR_26);

    FUNC_3(VAR_41, VAR_40, VAR_43, VAR_44);
    FUNC_3(VAR_42, VAR_41, VAR_45, VAR_46);

    VAR_49 = FUNC_1(VAR_43, VAR_44, VAR_27, VAR_28);
    VAR_50 = FUNC_1(VAR_45, VAR_46, VAR_27, VAR_28);
    VAR_49 >>= 6;
    VAR_50 >>= 6;
    VAR_49 = (v4i32) FUNC_19((v8i16) VAR_50, (v8i16) VAR_49);

    FUNC_5(VAR_3, VAR_4, VAR_14, VAR_15);
    FUNC_4(VAR_14, VAR_15, VAR_18);

    FUNC_3(VAR_49, VAR_18, VAR_47, VAR_48);
    VAR_49 = FUNC_16(VAR_51, VAR_47, VAR_33);
    VAR_50 = FUNC_16(VAR_51, VAR_48, VAR_33);
    FUNC_11(VAR_49, VAR_50, VAR_52);
    VAR_32 = FUNC_19((v8i16) VAR_50, (v8i16) VAR_49);
    FUNC_0(VAR_32);
    VAR_19 = (v16u8) FUNC_18((v16i8) VAR_32, (v16i8) VAR_32);
    FUNC_12(VAR_19, 0, 1, VAR_5, VAR_6);
}
