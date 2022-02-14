
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int,int,int,int,int,int) ;
 int FUNC_8 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (scalar_t__,int ,int,int *,int) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_20(uint8_t *VAR_1,
                                      int32_t VAR_2,
                                      uint8_t *VAR_3,
                                      int32_t VAR_4,
                                      const int8_t *VAR_5,
                                      const int8_t *VAR_6,
                                      int32_t VAR_7,
                                      int32_t VAR_8,
                                      int32_t VAR_9)
{
    v16u8 VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17;
    v16i8 VAR_18 = FUNC_4(VAR_0 + 16);
    v16i8 VAR_19;
    v8i16 VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
    v8i16 VAR_37, VAR_38, VAR_39;
    v4i32 VAR_40, VAR_41, VAR_42, VAR_43;

    VAR_1 -= (VAR_2 + 1);

    VAR_22 = FUNC_6(VAR_5);
    FUNC_8(VAR_22, 0, 1, VAR_16, VAR_17);

    VAR_22 = FUNC_6(VAR_6);
    FUNC_12(VAR_22, VAR_22);

    FUNC_9(VAR_22, 0, VAR_20, VAR_21);

    VAR_19 = VAR_18 + 2;

    VAR_42 = FUNC_16(VAR_7);
    VAR_43 = FUNC_16(VAR_9);

    VAR_37 = FUNC_15(VAR_8);
    VAR_39 = FUNC_15(VAR_9 - 6);
    VAR_38 = FUNC_15((128 * VAR_7));
    VAR_37 += FUNC_19(VAR_38, VAR_39);

    FUNC_5(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    FUNC_14(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    FUNC_13(VAR_11, VAR_13, VAR_11, VAR_13, VAR_18, VAR_19, VAR_24, VAR_25);
    FUNC_13(VAR_12, VAR_14, VAR_12, VAR_14, VAR_18, VAR_19, VAR_26, VAR_27);
    FUNC_13(VAR_13, VAR_15, VAR_13, VAR_15, VAR_18, VAR_19, VAR_28, VAR_29);
    VAR_30 = FUNC_2(VAR_24, VAR_25, VAR_16, VAR_17);
    VAR_31 = FUNC_2(VAR_26, VAR_27, VAR_16, VAR_17);
    VAR_32 = FUNC_2(VAR_28, VAR_29, VAR_16, VAR_17);
    FUNC_3(VAR_31, VAR_30, VAR_33, VAR_34);
    FUNC_3(VAR_32, VAR_31, VAR_35, VAR_36);
    VAR_40 = FUNC_1(VAR_33, VAR_34, VAR_20, VAR_21);
    VAR_41 = FUNC_1(VAR_35, VAR_36, VAR_20, VAR_21);
    VAR_40 >>= 6;
    VAR_41 >>= 6;
    FUNC_7(VAR_40, VAR_42, VAR_41, VAR_42, VAR_40, VAR_41);
    FUNC_10(VAR_40, VAR_41, VAR_43);
    VAR_23 = FUNC_18((v8i16) VAR_41, (v8i16) VAR_40);
    VAR_23 += VAR_37;
    FUNC_0(VAR_23);
    VAR_10 = (v16u8) FUNC_17((v16i8) VAR_23, (v16i8) VAR_23);
    FUNC_11(VAR_10, 0, 1, VAR_3, VAR_4);
}
