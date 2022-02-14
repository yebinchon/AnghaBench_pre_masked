
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_13 (int ,int ,int ,int ,int) ;
 int FUNC_14 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_21(uint8_t *VAR_1,
                                           int32_t VAR_2,
                                           uint8_t *VAR_3,
                                           int32_t VAR_4,
                                           const int8_t *VAR_5,
                                           const int8_t *VAR_6,
                                           int32_t VAR_7)
{
    uint32_t VAR_8;
    v16u8 VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25;
    v16i8 VAR_26 = FUNC_3(VAR_0 + 16);
    v16i8 VAR_27;
    v8i16 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v16i8 VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
    v8i16 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47;
    v4i32 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55;
    v8i16 VAR_56, VAR_57, VAR_58, VAR_59;
    v8i16 VAR_60, VAR_61, VAR_62, VAR_63;
    v8i16 VAR_64, VAR_65;

    VAR_1 -= (VAR_2 + 1);

    VAR_28 = FUNC_6(VAR_5);
    FUNC_10(VAR_28, 0, 1, VAR_22, VAR_23);

    VAR_28 = FUNC_6(VAR_6);
    FUNC_15(VAR_28, VAR_28);

    FUNC_11(VAR_28, 0, VAR_24, VAR_25);

    VAR_27 = VAR_26 + 2;

    FUNC_4(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13);
    VAR_1 += (3 * VAR_2);

    FUNC_17(VAR_11, VAR_12, VAR_13);

    FUNC_16(VAR_11, VAR_12, VAR_11, VAR_12, VAR_26, VAR_27, VAR_33, VAR_34);
    FUNC_16(VAR_12, VAR_13, VAR_12, VAR_13, VAR_26, VAR_27, VAR_35, VAR_36);
    VAR_41 = FUNC_1(VAR_33, VAR_34, VAR_22, VAR_23);
    VAR_42 = FUNC_1(VAR_35, VAR_36, VAR_22, VAR_23);
    FUNC_2(VAR_42, VAR_41, VAR_56, VAR_60);
    VAR_43 = (v8i16) FUNC_20((v2i64) VAR_42, 1);

    for (VAR_8 = VAR_7 >> 3; VAR_8--;) {
        FUNC_5(VAR_1, VAR_2,
               VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
        VAR_1 += (8 * VAR_2);

        FUNC_18(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);

        FUNC_16(VAR_14, VAR_18, VAR_14, VAR_18, VAR_26, VAR_27, VAR_33, VAR_34);
        FUNC_16(VAR_15, VAR_19, VAR_15, VAR_19, VAR_26, VAR_27, VAR_35, VAR_36);
        FUNC_16(VAR_16, VAR_20, VAR_16, VAR_20, VAR_26, VAR_27, VAR_37, VAR_38);
        FUNC_16(VAR_17, VAR_21, VAR_17, VAR_21, VAR_26, VAR_27, VAR_39, VAR_40);

        VAR_44 = FUNC_1(VAR_33, VAR_34, VAR_22, VAR_23);
        VAR_45 = FUNC_1(VAR_35, VAR_36, VAR_22, VAR_23);
        VAR_46 = FUNC_1(VAR_37, VAR_38, VAR_22, VAR_23);
        VAR_47 = FUNC_1(VAR_39, VAR_40, VAR_22, VAR_23);

        VAR_57 = FUNC_19(VAR_44, VAR_43);
        FUNC_2(VAR_45, VAR_44, VAR_61, VAR_63);
        FUNC_2(VAR_46, VAR_45, VAR_58, VAR_64);
        FUNC_2(VAR_47, VAR_46, VAR_62, VAR_65);
        VAR_43 = (v8i16) FUNC_20((v2i64) VAR_44, 1);
        VAR_59 = FUNC_19(VAR_43, VAR_47);

        VAR_48 = FUNC_0(VAR_56, VAR_57, VAR_24, VAR_25);
        VAR_49 = FUNC_0(VAR_60, VAR_61, VAR_24, VAR_25);
        VAR_50 = FUNC_0(VAR_57, VAR_58, VAR_24, VAR_25);
        VAR_51 = FUNC_0(VAR_61, VAR_62, VAR_24, VAR_25);
        VAR_52 = FUNC_0(VAR_58, VAR_59, VAR_24, VAR_25);
        VAR_53 = FUNC_0(VAR_62, VAR_63, VAR_24, VAR_25);
        VAR_54 = FUNC_0(VAR_59, VAR_64, VAR_24, VAR_25);
        VAR_55 = FUNC_0(VAR_63, VAR_65, VAR_24, VAR_25);
        FUNC_13(VAR_48, VAR_49, VAR_50, VAR_51, 6);
        FUNC_13(VAR_52, VAR_53, VAR_54, VAR_55, 6);
        FUNC_7(VAR_49, VAR_48, VAR_51, VAR_50,
                    VAR_53, VAR_52, VAR_55, VAR_54,
                    VAR_29, VAR_30, VAR_31, VAR_32);
        FUNC_12(VAR_29, VAR_30, VAR_31, VAR_32, 6);
        FUNC_9(VAR_29, VAR_30, VAR_31, VAR_32, 7);
        VAR_9 = FUNC_8(VAR_29, VAR_30);
        VAR_10 = FUNC_8(VAR_31, VAR_32);
        FUNC_14(VAR_9, VAR_10, 0, 1, 2, 3, 0, 1, 2, 3, VAR_3, VAR_4);
        VAR_3 += (8 * VAR_4);

        VAR_56 = VAR_64;
        VAR_60 = VAR_65;
        VAR_43 = (v8i16) FUNC_20((v2i64) VAR_47, 1);
    }
}
