
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int const) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_14(const uint8_t *VAR_1,
                                      const uint8_t *VAR_2, uint8_t *VAR_3,
                                      int32_t VAR_4)
{
    const int16_t VAR_5 = 0xfb01;
    const int16_t VAR_6 = 0x1414;
    const int16_t VAR_7 = 0x1fb;
    const uint8_t *VAR_8 = VAR_1;
    const uint8_t *VAR_9 = VAR_2;
    uint8_t *VAR_10 = VAR_3;
    uint32_t VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v16i8 VAR_29, VAR_30;
    v16i8 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v16i8 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
    v8i16 VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
    v8i16 VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;

    VAR_39 = (v16i8) FUNC_12(VAR_5);
    VAR_40 = (v16i8) FUNC_12(VAR_6);
    VAR_41 = (v16i8) FUNC_12(VAR_7);

    FUNC_3(&VAR_0[0], 16, VAR_19, VAR_20, VAR_21);

    for (VAR_11 = 2; VAR_11--;) {
        VAR_1 = VAR_8;
        VAR_2 = VAR_9;
        VAR_3 = VAR_10;

        FUNC_5(VAR_2, VAR_4, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_2 += (5 * VAR_4);

        FUNC_11(VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);

        for (VAR_12 = 4; VAR_12--;) {
            FUNC_4(VAR_1, VAR_4, VAR_15, VAR_16, VAR_17, VAR_18);
            FUNC_10(VAR_15, VAR_16, VAR_17, VAR_18);
            VAR_1 += (4 * VAR_4);

            VAR_42 = FUNC_1(VAR_15, VAR_15, VAR_19, VAR_20, VAR_21);
            VAR_43 = FUNC_1(VAR_16, VAR_16, VAR_19, VAR_20, VAR_21);
            VAR_44 = FUNC_1(VAR_17, VAR_17, VAR_19, VAR_20, VAR_21);
            VAR_45 = FUNC_1(VAR_18, VAR_18, VAR_19, VAR_20, VAR_21);
            FUNC_8(VAR_42, VAR_43, VAR_44, VAR_45, 5);
            FUNC_7(VAR_42, VAR_43, VAR_44, VAR_45, 7);

            FUNC_4(VAR_2, VAR_4, VAR_27, VAR_28, VAR_29, VAR_30);
            VAR_2 += (4 * VAR_4);

            FUNC_10(VAR_27, VAR_28, VAR_29, VAR_30);
            FUNC_2(VAR_23, VAR_22, VAR_24, VAR_23, VAR_25, VAR_24,
                       VAR_26, VAR_25, VAR_31, VAR_32, VAR_33,
                       VAR_34);
            FUNC_2(VAR_27, VAR_26, VAR_28, VAR_27, VAR_29, VAR_28,
                       VAR_30, VAR_29, VAR_35, VAR_36, VAR_37,
                       VAR_38);
            VAR_46 = FUNC_0(VAR_31, VAR_33, VAR_35, VAR_39,
                                     VAR_40, VAR_41);
            VAR_47 = FUNC_0(VAR_32, VAR_34, VAR_36, VAR_39,
                                     VAR_40, VAR_41);
            VAR_48 = FUNC_0(VAR_33, VAR_35, VAR_37, VAR_39,
                                     VAR_40, VAR_41);
            VAR_49 = FUNC_0(VAR_34, VAR_36, VAR_38, VAR_39,
                                     VAR_40, VAR_41);
            FUNC_8(VAR_46, VAR_47, VAR_48, VAR_49, 5);
            FUNC_7(VAR_46, VAR_47, VAR_48, VAR_49, 7);

            VAR_50 = FUNC_13((VAR_42 + VAR_46), 1);
            VAR_51 = FUNC_13((VAR_43 + VAR_47), 1);
            VAR_52 = FUNC_13((VAR_44 + VAR_48), 1);
            VAR_53 = FUNC_13((VAR_45 + VAR_49), 1);

            FUNC_7(VAR_50, VAR_51, VAR_52, VAR_53, 7);
            VAR_13 = FUNC_6(VAR_50, VAR_51);
            VAR_14 = FUNC_6(VAR_52, VAR_53);
            FUNC_9(VAR_13, VAR_14, 0, 1, 0, 1, VAR_3, VAR_4);
            VAR_3 += (4 * VAR_4);

            VAR_22 = VAR_26;
            VAR_23 = VAR_27;
            VAR_24 = VAR_28;
            VAR_25 = VAR_29;
            VAR_26 = VAR_30;
        }

        VAR_8 += 8;
        VAR_9 += 8;
        VAR_10 += 8;
    }
}
