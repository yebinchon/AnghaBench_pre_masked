
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ,int ,int ,int ,int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_9 (int,int,int,int,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_15(const uint8_t *VAR_1,
                                                      const uint8_t *VAR_2,
                                                      uint8_t *VAR_3,
                                                      int32_t VAR_4,
                                                      int32_t VAR_5)
{
    int16_t VAR_6[] = { -4096, -1638, -910, -630, -482, -390, -315 };
    int32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
    v8i16 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
    v8i16 VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
    int32_t VAR_54, VAR_55, VAR_56, VAR_57;
    uint8_t VAR_58[3 * 32 + 4];
    uint8_t *VAR_59 = VAR_58 + 16;
    const uint8_t *VAR_60, *VAR_61 = VAR_1 - 1;
    uint8_t *VAR_62;
    int32_t VAR_63;

    VAR_54 = VAR_0[VAR_5 - 2];
    VAR_63 = (VAR_54) >> 1;
    VAR_55 = VAR_54;

    VAR_60 = VAR_2 - 1;
    if (VAR_63 < -1) {
        VAR_56 = VAR_6[VAR_5 - 11];

        VAR_18 = FUNC_3(VAR_60);
        VAR_17 = FUNC_5(VAR_60 + 16);
        FUNC_10(VAR_18, VAR_59);
        FUNC_12(VAR_17, VAR_59 + 16);

        for (VAR_7 = VAR_63; VAR_7 <= -1; VAR_7++) {
            VAR_57 = (VAR_7 * VAR_56 + 128) >> 8;
            VAR_59[VAR_7] = VAR_61[VAR_57];
        }

        VAR_60 = VAR_59;
    }

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
        VAR_62 = VAR_3;

        VAR_9 = VAR_55 >> 5;
        VAR_10 = VAR_55 & 31;
        VAR_55 += VAR_54;

        VAR_11 = VAR_55 >> 5;
        VAR_12 = VAR_55 & 31;
        VAR_55 += VAR_54;

        VAR_13 = VAR_55 >> 5;
        VAR_14 = VAR_55 & 31;
        VAR_55 += VAR_54;

        VAR_15 = VAR_55 >> 5;
        VAR_16 = VAR_55 & 31;
        VAR_55 += VAR_54;

        FUNC_4(VAR_60 + VAR_9 + 1, 16, VAR_18, VAR_19);
        FUNC_4(VAR_60 + VAR_11 + 1, 16, VAR_21, VAR_22);
        FUNC_4(VAR_60 + VAR_13 + 1, 16, VAR_24, VAR_25);
        FUNC_4(VAR_60 + VAR_15 + 1, 16, VAR_27, VAR_28);

        VAR_30 = FUNC_14(VAR_10);
        VAR_31 = FUNC_14(32 - VAR_10);
        VAR_32 = FUNC_14(VAR_12);
        VAR_33 = FUNC_14(32 - VAR_12);
        VAR_34 = FUNC_14(VAR_14);
        VAR_35 = FUNC_14(32 - VAR_14);
        VAR_36 = FUNC_14(VAR_16);
        VAR_37 = FUNC_14(32 - VAR_16);

        FUNC_8(VAR_19, VAR_18, VAR_22, VAR_21, VAR_25, VAR_24, VAR_28, VAR_27, 1,
                   VAR_19, VAR_22, VAR_25, VAR_28);

        FUNC_13(VAR_18, VAR_38, VAR_39);
        FUNC_13(VAR_19, VAR_40, VAR_41);
        FUNC_13(VAR_21, VAR_42, VAR_43);
        FUNC_13(VAR_22, VAR_44, VAR_45);
        FUNC_13(VAR_24, VAR_46, VAR_47);
        FUNC_13(VAR_25, VAR_48, VAR_49);
        FUNC_13(VAR_27, VAR_50, VAR_51);
        FUNC_13(VAR_28, VAR_52, VAR_53);

        FUNC_6(VAR_40, VAR_30, VAR_41, VAR_30, VAR_44, VAR_32, VAR_45, VAR_32,
             VAR_40, VAR_41, VAR_44, VAR_45);
        FUNC_6(VAR_48, VAR_34, VAR_49, VAR_34, VAR_52, VAR_36, VAR_53, VAR_36,
             VAR_48, VAR_49, VAR_52, VAR_53);

        VAR_40 += VAR_38 * VAR_31;
        VAR_41 += VAR_39 * VAR_31;
        VAR_44 += VAR_42 * VAR_33;
        VAR_45 += VAR_43 * VAR_33;
        VAR_48 += VAR_46 * VAR_35;
        VAR_49 += VAR_47 * VAR_35;
        VAR_52 += VAR_50 * VAR_37;
        VAR_53 += VAR_51 * VAR_37;

        FUNC_9(VAR_40, VAR_41, VAR_44, VAR_45, 5);
        FUNC_9(VAR_48, VAR_49, VAR_52, VAR_53, 5);
        FUNC_7(VAR_41, VAR_40, VAR_45, VAR_44, VAR_49, VAR_48, VAR_53, VAR_52,
                    VAR_20, VAR_23, VAR_26, VAR_29);
        FUNC_2(VAR_23, VAR_20, VAR_29, VAR_26, VAR_38, VAR_39);
        FUNC_0(VAR_23, VAR_20, VAR_29, VAR_26, VAR_40, VAR_41);
        FUNC_1(VAR_39, VAR_38, VAR_42, VAR_43);
        FUNC_1(VAR_41, VAR_40, VAR_44, VAR_45);
        FUNC_11(VAR_42, VAR_43, 0, 1, 2, 3, 0, 1, 2, 3, VAR_62, VAR_4);
        VAR_62 += (8 * VAR_4);
        FUNC_11(VAR_44, VAR_45, 0, 1, 2, 3, 0, 1, 2, 3, VAR_62, VAR_4);
        VAR_3 += 4;
    }
}
