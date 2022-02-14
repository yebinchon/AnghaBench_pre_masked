
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ,int) ;

__attribute__((used)) static void FUNC_18(uint8_t *VAR_0,
                                             int32_t VAR_1,
                                             int16_t *VAR_2,
                                             int32_t VAR_3,
                                             uint8_t *VAR_4,
                                             int32_t VAR_5,
                                             const int8_t *VAR_6,
                                             int32_t VAR_7,
                                             int32_t VAR_8,
                                             int32_t VAR_9,
                                             int32_t VAR_10,
                                             int32_t VAR_11,
                                             int32_t VAR_12)
{
    uint32_t VAR_13;
    int32_t VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v16i8 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v16i8 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
    v16i8 VAR_45, VAR_46, VAR_47, VAR_48;
    v8i16 VAR_49, VAR_50, VAR_51, VAR_52;
    v8i16 VAR_53, VAR_54;
    v8i16 VAR_55;
    v4i32 VAR_56, VAR_57, VAR_58;

    VAR_0 -= VAR_1;

    VAR_15 = (VAR_10 + VAR_11) << VAR_12;
    VAR_8 = VAR_8 & 0x0000FFFF;
    VAR_14 = VAR_8 | (VAR_9 << 16);
    VAR_16 = 128 * VAR_9;
    VAR_16 <<= 6;
    VAR_15 += VAR_16;

    VAR_57 = FUNC_15(VAR_15);
    VAR_56 = FUNC_15(VAR_14);
    VAR_58 = FUNC_15(VAR_12 + 1);

    VAR_55 = FUNC_9(VAR_6);
    FUNC_12(VAR_55, 0, 1, VAR_53, VAR_54);

    FUNC_7(VAR_0, VAR_1, VAR_17, VAR_18, VAR_19);
    VAR_0 += (3 * VAR_1);
    FUNC_2(VAR_18, VAR_17, VAR_19, VAR_18, VAR_35, VAR_40);
    VAR_45 = (v16i8) FUNC_16((v2i64) VAR_40, (v2i64) VAR_35);
    VAR_45 = (v16i8) FUNC_17((v16u8) VAR_45, 128);

    for (VAR_13 = (VAR_7 >> 3); VAR_13--;) {
        FUNC_8(VAR_0, VAR_1, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);
        VAR_0 += (6 * VAR_1);
        FUNC_10(VAR_2, VAR_3, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34);
        VAR_2 += (8 * VAR_3);

        FUNC_4(VAR_28, VAR_27, VAR_30, VAR_29, VAR_27, VAR_28);
        FUNC_4(VAR_32, VAR_31, VAR_34, VAR_33, VAR_29, VAR_30);

        FUNC_3(VAR_20, VAR_19, VAR_21, VAR_20, VAR_22, VAR_21, VAR_23, VAR_22,
                   VAR_36, VAR_41, VAR_37, VAR_42);
        FUNC_2(VAR_24, VAR_23, VAR_25, VAR_24, VAR_38, VAR_43);
        FUNC_5(VAR_41, VAR_36, VAR_42, VAR_37, VAR_43, VAR_38,
                   VAR_46, VAR_47, VAR_48);
        FUNC_14(VAR_46, VAR_47, VAR_48);

        VAR_49 = FUNC_1(VAR_45, VAR_46, VAR_53, VAR_54);
        VAR_50 = FUNC_1(VAR_46, VAR_47, VAR_53, VAR_54);
        VAR_51 = FUNC_1(VAR_47, VAR_48, VAR_53, VAR_54);

        FUNC_6(VAR_0, VAR_1, VAR_26, VAR_19);
        VAR_0 += (2 * VAR_1);
        FUNC_2(VAR_26, VAR_25, VAR_19, VAR_26, VAR_39, VAR_44);
        VAR_45 = (v16i8) FUNC_16((v2i64) VAR_44, (v2i64) VAR_39);
        VAR_45 = (v16i8) FUNC_17((v16u8) VAR_45, 128);

        VAR_52 = FUNC_1(VAR_48, VAR_45, VAR_53, VAR_54);
        FUNC_0(VAR_49, VAR_50, VAR_51, VAR_52,
                           VAR_27, VAR_28, VAR_29, VAR_30,
                           VAR_56, VAR_58, VAR_57,
                           VAR_49, VAR_50, VAR_51, VAR_52);

        FUNC_11(VAR_50, VAR_49, VAR_52, VAR_51, VAR_49, VAR_50);
        FUNC_13(VAR_49, VAR_50, 0, 1, 2, 3, 0, 1, 2, 3, VAR_4, VAR_5);
        VAR_4 += (8 * VAR_5);
    }
}
