
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int) ;
 int FUNC_16 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (int ,int) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_26(uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3,
                                              int32_t VAR_4,
                                              const int8_t *VAR_5,
                                              const int8_t *VAR_6,
                                              int32_t VAR_7,
                                              int32_t VAR_8,
                                              int32_t VAR_9,
                                              int32_t VAR_10)
{
    uint32_t VAR_11;
    v16u8 VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26;
    v16i8 VAR_27 = FUNC_5(VAR_0 + 16);
    v16i8 VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v16i8 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
    v8i16 VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
    v8i16 VAR_51, VAR_52, VAR_53, VAR_54;
    v8i16 VAR_55, VAR_56, VAR_57, VAR_58;
    v8i16 VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
    v4i32 VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70, VAR_71, VAR_72, VAR_73;

    VAR_1 -= (VAR_2 + 1);

    VAR_31 = FUNC_8(VAR_5);
    FUNC_12(VAR_31, 0, 1, VAR_25, VAR_26);

    VAR_31 = FUNC_8(VAR_6);
    FUNC_17(VAR_31, VAR_31);

    FUNC_13(VAR_31, 0, VAR_29, VAR_30);

    VAR_28 = VAR_27 + 2;

    VAR_72 = FUNC_22(VAR_8);
    VAR_73 = FUNC_22(VAR_10);

    VAR_61 = FUNC_21(VAR_9);
    VAR_63 = FUNC_21(VAR_10 - 6);
    VAR_62 = FUNC_21((128 * VAR_8));
    VAR_61 += FUNC_25(VAR_62, VAR_63);

    FUNC_6(VAR_1, VAR_2, VAR_14, VAR_15, VAR_16);
    VAR_1 += (3 * VAR_2);
    FUNC_19(VAR_14, VAR_15, VAR_16);

    FUNC_18(VAR_14, VAR_15, VAR_14, VAR_15, VAR_27, VAR_28, VAR_36, VAR_37);
    FUNC_18(VAR_15, VAR_16, VAR_15, VAR_16, VAR_27, VAR_28, VAR_38, VAR_39);
    VAR_44 = FUNC_3(VAR_36, VAR_37, VAR_25, VAR_26);
    VAR_45 = FUNC_3(VAR_38, VAR_39, VAR_25, VAR_26);
    FUNC_4(VAR_45, VAR_44, VAR_51, VAR_55);
    VAR_46 = (v8i16) FUNC_24((v2i64) VAR_45, 1);

    for (VAR_11 = VAR_7 >> 3; VAR_11--;) {
        FUNC_7(VAR_1, VAR_2,
               VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
        VAR_1 += (8 * VAR_2);
        FUNC_20(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);

        FUNC_18(VAR_17, VAR_21, VAR_17, VAR_21, VAR_27, VAR_28, VAR_36, VAR_37);
        FUNC_18(VAR_18, VAR_22, VAR_18, VAR_22, VAR_27, VAR_28, VAR_38, VAR_39);
        FUNC_18(VAR_19, VAR_23, VAR_19, VAR_23, VAR_27, VAR_28, VAR_40, VAR_41);
        FUNC_18(VAR_20, VAR_24, VAR_20, VAR_24, VAR_27, VAR_28, VAR_42, VAR_43);
        VAR_47 = FUNC_3(VAR_36, VAR_37, VAR_25, VAR_26);
        VAR_48 = FUNC_3(VAR_38, VAR_39, VAR_25, VAR_26);
        VAR_49 = FUNC_3(VAR_40, VAR_41, VAR_25, VAR_26);
        VAR_50 = FUNC_3(VAR_42, VAR_43, VAR_25, VAR_26);
        VAR_52 = FUNC_23(VAR_47, VAR_46);
        FUNC_4(VAR_48, VAR_47, VAR_56, VAR_58);
        FUNC_4(VAR_49, VAR_48, VAR_53, VAR_59);
        FUNC_4(VAR_50, VAR_49, VAR_57, VAR_60);
        VAR_46 = (v8i16) FUNC_24((v2i64) VAR_47, 1);
        VAR_54 = FUNC_23(VAR_46, VAR_50);
        VAR_64 = FUNC_2(VAR_51, VAR_52, VAR_29, VAR_30);
        VAR_65 = FUNC_2(VAR_55, VAR_56, VAR_29, VAR_30);
        VAR_66 = FUNC_2(VAR_52, VAR_53, VAR_29, VAR_30);
        VAR_67 = FUNC_2(VAR_56, VAR_57, VAR_29, VAR_30);
        VAR_68 = FUNC_2(VAR_53, VAR_54, VAR_29, VAR_30);
        VAR_69 = FUNC_2(VAR_57, VAR_58, VAR_29, VAR_30);
        VAR_70 = FUNC_2(VAR_54, VAR_59, VAR_29, VAR_30);
        VAR_71 = FUNC_2(VAR_58, VAR_60, VAR_29, VAR_30);
        FUNC_15(VAR_64, VAR_65, VAR_66, VAR_67, 6);
        FUNC_15(VAR_68, VAR_69, VAR_70, VAR_71, 6);
        FUNC_9(VAR_64, VAR_72, VAR_65, VAR_72, VAR_64, VAR_65);
        FUNC_9(VAR_66, VAR_72, VAR_67, VAR_72, VAR_66, VAR_67);
        FUNC_9(VAR_68, VAR_72, VAR_69, VAR_72, VAR_68, VAR_69);
        FUNC_9(VAR_70, VAR_72, VAR_71, VAR_72, VAR_70, VAR_71);
        FUNC_14(VAR_64, VAR_65, VAR_66, VAR_67, VAR_73);
        FUNC_14(VAR_68, VAR_69, VAR_70, VAR_71, VAR_73);
        FUNC_11(VAR_65, VAR_64, VAR_67, VAR_66, VAR_69, VAR_68, VAR_71, VAR_70, VAR_32, VAR_33,
                    VAR_34, VAR_35);
        FUNC_0(VAR_32, VAR_61, VAR_33, VAR_61, VAR_32, VAR_33);
        FUNC_0(VAR_34, VAR_61, VAR_35, VAR_61, VAR_34, VAR_35);
        FUNC_1(VAR_32, VAR_33, VAR_34, VAR_35);
        FUNC_10(VAR_33, VAR_32, VAR_35, VAR_34, VAR_12, VAR_13);
        FUNC_16(VAR_12, VAR_13, 0, 1, 2, 3, 0, 1, 2, 3, VAR_3, VAR_4);
        VAR_3 += (8 * VAR_4);

        VAR_51 = VAR_59;
        VAR_55 = VAR_60;
        VAR_46 = (v8i16) FUNC_24((v2i64) VAR_50, 1);
    }
}
