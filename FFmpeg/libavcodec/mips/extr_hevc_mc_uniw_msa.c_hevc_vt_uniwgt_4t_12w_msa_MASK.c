
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_12 (int ,int ,int,int,int,int *,int) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static void FUNC_20(uint8_t *VAR_0,
                                      int32_t VAR_1,
                                      uint8_t *VAR_2,
                                      int32_t VAR_3,
                                      const int8_t *VAR_4,
                                      int32_t VAR_5,
                                      int32_t VAR_6,
                                      int32_t VAR_7,
                                      int32_t VAR_8)
{
    int32_t VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v16i8 VAR_27, VAR_28, VAR_29, VAR_30;
    v16i8 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
    v16i8 VAR_37, VAR_38;
    v16i8 VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
    v16i8 VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
    v8i16 VAR_52, VAR_53;
    v8i16 VAR_54, VAR_55, VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62;
    v8i16 VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69;
    v4i32 VAR_70, VAR_71;

    VAR_0 -= (1 * VAR_1);

    VAR_6 = VAR_6 & 0x0000FFFF;

    VAR_70 = FUNC_17(VAR_6);
    VAR_71 = FUNC_17(VAR_8);

    VAR_6 *= 128;
    VAR_8 -= 6;

    VAR_67 = FUNC_16(VAR_6);
    VAR_68 = FUNC_16(VAR_7);
    VAR_69 = FUNC_16(VAR_8);

    VAR_67 = FUNC_19(VAR_67, VAR_69);
    VAR_68 = FUNC_15(VAR_68, VAR_67);

    VAR_66 = FUNC_8(VAR_4);
    FUNC_10(VAR_66, 0, 1, VAR_52, VAR_53);

    FUNC_6(VAR_0, VAR_1, VAR_16, VAR_17, VAR_18);
    VAR_0 += (3 * VAR_1);
    FUNC_13(VAR_16, VAR_17, VAR_18);
    FUNC_5(VAR_17, VAR_16, VAR_18, VAR_17, VAR_27, VAR_29);
    FUNC_3(VAR_17, VAR_16, VAR_18, VAR_17, VAR_31, VAR_34);
    VAR_37 = (v16i8) FUNC_18((v2i64) VAR_34, (v2i64) VAR_31);

    for (VAR_9 = 2; VAR_9--;) {
        FUNC_7(VAR_0, VAR_1, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_0 += (8 * VAR_1);
        FUNC_14(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);
        FUNC_4(VAR_19, VAR_18, VAR_28, VAR_32);
        FUNC_4(VAR_20, VAR_19, VAR_30, VAR_35);
        FUNC_4(VAR_21, VAR_20, VAR_39, VAR_33);
        FUNC_4(VAR_22, VAR_21, VAR_42, VAR_36);
        VAR_38 = (v16i8) FUNC_18((v2i64) VAR_35, (v2i64) VAR_32);
        VAR_49 = (v16i8) FUNC_18((v2i64) VAR_36, (v2i64) VAR_33);
        VAR_54 = FUNC_0(VAR_27, VAR_28, VAR_52, VAR_53);
        VAR_55 = FUNC_0(VAR_29, VAR_30, VAR_52, VAR_53);
        VAR_56 = FUNC_0(VAR_28, VAR_39, VAR_52, VAR_53);
        VAR_57 = FUNC_0(VAR_30, VAR_42, VAR_52, VAR_53);
        VAR_58 = FUNC_0(VAR_37, VAR_38, VAR_52, VAR_53);
        VAR_59 = FUNC_0(VAR_38, VAR_49, VAR_52, VAR_53);
        FUNC_2(VAR_54, VAR_55, VAR_56, VAR_57, VAR_70,
                                       VAR_68, VAR_71, VAR_54, VAR_55, VAR_56,
                                       VAR_57);
        FUNC_1(VAR_58, VAR_59, VAR_70, VAR_68,
                                       VAR_71, VAR_58, VAR_59);
        FUNC_9(VAR_55, VAR_54, VAR_57, VAR_56, VAR_59, VAR_58, VAR_10, VAR_11, VAR_12);
        FUNC_11(VAR_10, VAR_11, 0, 1, 0, 1, VAR_2, VAR_3);
        FUNC_12(VAR_12, 0, 1, 2, 3, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);

        FUNC_4(VAR_23, VAR_22, VAR_40, VAR_45);
        FUNC_4(VAR_24, VAR_23, VAR_43, VAR_47);
        FUNC_4(VAR_25, VAR_24, VAR_41, VAR_46);
        FUNC_4(VAR_26, VAR_25, VAR_44, VAR_48);
        VAR_50 = (v16i8) FUNC_18((v2i64) VAR_47, (v2i64) VAR_45);
        VAR_51 = (v16i8) FUNC_18((v2i64) VAR_48, (v2i64) VAR_46);
        VAR_60 = FUNC_0(VAR_39, VAR_40, VAR_52, VAR_53);
        VAR_61 = FUNC_0(VAR_42, VAR_43, VAR_52, VAR_53);
        VAR_62 = FUNC_0(VAR_40, VAR_41, VAR_52, VAR_53);
        VAR_63 = FUNC_0(VAR_43, VAR_44, VAR_52, VAR_53);
        VAR_64 = FUNC_0(VAR_49, VAR_50, VAR_52, VAR_53);
        VAR_65 = FUNC_0(VAR_50, VAR_51, VAR_52, VAR_53);
        FUNC_2(VAR_60, VAR_61, VAR_62, VAR_63, VAR_70,
                                       VAR_68, VAR_71, VAR_60, VAR_61, VAR_62,
                                       VAR_63);
        FUNC_1(VAR_64, VAR_65, VAR_70, VAR_68,
                                       VAR_71, VAR_64, VAR_65);
        FUNC_9(VAR_61, VAR_60, VAR_63, VAR_62, VAR_65, VAR_64, VAR_13, VAR_14, VAR_15);
        FUNC_11(VAR_13, VAR_14, 0, 1, 0, 1, VAR_2, VAR_3);
        FUNC_12(VAR_15, 0, 1, 2, 3, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_18 = VAR_26;
        VAR_27 = VAR_41;
        VAR_29 = VAR_44;
        VAR_37 = VAR_51;
    }
}
