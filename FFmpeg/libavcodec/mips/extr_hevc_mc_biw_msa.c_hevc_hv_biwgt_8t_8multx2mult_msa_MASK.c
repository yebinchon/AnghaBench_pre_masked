
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_13 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int,int,int,int,int) ;
 int FUNC_17 (scalar_t__,int ,int,int *,int) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (int,scalar_t__,scalar_t__) ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_25(uint8_t *VAR_1,
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
    uint32_t VAR_16, VAR_17;
    int32_t VAR_18, VAR_19;
    uint8_t *VAR_20;
    int16_t *VAR_21;
    uint8_t *VAR_22;
    v16u8 VAR_23;
    v16i8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39, VAR_40, VAR_41, VAR_42;
    v16i8 VAR_43 = FUNC_8(VAR_0);
    v16i8 VAR_44, VAR_45, VAR_46;
    v8i16 VAR_47, VAR_48;
    v16i8 VAR_49, VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56;
    v16i8 VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63, VAR_64;
    v8i16 VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70, VAR_71, VAR_72, VAR_73;
    v4i32 VAR_74, VAR_75, VAR_76, VAR_77;
    v8i16 VAR_78, VAR_79, VAR_80, VAR_81;
    v8i16 VAR_82, VAR_83, VAR_84, VAR_85;
    v8i16 VAR_86, VAR_87, VAR_88, VAR_89;
    v8i16 VAR_90, VAR_91, VAR_92, VAR_93;
    v8i16 VAR_94, VAR_95, VAR_96, VAR_97;
    v4i32 VAR_98, VAR_99, VAR_100;

    VAR_1 -= ((3 * VAR_2) + 3);

    VAR_18 = (VAR_12 + VAR_13) << VAR_14;
    VAR_10 = VAR_10 & 0x0000FFFF;
    VAR_19 = VAR_10 | (VAR_11 << 16);

    VAR_100 = FUNC_23((128 * VAR_11));
    VAR_100 <<= 6;
    VAR_98 = FUNC_23(VAR_18);
    VAR_99 = FUNC_23(VAR_14 + 1);
    VAR_98 += VAR_100;
    VAR_48 = (v8i16) FUNC_23(VAR_19);

    VAR_47 = FUNC_11(VAR_7);
    FUNC_14(VAR_47, 0, 1, 2, 3, VAR_35, VAR_36, VAR_37, VAR_38);

    VAR_47 = FUNC_11(VAR_8);
    FUNC_18(VAR_47, VAR_47);

    FUNC_15(VAR_47, VAR_39, VAR_40, VAR_41, VAR_42);

    VAR_44 = VAR_43 + 2;
    VAR_45 = VAR_43 + 4;
    VAR_46 = VAR_43 + 6;

    for (VAR_17 = VAR_15; VAR_17--;) {
        VAR_20 = VAR_1;
        VAR_21 = VAR_3;
        VAR_22 = VAR_5;

        FUNC_10(VAR_20, VAR_2,
               VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);
        VAR_20 += (7 * VAR_2);

        FUNC_21(VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);


        FUNC_19(VAR_24, VAR_24, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_49, VAR_50, VAR_51, VAR_52);
        FUNC_19(VAR_25, VAR_25, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_53, VAR_54, VAR_55, VAR_56);
        FUNC_19(VAR_26, VAR_26, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_57, VAR_58, VAR_59, VAR_60);
        FUNC_19(VAR_27, VAR_27, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_61, VAR_62, VAR_63, VAR_64);

        VAR_65 = FUNC_2(VAR_49, VAR_50, VAR_51, VAR_52, VAR_35, VAR_36, VAR_37,
                                 VAR_38);
        VAR_66 = FUNC_2(VAR_53, VAR_54, VAR_55, VAR_56, VAR_35, VAR_36, VAR_37,
                                 VAR_38);
        VAR_67 = FUNC_2(VAR_57, VAR_58, VAR_59, VAR_60, VAR_35, VAR_36, VAR_37,
                                 VAR_38);
        VAR_68 = FUNC_2(VAR_61, VAR_62, VAR_63, VAR_64, VAR_35, VAR_36,
                                 VAR_37, VAR_38);


        FUNC_19(VAR_28, VAR_28, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_49, VAR_50, VAR_51, VAR_52);
        FUNC_19(VAR_29, VAR_29, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_53, VAR_54, VAR_55, VAR_56);
        FUNC_19(VAR_30, VAR_30, VAR_43, VAR_44, VAR_45, VAR_46,
                   VAR_57, VAR_58, VAR_59, VAR_60);

        VAR_69 = FUNC_2(VAR_49, VAR_50, VAR_51, VAR_52, VAR_35, VAR_36, VAR_37,
                                 VAR_38);
        VAR_70 = FUNC_2(VAR_53, VAR_54, VAR_55, VAR_56, VAR_35, VAR_36, VAR_37,
                                 VAR_38);
        VAR_71 = FUNC_2(VAR_57, VAR_58, VAR_59, VAR_60, VAR_35, VAR_36, VAR_37,
                                 VAR_38);

        for (VAR_16 = VAR_9 >> 1; VAR_16--;) {
            FUNC_9(VAR_20, VAR_2, VAR_31, VAR_32);
            FUNC_20(VAR_31, VAR_32);
            VAR_20 += 2 * VAR_2;

            FUNC_12(VAR_21, VAR_4, VAR_33, VAR_34);
            VAR_21 += (2 * VAR_4);

            FUNC_7(VAR_66, VAR_65, VAR_68, VAR_67, VAR_70, VAR_69, VAR_67, VAR_66, VAR_82,
                       VAR_83, VAR_84, VAR_90);
            FUNC_4(VAR_66, VAR_65, VAR_68, VAR_67, VAR_70, VAR_69, VAR_67, VAR_66, VAR_86,
                       VAR_87, VAR_88, VAR_94);
            FUNC_6(VAR_69, VAR_68, VAR_71, VAR_70, VAR_91, VAR_92);
            FUNC_3(VAR_69, VAR_68, VAR_71, VAR_70, VAR_95, VAR_96);

            FUNC_19(VAR_31, VAR_31, VAR_43, VAR_44, VAR_45, VAR_46,
                       VAR_49, VAR_50, VAR_51, VAR_52);
            VAR_72 = FUNC_2(VAR_49, VAR_50, VAR_51, VAR_52, VAR_35, VAR_36,
                                     VAR_37, VAR_38);

            FUNC_5(VAR_72, VAR_71, VAR_85, VAR_89);
            VAR_74 = FUNC_1(VAR_82, VAR_83, VAR_84, VAR_85,
                                    VAR_39, VAR_40, VAR_41, VAR_42);
            VAR_75 = FUNC_1(VAR_86, VAR_87, VAR_88, VAR_89,
                                    VAR_39, VAR_40, VAR_41, VAR_42);

            VAR_74 >>= 6;
            VAR_75 >>= 6;


            FUNC_19(VAR_32, VAR_32, VAR_43, VAR_44, VAR_45, VAR_46,
                       VAR_49, VAR_50, VAR_51, VAR_52);
            VAR_73 = FUNC_2(VAR_49, VAR_50, VAR_51, VAR_52, VAR_35, VAR_36,
                                     VAR_37, VAR_38);

            FUNC_5(VAR_73, VAR_72, VAR_93, VAR_97);
            VAR_76 = FUNC_1(VAR_90, VAR_91, VAR_92, VAR_93,
                                    VAR_39, VAR_40, VAR_41, VAR_42);
            VAR_77 = FUNC_1(VAR_94, VAR_95, VAR_96, VAR_97,
                                    VAR_39, VAR_40, VAR_41, VAR_42);

            VAR_76 >>= 6;
            VAR_77 >>= 6;

            FUNC_13(VAR_75, VAR_74, VAR_77, VAR_76, VAR_79, VAR_81);
            FUNC_5(VAR_79, VAR_33, VAR_78, VAR_79);
            FUNC_5(VAR_81, VAR_34, VAR_80, VAR_81);
            VAR_74 = FUNC_22(VAR_98, VAR_78, VAR_48);
            VAR_75 = FUNC_22(VAR_98, VAR_79, VAR_48);
            VAR_76 = FUNC_22(VAR_98, VAR_80, VAR_48);
            VAR_77 = FUNC_22(VAR_98, VAR_81, VAR_48);
            FUNC_16(VAR_75, VAR_74, VAR_77, VAR_76, VAR_99);
            FUNC_0(VAR_75, VAR_74, VAR_77, VAR_76);
            FUNC_13(VAR_75, VAR_74, VAR_77, VAR_76, VAR_78, VAR_79);
            VAR_23 = (v16u8) FUNC_24((v16i8) VAR_79, (v16i8) VAR_78);
            FUNC_17(VAR_23, 0, 1, VAR_22, VAR_6);
            VAR_22 += (2 * VAR_6);

            VAR_65 = VAR_67;
            VAR_66 = VAR_68;
            VAR_67 = VAR_69;
            VAR_68 = VAR_70;
            VAR_69 = VAR_71;
            VAR_70 = VAR_72;
            VAR_71 = VAR_73;
        }

        VAR_1 += 8;
        VAR_3 += 8;
        VAR_5 += 8;
    }
}
