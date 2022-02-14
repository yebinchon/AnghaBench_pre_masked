
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
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
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
    uint32_t VAR_14;
    int32_t VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28;
    v16i8 VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34, VAR_35, VAR_36;
    v8i16 VAR_37, VAR_38, VAR_39, VAR_40;
    v8i16 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
    v4i32 VAR_46, VAR_47, VAR_48;
    v16i8 VAR_49 = FUNC_2(&VAR_0[0]);

    VAR_1 -= 3;
    VAR_15 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_16 = VAR_9 | (VAR_10 << 16);
    VAR_17 = 128 * VAR_10;
    VAR_17 <<= 6;
    VAR_15 += VAR_17;

    VAR_47 = FUNC_11(VAR_15);
    VAR_46 = FUNC_11(VAR_16);
    VAR_48 = FUNC_11(VAR_13 + 1);

    VAR_41 = FUNC_4(VAR_7);
    FUNC_7(VAR_41, 0, 1, 2, 3, VAR_18, VAR_19, VAR_20, VAR_21);

    VAR_26 = VAR_49 + 2;
    VAR_27 = VAR_49 + 4;
    VAR_28 = VAR_49 + 6;

    for (VAR_14 = (VAR_8 >> 2); VAR_14--;) {
        FUNC_3(VAR_1, VAR_2, VAR_22, VAR_23, VAR_24, VAR_25);
        VAR_1 += (4 * VAR_2);
        FUNC_5(VAR_3, VAR_4, VAR_37, VAR_38, VAR_39, VAR_40);
        VAR_3 += (4 * VAR_4);
        FUNC_10(VAR_22, VAR_23, VAR_24, VAR_25);

        FUNC_9(VAR_22, VAR_22, VAR_49, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_33 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);
        FUNC_9(VAR_23, VAR_23, VAR_49, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_34 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);
        FUNC_9(VAR_24, VAR_24, VAR_49, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_35 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);
        FUNC_9(VAR_25, VAR_25, VAR_49, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_36 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);

        FUNC_0(VAR_33, VAR_34, VAR_35, VAR_36,
                           VAR_37, VAR_38, VAR_39, VAR_40,
                           VAR_46, VAR_48, VAR_47,
                           VAR_42, VAR_43, VAR_44, VAR_45);

        FUNC_6(VAR_43, VAR_42, VAR_45, VAR_44, VAR_42, VAR_43);
        FUNC_8(VAR_42, VAR_43, 0, 1, 0, 1, VAR_5, VAR_6);
        VAR_5 += (4 * VAR_6);
    }
}
