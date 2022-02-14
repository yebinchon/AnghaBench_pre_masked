
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
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int,int,int,int,int ,int ) ;
 int FUNC_4 (int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_7 (int,int *) ;
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
    uint8_t *VAR_8 = VAR_7 + 8;
    const uint8_t *VAR_9;
    const uint8_t *VAR_10 = VAR_2 - 1;
    int32_t VAR_11, VAR_12;
    int32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int32_t VAR_19, VAR_20, VAR_21, VAR_22;
    int32_t VAR_23, VAR_24;
    int32_t VAR_25, VAR_26;
    int32_t VAR_27, VAR_28, VAR_29;
    v16i8 VAR_30, VAR_31, VAR_32, VAR_33;
    v16u8 VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
    v8i16 VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;

    VAR_23 = VAR_0[VAR_5 - 18];
    VAR_25 = VAR_6[VAR_5 - 18];
    VAR_11 = (VAR_23) >> 2;
    VAR_24 = VAR_23;

    VAR_9 = VAR_1 - 1;
    if (VAR_11 < -1) {
        VAR_26 = VAR_25 * VAR_11;

        VAR_27 = FUNC_1(VAR_9);
        VAR_28 = FUNC_1(VAR_9 + 4);
        VAR_29 = FUNC_1(VAR_9 + 8);
        FUNC_7(VAR_27, VAR_8);
        FUNC_7(VAR_28, VAR_8 + 4);
        FUNC_7(VAR_29, VAR_8 + 8);

        for (VAR_13 = VAR_11; VAR_13 <= -1; VAR_13++) {
            VAR_12 = (VAR_26 + 128) >> 8;
            VAR_8[VAR_13] = VAR_10[VAR_12];
            VAR_26 += VAR_25;
        }
        VAR_9 = VAR_8;
    }

    for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
        VAR_15 = (VAR_24) >> 5;
        VAR_16 = (VAR_24) & 31;
        VAR_24 += VAR_23;

        VAR_17 = (VAR_24) >> 5;
        VAR_18 = (VAR_24) & 31;
        VAR_24 += VAR_23;

        VAR_19 = (VAR_24) >> 5;
        VAR_20 = (VAR_24) & 31;
        VAR_24 += VAR_23;

        VAR_21 = (VAR_24) >> 5;
        VAR_22 = (VAR_24) & 31;
        VAR_24 += VAR_23;

        VAR_30 = FUNC_0(VAR_9 + VAR_15 + 1);
        VAR_31 = FUNC_0(VAR_9 + VAR_17 + 1);
        VAR_32 = FUNC_0(VAR_9 + VAR_19 + 1);
        VAR_33 = FUNC_0(VAR_9 + VAR_21 + 1);

        VAR_36 = FUNC_9(VAR_16);
        VAR_37 = FUNC_9(32 - VAR_16);
        VAR_38 = FUNC_9(VAR_18);
        VAR_39 = FUNC_9(32 - VAR_18);
        VAR_40 = FUNC_9(VAR_20);
        VAR_41 = FUNC_9(32 - VAR_20);
        VAR_42 = FUNC_9(VAR_22);
        VAR_43 = FUNC_9(32 - VAR_22);

        FUNC_8(VAR_30, VAR_44, VAR_45);
        FUNC_8(VAR_31, VAR_46, VAR_47);
        FUNC_8(VAR_32, VAR_48, VAR_49);
        FUNC_8(VAR_33, VAR_50, VAR_51);

        FUNC_4(VAR_45, VAR_44, VAR_47, VAR_46, VAR_49, VAR_48, VAR_51, VAR_50, 2,
                   VAR_45, VAR_47, VAR_49, VAR_51);
        FUNC_2(VAR_45, VAR_36, VAR_47, VAR_38, VAR_49, VAR_40, VAR_51, VAR_42,
             VAR_45, VAR_47, VAR_49, VAR_51);

        VAR_45 += VAR_44 * VAR_37;
        VAR_47 += VAR_46 * VAR_39;
        VAR_49 += VAR_48 * VAR_41;
        VAR_51 += VAR_50 * VAR_43;

        FUNC_5(VAR_45, VAR_47, VAR_49, VAR_51, 5);
        FUNC_3(VAR_47, VAR_45, VAR_51, VAR_49, VAR_34, VAR_35);
        FUNC_6(VAR_34, VAR_35, 0, 1, 0, 1, VAR_3, VAR_4);
        VAR_3 += (4 * VAR_4);
    }
}
