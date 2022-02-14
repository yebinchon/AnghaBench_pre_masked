
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int) ;
 int FUNC_16 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_24(uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3,
                                              int32_t VAR_4,
                                              const int8_t *VAR_5,
                                              const int8_t *VAR_6,
                                              int32_t VAR_7,
                                              int32_t VAR_8,
                                              int32_t VAR_9,
                                              int32_t VAR_10,
                                              int32_t VAR_11)
{
    uint32_t VAR_12, VAR_13;
    uint8_t *VAR_14;
    uint8_t *VAR_15;
    v16u8 VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29;
    v16i8 VAR_30 = FUNC_5(VAR_0);
    v16i8 VAR_31;
    v16i8 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
    v8i16 VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56;
    v8i16 VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62;
    v4i32 VAR_63, VAR_64, VAR_65, VAR_66;
    v8i16 VAR_67, VAR_68, VAR_69;
    v4i32 VAR_70, VAR_71, VAR_72, VAR_73;
    v4i32 VAR_74, VAR_75;

    VAR_1 -= (VAR_2 + 1);

    VAR_29 = FUNC_8(VAR_5);
    FUNC_12(VAR_29, 0, 1, VAR_25, VAR_26);

    VAR_29 = FUNC_8(VAR_6);
    FUNC_17(VAR_29, VAR_29);

    FUNC_13(VAR_29, 0, VAR_27, VAR_28);

    VAR_31 = VAR_30 + 2;

    VAR_74 = FUNC_22(VAR_8);
    VAR_75 = FUNC_22(VAR_10);

    VAR_67 = FUNC_21(VAR_9);
    VAR_69 = FUNC_21(VAR_10 - 6);
    VAR_68 = FUNC_21((128 * VAR_8));
    VAR_67 += FUNC_23(VAR_68, VAR_69);

    for (VAR_13 = VAR_11; VAR_13--;) {
        VAR_14 = VAR_1;
        VAR_15 = VAR_3;

        FUNC_6(VAR_14, VAR_2, VAR_18, VAR_19, VAR_20);
        VAR_14 += (3 * VAR_2);
        FUNC_19(VAR_18, VAR_19, VAR_20);

        FUNC_18(VAR_18, VAR_18, VAR_18, VAR_18, VAR_30, VAR_31, VAR_32, VAR_33);
        FUNC_18(VAR_19, VAR_19, VAR_19, VAR_19, VAR_30, VAR_31, VAR_34, VAR_35);
        FUNC_18(VAR_20, VAR_20, VAR_20, VAR_20, VAR_30, VAR_31, VAR_36, VAR_37);
        VAR_40 = FUNC_3(VAR_32, VAR_33, VAR_25, VAR_26);
        VAR_41 = FUNC_3(VAR_34, VAR_35, VAR_25, VAR_26);
        VAR_42 = FUNC_3(VAR_36, VAR_37, VAR_25, VAR_26);

        FUNC_4(VAR_41, VAR_40, VAR_51, VAR_57);
        FUNC_4(VAR_42, VAR_41, VAR_54, VAR_60);

        for (VAR_12 = VAR_7 >> 2; VAR_12--;) {
            FUNC_7(VAR_14, VAR_2, VAR_21, VAR_22, VAR_23, VAR_24);
            VAR_14 += (4 * VAR_2);
            FUNC_20(VAR_21, VAR_22, VAR_23, VAR_24);

            FUNC_18(VAR_21, VAR_21, VAR_21, VAR_21, VAR_30, VAR_31, VAR_32, VAR_33);
            FUNC_18(VAR_22, VAR_22, VAR_22, VAR_22, VAR_30, VAR_31, VAR_34, VAR_35);
            FUNC_18(VAR_23, VAR_23, VAR_23, VAR_23, VAR_30, VAR_31, VAR_36, VAR_37);
            FUNC_18(VAR_24, VAR_24, VAR_24, VAR_24, VAR_30, VAR_31, VAR_38, VAR_39);
            VAR_43 = FUNC_3(VAR_32, VAR_33, VAR_25, VAR_26);
            VAR_44 = FUNC_3(VAR_34, VAR_35, VAR_25, VAR_26);
            VAR_45 = FUNC_3(VAR_36, VAR_37, VAR_25, VAR_26);
            VAR_46 = FUNC_3(VAR_38, VAR_39, VAR_25, VAR_26);
            FUNC_4(VAR_43, VAR_42, VAR_52, VAR_58);
            FUNC_4(VAR_44, VAR_43, VAR_55, VAR_61);
            FUNC_4(VAR_45, VAR_44, VAR_53, VAR_59);
            FUNC_4(VAR_46, VAR_45, VAR_56, VAR_62);
            VAR_63 = FUNC_2(VAR_51, VAR_52, VAR_27, VAR_28);
            VAR_64 = FUNC_2(VAR_57, VAR_58, VAR_27, VAR_28);
            VAR_65 = FUNC_2(VAR_54, VAR_55, VAR_27, VAR_28);
            VAR_66 = FUNC_2(VAR_60, VAR_61, VAR_27, VAR_28);
            VAR_70 = FUNC_2(VAR_52, VAR_53, VAR_27, VAR_28);
            VAR_71 = FUNC_2(VAR_58, VAR_59, VAR_27, VAR_28);
            VAR_72 = FUNC_2(VAR_55, VAR_56, VAR_27, VAR_28);
            VAR_73 = FUNC_2(VAR_61, VAR_62, VAR_27, VAR_28);
            FUNC_15(VAR_63, VAR_64, VAR_65, VAR_66, 6);
            FUNC_15(VAR_70, VAR_71, VAR_72, VAR_73, 6);
            FUNC_9(VAR_63, VAR_74, VAR_65, VAR_74, VAR_63, VAR_65);
            FUNC_9(VAR_70, VAR_74, VAR_72, VAR_74, VAR_70, VAR_72);
            FUNC_9(VAR_64, VAR_74, VAR_66, VAR_74, VAR_64, VAR_66);
            FUNC_9(VAR_71, VAR_74, VAR_73, VAR_74, VAR_71, VAR_73);
            FUNC_14(VAR_63, VAR_64, VAR_65, VAR_66, VAR_75);
            FUNC_14(VAR_70, VAR_71, VAR_72, VAR_73, VAR_75);
            FUNC_11(VAR_64, VAR_63, VAR_66, VAR_65, VAR_71, VAR_70, VAR_73,
                        VAR_72, VAR_47, VAR_48, VAR_49, VAR_50);
            FUNC_0(VAR_47, VAR_67, VAR_48, VAR_67, VAR_47, VAR_48);
            FUNC_0(VAR_49, VAR_67, VAR_50, VAR_67, VAR_49, VAR_50);
            FUNC_1(VAR_47, VAR_48, VAR_49, VAR_50);
            FUNC_10(VAR_48, VAR_47, VAR_50, VAR_49, VAR_16, VAR_17);
            FUNC_16(VAR_16, VAR_17, 0, 1, 0, 1, VAR_15, VAR_4);
            VAR_15 += (4 * VAR_4);

            VAR_51 = VAR_53;
            VAR_57 = VAR_59;
            VAR_54 = VAR_56;
            VAR_60 = VAR_62;
            VAR_42 = VAR_46;
        }

        VAR_1 += 8;
        VAR_3 += 8;
    }
}
