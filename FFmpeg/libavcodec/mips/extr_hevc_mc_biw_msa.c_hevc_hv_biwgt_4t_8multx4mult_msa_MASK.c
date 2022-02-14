
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
typedef int int16_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int,int,int,int,int) ;
 int FUNC_9 (int,int,int,int,int ,int ) ;
 int FUNC_10 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_11 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_12 (int,int ,int,int,int) ;
 int FUNC_13 (int,int ,int,int) ;
 int FUNC_14 (int,int,int,int,int) ;
 int FUNC_15 (int,int,int,int,int) ;
 int FUNC_16 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (int,int,int) ;
 int FUNC_22 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_23(uint8_t *VAR_1,
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
                                             int32_t VAR_13,
                                             int32_t VAR_14,
                                             int32_t VAR_15)
{
    uint32_t VAR_16;
    uint32_t VAR_17;
    int32_t VAR_18, VAR_19;
    uint8_t *VAR_20;
    int16_t *VAR_21;
    uint8_t *VAR_22;
    v16u8 VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37;
    v8i16 VAR_38, VAR_39;
    v16i8 VAR_40 = FUNC_4(VAR_0);
    v16i8 VAR_41;
    v8i16 VAR_42;
    v16i8 VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
    v8i16 VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56, VAR_57;
    v4i32 VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63, VAR_64, VAR_65;
    v8i16 VAR_66, VAR_67, VAR_68, VAR_69, VAR_70, VAR_71, VAR_72, VAR_73;
    v4i32 VAR_74, VAR_75, VAR_76, VAR_77, VAR_78, VAR_79, VAR_80, VAR_81;
    v8i16 VAR_82, VAR_83, VAR_84, VAR_85, VAR_86, VAR_87;
    v8i16 VAR_88, VAR_89, VAR_90, VAR_91, VAR_92, VAR_93, VAR_94;
    v4i32 VAR_95, VAR_96, VAR_97;

    VAR_1 -= (VAR_2 + 1);

    VAR_42 = FUNC_7(VAR_7);
    FUNC_12(VAR_42, 0, 1, VAR_36, VAR_37);

    VAR_42 = FUNC_7(VAR_8);
    FUNC_17(VAR_42, VAR_42);

    FUNC_13(VAR_42, 0, VAR_38, VAR_39);

    VAR_41 = VAR_40 + 2;

    VAR_18 = (VAR_12 + VAR_13) << VAR_14;
    VAR_10 = VAR_10 & 0x0000FFFF;
    VAR_19 = VAR_10 | (VAR_11 << 16);

    VAR_97 = FUNC_22((128 * VAR_11));
    VAR_97 <<= 6;
    VAR_95 = FUNC_22(VAR_18);
    VAR_94 = (v8i16) FUNC_22(VAR_19);
    VAR_96 = FUNC_22(VAR_14 + 1);
    VAR_95 += VAR_97;

    for (VAR_17 = VAR_15 >> 3; VAR_17--;) {
        VAR_20 = VAR_1;
        VAR_21 = VAR_3;
        VAR_22 = VAR_5;

        FUNC_5(VAR_20, VAR_2, VAR_25, VAR_26, VAR_27);
        VAR_20 += (3 * VAR_2);
        FUNC_19(VAR_25, VAR_26, VAR_27);

        FUNC_18(VAR_25, VAR_25, VAR_25, VAR_25, VAR_40, VAR_41, VAR_43, VAR_44);
        FUNC_18(VAR_26, VAR_26, VAR_26, VAR_26, VAR_40, VAR_41, VAR_45, VAR_46);
        FUNC_18(VAR_27, VAR_27, VAR_27, VAR_27, VAR_40, VAR_41, VAR_47, VAR_48);
        VAR_51 = FUNC_2(VAR_43, VAR_44, VAR_36, VAR_37);
        VAR_52 = FUNC_2(VAR_45, VAR_46, VAR_36, VAR_37);
        VAR_53 = FUNC_2(VAR_47, VAR_48, VAR_36, VAR_37);

        FUNC_3(VAR_52, VAR_51, VAR_82, VAR_88);
        FUNC_3(VAR_53, VAR_52, VAR_85, VAR_91);

        for (VAR_16 = VAR_9 >> 2; VAR_16--;) {
            FUNC_6(VAR_20, VAR_2, VAR_28, VAR_29, VAR_30, VAR_31);
            VAR_20 += (4 * VAR_2);
            FUNC_8(VAR_21, VAR_4, VAR_32, VAR_33, VAR_34, VAR_35);
            VAR_21 += (4 * VAR_4);
            FUNC_20(VAR_28, VAR_29, VAR_30, VAR_31);

            FUNC_18(VAR_28, VAR_28, VAR_28, VAR_28, VAR_40, VAR_41, VAR_43, VAR_44);
            FUNC_18(VAR_29, VAR_29, VAR_29, VAR_29, VAR_40, VAR_41, VAR_45, VAR_46);
            FUNC_18(VAR_30, VAR_30, VAR_30, VAR_30, VAR_40, VAR_41, VAR_47, VAR_48);
            FUNC_18(VAR_31, VAR_31, VAR_31, VAR_31, VAR_40, VAR_41, VAR_49, VAR_50);

            VAR_54 = FUNC_2(VAR_43, VAR_44, VAR_36, VAR_37);
            VAR_55 = FUNC_2(VAR_45, VAR_46, VAR_36, VAR_37);
            VAR_56 = FUNC_2(VAR_47, VAR_48, VAR_36, VAR_37);
            VAR_57 = FUNC_2(VAR_49, VAR_50, VAR_36, VAR_37);

            FUNC_3(VAR_54, VAR_53, VAR_83, VAR_89);
            FUNC_3(VAR_55, VAR_54, VAR_86, VAR_92);
            FUNC_3(VAR_56, VAR_55, VAR_84, VAR_90);
            FUNC_3(VAR_57, VAR_56, VAR_87, VAR_93);

            VAR_58 = FUNC_1(VAR_82, VAR_83, VAR_38, VAR_39);
            VAR_59 = FUNC_1(VAR_88, VAR_89, VAR_38, VAR_39);
            VAR_60 = FUNC_1(VAR_85, VAR_86, VAR_38, VAR_39);
            VAR_61 = FUNC_1(VAR_91, VAR_92, VAR_38, VAR_39);
            VAR_62 = FUNC_1(VAR_83, VAR_84, VAR_38, VAR_39);
            VAR_63 = FUNC_1(VAR_89, VAR_90, VAR_38, VAR_39);
            VAR_64 = FUNC_1(VAR_86, VAR_87, VAR_38, VAR_39);
            VAR_65 = FUNC_1(VAR_92, VAR_93, VAR_38, VAR_39);

            FUNC_15(VAR_58, VAR_59, VAR_60, VAR_61, 6);
            FUNC_15(VAR_62, VAR_63, VAR_64, VAR_65, 6);
            FUNC_11(VAR_59, VAR_58, VAR_61, VAR_60, VAR_63, VAR_62, VAR_65,
                        VAR_64, VAR_74, VAR_75, VAR_76, VAR_77);
            FUNC_3(VAR_74, VAR_32, VAR_66, VAR_67);
            FUNC_3(VAR_75, VAR_33, VAR_68, VAR_69);
            FUNC_3(VAR_76, VAR_34, VAR_70, VAR_71);
            FUNC_3(VAR_77, VAR_35, VAR_72, VAR_73);
            VAR_74 = FUNC_21(VAR_95, VAR_66, VAR_94);
            VAR_75 = FUNC_21(VAR_95, VAR_67, VAR_94);
            VAR_76 = FUNC_21(VAR_95, VAR_68, VAR_94);
            VAR_77 = FUNC_21(VAR_95, VAR_69, VAR_94);
            VAR_78 = FUNC_21(VAR_95, VAR_70, VAR_94);
            VAR_79 = FUNC_21(VAR_95, VAR_71, VAR_94);
            VAR_80 = FUNC_21(VAR_95, VAR_72, VAR_94);
            VAR_81 = FUNC_21(VAR_95, VAR_73, VAR_94);
            FUNC_14(VAR_74, VAR_75, VAR_76, VAR_77, VAR_96);
            FUNC_14(VAR_78, VAR_79, VAR_80, VAR_81, VAR_96);
            FUNC_10(VAR_75, VAR_74, VAR_77, VAR_76, VAR_79, VAR_78, VAR_81, VAR_80,
                        VAR_66, VAR_67, VAR_68, VAR_69);
            FUNC_0(VAR_66, VAR_67, VAR_68, VAR_69);
            FUNC_9(VAR_67, VAR_66, VAR_69, VAR_68, VAR_23, VAR_24);
            FUNC_16(VAR_23, VAR_24, 0, 1, 0, 1, VAR_22, VAR_6);
            VAR_22 += (4 * VAR_6);

            VAR_82 = VAR_84;
            VAR_88 = VAR_90;
            VAR_85 = VAR_87;
            VAR_91 = VAR_93;
            VAR_53 = VAR_57;
        }

        VAR_1 += 8;
        VAR_5 += 8;
        VAR_3 += 8;
    }
}
