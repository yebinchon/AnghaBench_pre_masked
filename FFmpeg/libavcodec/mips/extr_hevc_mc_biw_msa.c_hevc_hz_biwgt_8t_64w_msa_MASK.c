
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1,
                                     int32_t VAR_2,
                                     int16_t *VAR_3,
                                     int32_t VAR_4,
                                     uint8_t *VAR_5,
                                     int32_t VAR_6,
                                     const int8_t *VAR_7,
                                     int32_t VAR_8,
                                     int32_t VAR_9,
                                     int32_t VAR_10,
                                     int32_t VAR_11,
                                     int32_t VAR_12,
                                     int32_t VAR_13)
{
    uint8_t *VAR_14;
    uint8_t *VAR_15;
    int16_t *VAR_16;
    uint32_t VAR_17, VAR_18;
    int32_t VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32;
    v16i8 VAR_33 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
    v16i8 VAR_41, VAR_42, VAR_43, VAR_44;
    v8i16 VAR_45, VAR_46, VAR_47, VAR_48;
    v8i16 VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
    v4i32 VAR_54, VAR_55, VAR_56;

    VAR_1 -= 3;
    VAR_19 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_20 = VAR_9 | (VAR_10 << 16);
    VAR_21 = 128 * VAR_10;
    VAR_21 <<= 6;
    VAR_19 += VAR_21;

    VAR_55 = FUNC_11(VAR_19);
    VAR_54 = FUNC_11(VAR_20);
    VAR_56 = FUNC_11(VAR_13 + 1);

    VAR_49 = FUNC_4(VAR_7);
    FUNC_7(VAR_49, 0, 1, 2, 3, VAR_29, VAR_30, VAR_31, VAR_32);

    VAR_34 = VAR_33 + 2;
    VAR_35 = VAR_33 + 4;
    VAR_36 = VAR_33 + 6;
    VAR_37 = VAR_33 + 8;
    VAR_38 = VAR_33 + 10;
    VAR_39 = VAR_33 + 12;
    VAR_40 = VAR_33 + 14;

    for (VAR_17 = VAR_8; VAR_17--;) {
        VAR_14 = VAR_1;
        VAR_15 = VAR_5;
        VAR_16 = VAR_3;

        for (VAR_18 = 2; VAR_18--;) {
            FUNC_3(VAR_14, 16, VAR_22, VAR_23);
            VAR_24 = FUNC_2(VAR_14 + 24);
            VAR_14 += 32;
            FUNC_5(VAR_16, 8, VAR_25, VAR_26, VAR_27, VAR_28);
            VAR_16 += 32;
            FUNC_10(VAR_22, VAR_23, VAR_24);

            FUNC_9(VAR_22, VAR_22, VAR_33, VAR_34, VAR_35, VAR_36,
                       VAR_41, VAR_42, VAR_43, VAR_44);
            VAR_45 = FUNC_1(VAR_41, VAR_42, VAR_43, VAR_44, VAR_29, VAR_30,
                                     VAR_31, VAR_32);
            FUNC_9(VAR_22, VAR_23, VAR_37, VAR_38, VAR_39, VAR_40,
                       VAR_41, VAR_42, VAR_43, VAR_44);
            VAR_46 = FUNC_1(VAR_41, VAR_42, VAR_43, VAR_44, VAR_29, VAR_30,
                                     VAR_31, VAR_32);
            FUNC_9(VAR_23, VAR_23, VAR_33, VAR_34, VAR_35, VAR_36,
                       VAR_41, VAR_42, VAR_43, VAR_44);
            VAR_47 = FUNC_1(VAR_41, VAR_42, VAR_43, VAR_44, VAR_29, VAR_30,
                                     VAR_31, VAR_32);
            FUNC_9(VAR_24, VAR_24, VAR_33, VAR_34, VAR_35, VAR_36,
                       VAR_41, VAR_42, VAR_43, VAR_44);
            VAR_48 = FUNC_1(VAR_41, VAR_42, VAR_43, VAR_44, VAR_29, VAR_30,
                                     VAR_31, VAR_32);

            FUNC_0(VAR_45, VAR_46, VAR_47, VAR_48,
                               VAR_25, VAR_26, VAR_27, VAR_28,
                               VAR_54, VAR_56, VAR_55,
                               VAR_50, VAR_51, VAR_52, VAR_53);

            FUNC_6(VAR_51, VAR_50, VAR_53, VAR_52, VAR_50, VAR_51);
            FUNC_8(VAR_50, VAR_51, VAR_15, 16);
            VAR_15 += 32;
        }

        VAR_1 += VAR_2;
        VAR_3 += VAR_4;
        VAR_5 += VAR_6;

    }
}
