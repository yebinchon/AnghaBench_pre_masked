
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 int FUNC_13 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_19(uint8_t *VAR_0,
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
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v16i8 VAR_31, VAR_32, VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
    v16i8 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;
    v16i8 VAR_47, VAR_48;
    v8i16 VAR_49, VAR_50;
    v8i16 VAR_51;
    v4i32 VAR_52, VAR_53, VAR_54;

    VAR_0 -= (1 * VAR_1);

    VAR_14 = (VAR_10 + VAR_11) << VAR_12;
    VAR_8 = VAR_8 & 0x0000FFFF;
    VAR_15 = VAR_8 | (VAR_9 << 16);
    VAR_16 = 128 * VAR_9;
    VAR_16 <<= 6;
    VAR_14 += VAR_16;

    VAR_53 = FUNC_16(VAR_14);
    VAR_52 = FUNC_16(VAR_15);
    VAR_54 = FUNC_16(VAR_12 + 1);

    VAR_51 = FUNC_8(VAR_6);
    FUNC_11(VAR_51, 0, 1, VAR_49, VAR_50);

    FUNC_7(VAR_0, VAR_1, VAR_17, VAR_18, VAR_19);
    VAR_0 += (3 * VAR_1);
    FUNC_15(VAR_17, VAR_18, VAR_19);
    FUNC_4(VAR_18, VAR_17, VAR_19, VAR_18, VAR_31, VAR_33);
    FUNC_3(VAR_18, VAR_17, VAR_19, VAR_18, VAR_41, VAR_44);
    VAR_47 = (v16i8) FUNC_17((v2i64) VAR_44, (v2i64) VAR_41);

    for (VAR_13 = (VAR_7 >> 2); VAR_13--;) {
        FUNC_6(VAR_0, VAR_1, VAR_20, VAR_21);
        VAR_0 += (2 * VAR_1);
        FUNC_9(VAR_2, VAR_3, VAR_23, VAR_24, VAR_25, VAR_26);
        FUNC_9(VAR_2 + 8, VAR_3, VAR_27, VAR_28, VAR_29, VAR_30);
        VAR_2 += (4 * VAR_3);
        FUNC_5(VAR_28, VAR_27, VAR_30, VAR_29, VAR_27, VAR_28);
        FUNC_14(VAR_20, VAR_21);

        FUNC_4(VAR_20, VAR_19, VAR_21, VAR_20, VAR_32, VAR_34);
        FUNC_3(VAR_20, VAR_19, VAR_21, VAR_20, VAR_42, VAR_45);
        VAR_48 = (v16i8) FUNC_17((v2i64) VAR_45, (v2i64) VAR_42);

        VAR_35 = FUNC_2(VAR_31, VAR_32, VAR_49, VAR_50);
        VAR_36 = FUNC_2(VAR_33, VAR_34, VAR_49, VAR_50);
        VAR_39 = FUNC_2(VAR_47, VAR_48, VAR_49, VAR_50);

        FUNC_6(VAR_0, VAR_1, VAR_22, VAR_19);
        VAR_0 += (2 * VAR_1);
        FUNC_14(VAR_22, VAR_19);
        FUNC_4(VAR_22, VAR_21, VAR_19, VAR_22, VAR_31, VAR_33);
        FUNC_3(VAR_22, VAR_21, VAR_19, VAR_22, VAR_43, VAR_46);
        VAR_47 = (v16i8) FUNC_17((v2i64) VAR_46, (v2i64) VAR_43);

        VAR_37 = FUNC_2(VAR_32, VAR_31, VAR_49, VAR_50);
        VAR_38 = FUNC_2(VAR_34, VAR_33, VAR_49, VAR_50);
        VAR_40 = FUNC_2(VAR_48, VAR_47, VAR_49, VAR_50);
        FUNC_1(VAR_35, VAR_36, VAR_37, VAR_38,
                           VAR_23, VAR_24, VAR_25, VAR_26,
                           VAR_52, VAR_54, VAR_53,
                           VAR_35, VAR_36, VAR_37, VAR_38);
        FUNC_0(VAR_39, VAR_40, VAR_27, VAR_28,
                           VAR_52, VAR_54, VAR_53,
                           VAR_39, VAR_40);

        FUNC_10(VAR_36, VAR_35, VAR_38, VAR_37, VAR_35, VAR_36);
        VAR_37 = (v8i16) FUNC_18((v16i8) VAR_40, (v16i8) VAR_39);
        FUNC_12(VAR_35, VAR_36, 0, 1, 0, 1, VAR_4, VAR_5);
        FUNC_13(VAR_37, 0, 1, 2, 3, VAR_4 + 8, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
