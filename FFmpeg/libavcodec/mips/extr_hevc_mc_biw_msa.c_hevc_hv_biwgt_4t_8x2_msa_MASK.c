
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (int,int,int,int,int) ;
 int FUNC_12 (int,int,int,int,int) ;
 int FUNC_13 (scalar_t__,int ,int,int *,int) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (int,scalar_t__,scalar_t__) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int VAR_0 ;

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
    int32_t VAR_14, VAR_15;
    v16u8 VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25;
    v16i8 VAR_26 = FUNC_4(VAR_0);
    v16i8 VAR_27;
    v8i16 VAR_28, VAR_29;
    v16i8 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
    v8i16 VAR_45, VAR_46;
    v4i32 VAR_47, VAR_48, VAR_49, VAR_50;
    v8i16 VAR_51, VAR_52, VAR_53, VAR_54;
    v8i16 VAR_55, VAR_56, VAR_57, VAR_58;
    v8i16 VAR_59, VAR_60, VAR_61, VAR_62;
    v4i32 VAR_63, VAR_64, VAR_65;

    VAR_1 -= (VAR_2 + 1);

    VAR_28 = FUNC_6(VAR_7);
    FUNC_9(VAR_28, 0, 1, VAR_22, VAR_23);

    VAR_28 = FUNC_6(VAR_8);
    FUNC_14(VAR_28, VAR_28);

    FUNC_10(VAR_28, 0, VAR_24, VAR_25);

    VAR_27 = VAR_26 + 2;

    VAR_15 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_14 = VAR_9 | (VAR_10 << 16);

    VAR_65 = FUNC_18((128 * VAR_10));
    VAR_65 <<= 6;
    VAR_63 = FUNC_18(VAR_15);
    VAR_29 = (v8i16) FUNC_18(VAR_14);
    VAR_64 = FUNC_18(VAR_13 + 1);
    VAR_63 += VAR_65;

    FUNC_5(VAR_1, VAR_2, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
    FUNC_16(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);

    FUNC_7(VAR_3, VAR_4, VAR_45, VAR_46);

    FUNC_15(VAR_17, VAR_17, VAR_17, VAR_17, VAR_26, VAR_27, VAR_30, VAR_31);
    FUNC_15(VAR_18, VAR_18, VAR_18, VAR_18, VAR_26, VAR_27, VAR_32, VAR_33);
    FUNC_15(VAR_19, VAR_19, VAR_19, VAR_19, VAR_26, VAR_27, VAR_34, VAR_35);
    FUNC_15(VAR_20, VAR_20, VAR_20, VAR_20, VAR_26, VAR_27, VAR_36, VAR_37);
    FUNC_15(VAR_21, VAR_21, VAR_21, VAR_21, VAR_26, VAR_27, VAR_38, VAR_39);

    VAR_40 = FUNC_2(VAR_30, VAR_31, VAR_22, VAR_23);
    VAR_41 = FUNC_2(VAR_32, VAR_33, VAR_22, VAR_23);
    VAR_42 = FUNC_2(VAR_34, VAR_35, VAR_22, VAR_23);
    VAR_43 = FUNC_2(VAR_36, VAR_37, VAR_22, VAR_23);
    VAR_44 = FUNC_2(VAR_38, VAR_39, VAR_22, VAR_23);

    FUNC_3(VAR_41, VAR_40, VAR_51, VAR_55);
    FUNC_3(VAR_42, VAR_41, VAR_53, VAR_57);
    FUNC_3(VAR_43, VAR_42, VAR_52, VAR_56);
    FUNC_3(VAR_44, VAR_43, VAR_54, VAR_58);
    VAR_47 = FUNC_1(VAR_51, VAR_52, VAR_24, VAR_25);
    VAR_48 = FUNC_1(VAR_55, VAR_56, VAR_24, VAR_25);
    VAR_49 = FUNC_1(VAR_53, VAR_54, VAR_24, VAR_25);
    VAR_50 = FUNC_1(VAR_57, VAR_58, VAR_24, VAR_25);
    FUNC_12(VAR_47, VAR_48, VAR_49, VAR_50, 6);
    FUNC_8(VAR_48, VAR_47, VAR_50, VAR_49, VAR_60, VAR_62);

    FUNC_3(VAR_60, VAR_45, VAR_59, VAR_60);
    FUNC_3(VAR_62, VAR_46, VAR_61, VAR_62);

    VAR_47 = FUNC_17(VAR_63, VAR_59, VAR_29);
    VAR_48 = FUNC_17(VAR_63, VAR_60, VAR_29);
    VAR_49 = FUNC_17(VAR_63, VAR_61, VAR_29);
    VAR_50 = FUNC_17(VAR_63, VAR_62, VAR_29);
    FUNC_11(VAR_47, VAR_48, VAR_49, VAR_50, VAR_64);
    FUNC_8(VAR_48, VAR_47, VAR_50, VAR_49, VAR_59, VAR_60);
    FUNC_0(VAR_59, VAR_60);
    VAR_16 = (v16u8) FUNC_19((v16i8) VAR_60, (v16i8) VAR_59);
    FUNC_13(VAR_16, 0, 1, VAR_5, VAR_6);
}
