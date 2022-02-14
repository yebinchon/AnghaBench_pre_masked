
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_6 (int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int) ;
 int FUNC_8 (int,int,int ,int,int,int,int ,int,int,int,int *,int) ;
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
    int16_t VAR_6[] = { -4096, -1638, -910, -630, -482, -390, -315 };
    uint8_t VAR_7[3 * 32 + 4];
    uint8_t *VAR_8 = VAR_7 + 8;
    const uint8_t *VAR_9;
    const uint8_t *VAR_10 = VAR_1 - 1;
    uint8_t *VAR_11;
    int32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int32_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    int32_t VAR_23, VAR_24, VAR_25, VAR_26;
    int32_t VAR_27, VAR_28, VAR_29;
    v16i8 VAR_30, VAR_31, VAR_32, VAR_33;
    v16i8 VAR_34, VAR_35, VAR_36, VAR_37;
    v8i16 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
    v8i16 VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;

    VAR_27 = VAR_0[VAR_5 - 2];
    VAR_12 = (VAR_27) >> 2;
    VAR_28 = VAR_27;

    VAR_9 = VAR_2 - 1;
    if (VAR_12 < -1) {
        VAR_29 = VAR_6[VAR_5 - 11];

        VAR_14 = FUNC_3(VAR_9);
        VAR_15 = FUNC_3(VAR_9 + 4);
        VAR_16 = FUNC_3(VAR_9 + 8);
        FUNC_9(VAR_14, VAR_8);
        FUNC_9(VAR_15, VAR_8 + 4);
        FUNC_9(VAR_16, VAR_8 + 8);

        for (VAR_17 = VAR_12; VAR_17 <= -1; VAR_17++) {
            VAR_13 = (VAR_17 * VAR_29 + 128) >> 8;
            VAR_8[VAR_17] = VAR_10[VAR_13];
        }

        VAR_9 = VAR_8;
    }

    for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
        VAR_11 = VAR_3;

        VAR_19 = VAR_28 >> 5;
        VAR_20 = VAR_28 & 31;
        VAR_28 += VAR_27;

        VAR_21 = VAR_28 >> 5;
        VAR_22 = VAR_28 & 31;
        VAR_28 += VAR_27;

        VAR_23 = VAR_28 >> 5;
        VAR_24 = VAR_28 & 31;
        VAR_28 += VAR_27;

        VAR_25 = VAR_28 >> 5;
        VAR_26 = VAR_28 & 31;
        VAR_28 += VAR_27;

        VAR_30 = FUNC_2(VAR_9 + VAR_19 + 1);
        VAR_31 = FUNC_2(VAR_9 + VAR_21 + 1);
        VAR_32 = FUNC_2(VAR_9 + VAR_23 + 1);
        VAR_33 = FUNC_2(VAR_9 + VAR_25 + 1);

        VAR_46 = FUNC_11(VAR_20);
        VAR_47 = FUNC_11(32 - VAR_20);
        VAR_48 = FUNC_11(VAR_22);
        VAR_49 = FUNC_11(32 - VAR_22);
        VAR_50 = FUNC_11(VAR_24);
        VAR_51 = FUNC_11(32 - VAR_24);
        VAR_52 = FUNC_11(VAR_26);
        VAR_53 = FUNC_11(32 - VAR_26);

        FUNC_10(VAR_30, VAR_38, VAR_39);
        FUNC_10(VAR_31, VAR_40, VAR_41);
        FUNC_10(VAR_32, VAR_42, VAR_43);
        FUNC_10(VAR_33, VAR_44, VAR_45);
        FUNC_6(VAR_39, VAR_38, VAR_41, VAR_40, VAR_43, VAR_42, VAR_45, VAR_44, 2,
                   VAR_39, VAR_41, VAR_43, VAR_45);
        FUNC_4(VAR_39, VAR_46, VAR_41, VAR_48, VAR_43, VAR_50, VAR_45, VAR_52,
             VAR_39, VAR_41, VAR_43, VAR_45);

        VAR_39 += VAR_38 * VAR_47;
        VAR_41 += VAR_40 * VAR_49;
        VAR_43 += VAR_42 * VAR_51;
        VAR_45 += VAR_44 * VAR_53;

        FUNC_7(VAR_39, VAR_41, VAR_43, VAR_45, 5);
        FUNC_5(VAR_39, VAR_39, VAR_41, VAR_41, VAR_43, VAR_43, VAR_45, VAR_45,
                    VAR_34, VAR_35, VAR_36, VAR_37);
        FUNC_1(VAR_35, VAR_34, VAR_37, VAR_36, VAR_38, VAR_39);
        FUNC_0(VAR_39, VAR_38, VAR_41, VAR_42);
        FUNC_8(VAR_41, VAR_42, 0, 1, 2, 3, 0, 1, 2, 3, VAR_11, VAR_4);
        VAR_3 += 4;
    }
}
