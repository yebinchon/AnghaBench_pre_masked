
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int angle_loop ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int,int ,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int ,int ,int ,int ,int *,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_1,
                                                      const uint8_t *VAR_2,
                                                      uint8_t *VAR_3,
                                                      int32_t VAR_4,
                                                      int32_t VAR_5)
{
    int16_t VAR_6[] = { -256, -315, -390, -482, -630, -910, -1638, -4096 };
    int32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int32_t VAR_13, VAR_14, VAR_15, VAR_16;
    int32_t VAR_17;
    int32_t VAR_18, VAR_19, VAR_20;
    int32_t VAR_21, VAR_22;
    uint8_t VAR_23[3 * 32 + 4];
    uint8_t *VAR_24 = VAR_23 + 16;
    const uint8_t *VAR_25;
    const uint8_t *VAR_26 = VAR_2 - 1;
    int32_t VAR_27;
    v16u8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v16i8 VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;
    v8i16 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55;
    v8i16 VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;

    VAR_18 = VAR_0[VAR_5 - 18];
    VAR_21 = VAR_6[VAR_5 - 18];
    VAR_27 = VAR_18 >> 1;
    VAR_19 = VAR_18;

    VAR_25 = VAR_1 - 1;
    if (VAR_27 < -1) {
        VAR_22 = VAR_21 * VAR_27;

        VAR_28 = FUNC_0(VAR_25);
        VAR_17 = FUNC_2(VAR_25 + 16);
        FUNC_8(VAR_28, VAR_24);
        FUNC_9(VAR_17, VAR_24 + 16);

        for (VAR_7 = VAR_27; VAR_7 <= -1; VAR_7++) {
            VAR_20 = (VAR_22 + 128) >> 8;
            VAR_24[VAR_7] = VAR_26[VAR_20];
            VAR_22 += VAR_21;
        }
        VAR_25 = VAR_24;
    }

    for (VAR_8 = 4; VAR_8--;) {
        VAR_9 = (VAR_19) >> 5;
        VAR_10 = (VAR_19) & 31;
        VAR_19 += VAR_18;

        VAR_11 = (VAR_19) >> 5;
        VAR_12 = (VAR_19) & 31;
        VAR_19 += VAR_18;

        VAR_13 = (VAR_19) >> 5;
        VAR_14 = (VAR_19) & 31;
        VAR_19 += VAR_18;

        VAR_15 = (VAR_19) >> 5;
        VAR_16 = (VAR_19) & 31;
        VAR_19 += VAR_18;

        FUNC_1(VAR_25 + VAR_9 + 1, 16, VAR_28, VAR_29);
        FUNC_1(VAR_25 + VAR_11 + 1, 16, VAR_30, VAR_31);
        FUNC_1(VAR_25 + VAR_13 + 1, 16, VAR_32, VAR_33);
        FUNC_1(VAR_25 + VAR_15 + 1, 16, VAR_34, VAR_35);

        VAR_40 = FUNC_11(VAR_10);
        VAR_41 = FUNC_11(32 - VAR_10);
        VAR_42 = FUNC_11(VAR_12);
        VAR_43 = FUNC_11(32 - VAR_12);
        VAR_44 = FUNC_11(VAR_14);
        VAR_45 = FUNC_11(32 - VAR_14);
        VAR_46 = FUNC_11(VAR_16);
        VAR_47 = FUNC_11(32 - VAR_16);

        FUNC_5(VAR_29, VAR_28, VAR_31, VAR_30, VAR_33, VAR_32, VAR_35, VAR_34, 1,
                   VAR_29, VAR_31, VAR_33, VAR_35);
        FUNC_10(VAR_28, VAR_48, VAR_49);
        FUNC_10(VAR_29, VAR_50, VAR_51);
        FUNC_10(VAR_30, VAR_52, VAR_53);
        FUNC_10(VAR_31, VAR_54, VAR_55);
        FUNC_10(VAR_32, VAR_56, VAR_57);
        FUNC_10(VAR_33, VAR_58, VAR_59);
        FUNC_10(VAR_34, VAR_60, VAR_61);
        FUNC_10(VAR_35, VAR_62, VAR_63);

        FUNC_3(VAR_50, VAR_40, VAR_51, VAR_40, VAR_54, VAR_42, VAR_55, VAR_42,
             VAR_50, VAR_51, VAR_54, VAR_55);
        FUNC_3(VAR_58, VAR_44, VAR_59, VAR_44, VAR_62, VAR_46, VAR_63, VAR_46,
             VAR_58, VAR_59, VAR_62, VAR_63);

        VAR_50 += VAR_48 * VAR_41;
        VAR_51 += VAR_49 * VAR_41;
        VAR_54 += VAR_52 * VAR_43;
        VAR_55 += VAR_53 * VAR_43;
        VAR_58 += VAR_56 * VAR_45;
        VAR_59 += VAR_57 * VAR_45;
        VAR_62 += VAR_60 * VAR_47;
        VAR_63 += VAR_61 * VAR_47;

        FUNC_6(VAR_50, VAR_51, VAR_54, VAR_55, 5);
        FUNC_6(VAR_58, VAR_59, VAR_62, VAR_63, 5);
        FUNC_4(VAR_51, VAR_50, VAR_55, VAR_54, VAR_59, VAR_58, VAR_63, VAR_62,
                    VAR_36, VAR_37, VAR_38, VAR_39);
        FUNC_7(VAR_36, VAR_37, VAR_38, VAR_39, VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);
    }
}
