
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
 int FUNC_2 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int ,int ,int*,int) ;
 int FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_10(const uint8_t *VAR_1,
                                                      const uint8_t *VAR_2,
                                                      uint8_t *VAR_3,
                                                      int32_t VAR_4,
                                                      int32_t VAR_5)
{
    int16_t VAR_6[] = { -256, -315, -390, -482, -630, -910, -1638, -4096 };
    uint8_t VAR_7[3 * 32 + 4];
    uint8_t *VAR_8;
    const uint8_t *VAR_9;
    const uint8_t *VAR_10 = VAR_2 - 1;
    int32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int32_t VAR_17, VAR_18, VAR_19, VAR_20;
    int32_t VAR_21, VAR_22;
    int32_t VAR_23, VAR_24;
    int32_t VAR_25, VAR_26;
    v16u8 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v16i8 VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39, VAR_40, VAR_41, VAR_42;
    v8i16 VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
    v8i16 VAR_51, VAR_52, VAR_53, VAR_54, VAR_55, VAR_56, VAR_57, VAR_58;

    VAR_8 = VAR_7 + 32;

    VAR_21 = VAR_0[VAR_5 - 18];
    VAR_23 = VAR_6[VAR_5 - 18];
    VAR_25 = VAR_21;
    VAR_22 = VAR_21;

    VAR_9 = VAR_1 - 1;
    if (VAR_25 < -1) {
        VAR_24 = VAR_23 * VAR_25;
        FUNC_1(VAR_9, 16, VAR_27, VAR_28);
        VAR_17 = VAR_9[32];
        VAR_18 = VAR_9[33];
        VAR_19 = VAR_9[34];
        VAR_20 = VAR_9[35];

        FUNC_7(VAR_27, VAR_28, VAR_8, 16);
        VAR_8[32] = VAR_17;
        VAR_8[33] = VAR_18;
        VAR_8[34] = VAR_19;
        VAR_8[35] = VAR_20;

        for (VAR_11 = VAR_25; VAR_11 <= -1; VAR_11++) {
            VAR_26 = (VAR_24 + 128) >> 8;
            VAR_8[VAR_11] = VAR_10[VAR_26];
            VAR_24 += VAR_23;
        }

        VAR_9 = VAR_8;
    }

    for (VAR_12 = 16; VAR_12--;) {
        VAR_13 = (VAR_22) >> 5;
        VAR_14 = (VAR_22) & 31;
        VAR_22 += VAR_21;

        VAR_15 = (VAR_22) >> 5;
        VAR_16 = (VAR_22) & 31;
        VAR_22 += VAR_21;

        VAR_27 = FUNC_0(VAR_9 + VAR_13 + 1);
        VAR_31 = FUNC_0(VAR_9 + VAR_15 + 1);
        VAR_28 = FUNC_0(VAR_9 + VAR_13 + 17);
        VAR_32 = FUNC_0(VAR_9 + VAR_15 + 17);
        VAR_30 = FUNC_0(VAR_9 + VAR_13 + 33);
        VAR_34 = FUNC_0(VAR_9 + VAR_15 + 33);

        VAR_39 = FUNC_9(VAR_14);
        VAR_40 = FUNC_9(32 - VAR_14);
        VAR_41 = FUNC_9(VAR_16);
        VAR_42 = FUNC_9(32 - VAR_16);

        VAR_29 = VAR_28;
        VAR_33 = VAR_32;

        FUNC_4(VAR_28, VAR_27, VAR_30, VAR_29, VAR_32, VAR_31, VAR_34, VAR_33, 1,
                   VAR_28, VAR_30, VAR_32, VAR_34);
        FUNC_8(VAR_27, VAR_43, VAR_44);
        FUNC_8(VAR_28, VAR_45, VAR_46);
        FUNC_8(VAR_29, VAR_47, VAR_48);
        FUNC_8(VAR_30, VAR_49, VAR_50);
        FUNC_8(VAR_31, VAR_51, VAR_52);
        FUNC_8(VAR_32, VAR_53, VAR_54);
        FUNC_8(VAR_33, VAR_55, VAR_56);
        FUNC_8(VAR_34, VAR_57, VAR_58);

        FUNC_2(VAR_45, VAR_39, VAR_46, VAR_39, VAR_49, VAR_39, VAR_50, VAR_39,
             VAR_45, VAR_46, VAR_49, VAR_50);
        FUNC_2(VAR_53, VAR_41, VAR_54, VAR_41, VAR_57, VAR_41, VAR_58, VAR_41,
             VAR_53, VAR_54, VAR_57, VAR_58);

        VAR_45 += VAR_43 * VAR_40;
        VAR_46 += VAR_44 * VAR_40;
        VAR_49 += VAR_47 * VAR_40;
        VAR_50 += VAR_48 * VAR_40;
        VAR_53 += VAR_51 * VAR_42;
        VAR_54 += VAR_52 * VAR_42;
        VAR_57 += VAR_55 * VAR_42;
        VAR_58 += VAR_56 * VAR_42;

        FUNC_5(VAR_45, VAR_46, VAR_49, VAR_50, 5);
        FUNC_5(VAR_53, VAR_54, VAR_57, VAR_58, 5);
        FUNC_3(VAR_46, VAR_45, VAR_50, VAR_49, VAR_54, VAR_53, VAR_58, VAR_57,
                    VAR_35, VAR_36, VAR_37, VAR_38);

        FUNC_6(VAR_35, VAR_36, VAR_3, 16);
        VAR_3 += VAR_4;
        FUNC_6(VAR_37, VAR_38, VAR_3, 16);
        VAR_3 += VAR_4;
    }
}
