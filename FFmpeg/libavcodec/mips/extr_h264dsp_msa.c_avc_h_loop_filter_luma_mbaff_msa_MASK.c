
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int8_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ,int ,int ) ;
 scalar_t__ FUNC_22 (int ,int ,int ) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,int) ;
 int FUNC_24 (int,int) ;

__attribute__((used)) static void FUNC_25(uint8_t *VAR_0, int32_t VAR_1,
                                             int32_t VAR_2, int32_t VAR_3,
                                             int8_t *VAR_4)
{
    uint8_t *VAR_5 = VAR_0;
    uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
    uint64_t VAR_10;
    uint32_t VAR_11;
    v16u8 VAR_12, VAR_13;
    v16i8 VAR_14 = { 0 };
    v16i8 VAR_15 = { 0 };
    v16i8 VAR_16 = { 0 };
    v16i8 VAR_17 = { 0 };
    v16i8 VAR_18 = { 0 };
    v16i8 VAR_19 = { 0 };
    v16i8 VAR_20 = { 0 };
    v16i8 VAR_21 = { 0 };
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28, VAR_29;
    v16u8 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v16u8 VAR_35, VAR_36, VAR_37;
    v16u8 VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42;
    v16u8 VAR_43, VAR_44, VAR_45 = { 0 };
    v8i16 VAR_46, VAR_47, VAR_48, VAR_49;
    v8i16 VAR_50, VAR_51;
    v8i16 VAR_52, VAR_53, VAR_54, VAR_55;
    v16u8 VAR_56, VAR_57, VAR_58, VAR_59;
    v4i32 VAR_60, VAR_61;
    v16i8 VAR_62 = { 0 };

    VAR_12 = (v16u8) FUNC_15(VAR_2);
    VAR_13 = (v16u8) FUNC_15(VAR_3);

    if (VAR_4[0] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        VAR_10 = FUNC_8(VAR_5 - 3);
        VAR_14 = (v16i8) FUNC_21((v2i64) VAR_14, 0, VAR_10);
        VAR_10 = FUNC_8(VAR_5 - 3 + VAR_1);
        VAR_15 = (v16i8) FUNC_21((v2i64) VAR_15, 0, VAR_10);
        VAR_5 += (2 * VAR_1);
    }

    if (VAR_4[1] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        VAR_10 = FUNC_8(VAR_5 - 3);
        VAR_16 = (v16i8) FUNC_21((v2i64) VAR_16, 0, VAR_10);
        VAR_10 = FUNC_8(VAR_5 - 3 + VAR_1);
        VAR_17 = (v16i8) FUNC_21((v2i64) VAR_17, 0, VAR_10);
        VAR_5 += (2 * VAR_1);
    }

    if (VAR_4[2] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        VAR_10 = FUNC_8(VAR_5 - 3);
        VAR_18 = (v16i8) FUNC_21((v2i64) VAR_18, 0, VAR_10);
        VAR_10 = FUNC_8(VAR_5 - 3 + VAR_1);
        VAR_19 = (v16i8) FUNC_21((v2i64) VAR_19, 0, VAR_10);
        VAR_5 += (2 * VAR_1);
    }

    if (VAR_4[3] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        VAR_10 = FUNC_8(VAR_5 - 3);
        VAR_20 = (v16i8) FUNC_21((v2i64) VAR_20, 0, VAR_10);
        VAR_10 = FUNC_8(VAR_5 - 3 + VAR_1);
        VAR_21 = (v16i8) FUNC_21((v2i64) VAR_21, 0, VAR_10);
        VAR_5 += (2 * VAR_1);
    }

    FUNC_6(VAR_15, VAR_14, VAR_17, VAR_16, VAR_19, VAR_18, VAR_21, VAR_20,
               VAR_22, VAR_23, VAR_24, VAR_25);

    FUNC_7(VAR_23, VAR_22, VAR_25, VAR_24, VAR_26, VAR_28);
    FUNC_2(VAR_23, VAR_22, VAR_25, VAR_24, VAR_27, VAR_29);

    VAR_22 = (v16i8) FUNC_20((v4i32) VAR_28, (v4i32) VAR_26);
    VAR_23 = FUNC_23(VAR_62, (v16i8) VAR_22, 8);
    VAR_24 = (v16i8) FUNC_18((v4i32) VAR_28, (v4i32) VAR_26);
    VAR_25 = FUNC_23(VAR_62, (v16i8) VAR_24, 8);
    VAR_26 = (v8i16) FUNC_20((v4i32) VAR_29, (v4i32) VAR_27);
    VAR_27 = (v8i16) FUNC_23(VAR_62, (v16i8) VAR_26, 8);

    VAR_30 = FUNC_12((v16u8) VAR_24, (v16u8) VAR_25);
    VAR_31 = FUNC_12((v16u8) VAR_23, (v16u8) VAR_24);
    VAR_32 = FUNC_12((v16u8) VAR_26, (v16u8) VAR_25);
    VAR_33 = FUNC_12((v16u8) VAR_22, (v16u8) VAR_24);
    VAR_34 = FUNC_12((v16u8) VAR_27, (v16u8) VAR_25);

    VAR_36 = (VAR_30 < VAR_12);
    VAR_37 = (VAR_31 < VAR_13);
    VAR_35 = VAR_36 & VAR_37;
    VAR_37 = (VAR_32 < VAR_13);
    VAR_35 = VAR_37 & VAR_35;

    VAR_38 = (VAR_33 < VAR_13);
    VAR_39 = (VAR_34 < VAR_13);

    VAR_46 = (v8i16) FUNC_19((v16i8) VAR_25, (v16i8) VAR_24);
    VAR_47 = (v8i16) FUNC_16((v16u8) VAR_46, (v16u8) VAR_46);
    VAR_47 = FUNC_24(VAR_47, 1);

    FUNC_4(VAR_62, VAR_22, VAR_62, VAR_23, VAR_52, VAR_53);
    VAR_52 += VAR_47;
    VAR_52 >>= 1;
    VAR_52 -= VAR_53;
    FUNC_4(VAR_62, VAR_27, VAR_62, VAR_26, VAR_54, VAR_55);
    VAR_54 += VAR_47;
    VAR_54 >>= 1;
    VAR_54 -= VAR_55;

    VAR_11 = FUNC_9(VAR_4);
    VAR_45 = (v16u8) FUNC_22((v4i32) VAR_45, 0, VAR_11);
    VAR_45 = (v16u8) FUNC_19((v16i8) VAR_45, (v16i8) VAR_45);
    VAR_43 = VAR_45;
    VAR_44 = VAR_45;
    VAR_41 = (v8i16) FUNC_19(VAR_62, (v16i8) VAR_45);
    VAR_40 = VAR_41;

    FUNC_0(VAR_52, -VAR_41, VAR_41);
    FUNC_0(VAR_54, -VAR_41, VAR_41);

    VAR_52 += VAR_53;
    VAR_54 += VAR_55;

    FUNC_10(VAR_52, VAR_52, VAR_54, VAR_54, VAR_56, VAR_57);

    VAR_43 = (VAR_62 < VAR_43);
    VAR_44 = VAR_43;
    VAR_43 = VAR_38 & VAR_43;
    VAR_44 = VAR_39 & VAR_44;
    VAR_43 = VAR_35 & VAR_43;
    VAR_44 = VAR_35 & VAR_44;

    VAR_56 = FUNC_13((v16u8) VAR_23, VAR_56, VAR_43);
    VAR_57 = FUNC_13((v16u8) VAR_26, VAR_57, VAR_44);

    VAR_48 = FUNC_17((v16u8) VAR_46, (v16u8) VAR_46);
    VAR_48 <<= 2;
    VAR_49 = VAR_53 - VAR_55;
    VAR_48 += VAR_49;
    VAR_48 = FUNC_24(VAR_48, 3);

    VAR_42 = VAR_40 + 1;
    VAR_38 = (v16u8) FUNC_19((v16i8) VAR_38,
                                              (v16i8) VAR_38);
    VAR_40 = (v8i16) FUNC_13((v16u8) VAR_40, (v16u8) VAR_42, VAR_38);
    VAR_42 = VAR_40 + 1;
    VAR_39 = (v16u8) FUNC_19((v16i8) VAR_39,
                                              (v16i8) VAR_39);
    VAR_40 = (v8i16) FUNC_13((v16u8) VAR_40, (v16u8) VAR_42, VAR_39);

    FUNC_0(VAR_48, -VAR_40, VAR_40);

    FUNC_4(VAR_62, VAR_24, VAR_62, VAR_25, VAR_50, VAR_51);
    VAR_50 += VAR_48;
    VAR_51 -= VAR_48;

    FUNC_1(VAR_50, VAR_51);

    FUNC_10(VAR_50, VAR_50, VAR_51, VAR_51, VAR_58, VAR_59);

    VAR_58 = FUNC_13((v16u8) VAR_24, VAR_58, VAR_35);
    VAR_59 = FUNC_13((v16u8) VAR_25, VAR_59, VAR_35);

    FUNC_5(VAR_58, VAR_56, VAR_57, VAR_59, VAR_56, VAR_57);

    FUNC_3(VAR_57, VAR_56, VAR_60, VAR_61);

    VAR_5 = VAR_0;

    VAR_6 = FUNC_14(VAR_60, 0);
    VAR_7 = FUNC_14(VAR_60, 1);
    VAR_8 = FUNC_14(VAR_60, 2);
    VAR_9 = FUNC_14(VAR_60, 3);

    if (VAR_4[0] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        FUNC_11(VAR_6, (VAR_5 - 2));
        VAR_5 += VAR_1;
        FUNC_11(VAR_7, (VAR_5 - 2));
        VAR_5 += VAR_1;
    }

    if (VAR_4[1] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        FUNC_11(VAR_8, (VAR_5 - 2));
        VAR_5 += VAR_1;
        FUNC_11(VAR_9, (VAR_5 - 2));
        VAR_5 += VAR_1;
    }

    VAR_6 = FUNC_14(VAR_61, 0);
    VAR_7 = FUNC_14(VAR_61, 1);
    VAR_8 = FUNC_14(VAR_61, 2);
    VAR_9 = FUNC_14(VAR_61, 3);

    if (VAR_4[2] < 0) {
        VAR_5 += (2 * VAR_1);
    } else {
        FUNC_11(VAR_6, (VAR_5 - 2));
        VAR_5 += VAR_1;
        FUNC_11(VAR_7, (VAR_5 - 2));
        VAR_5 += VAR_1;
    }

    if (VAR_4[3] >= 0) {
        FUNC_11(VAR_8, (VAR_5 - 2));
        VAR_5 += VAR_1;
        FUNC_11(VAR_9, (VAR_5 - 2));
    }
}
