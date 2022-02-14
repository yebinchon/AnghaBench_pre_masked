
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int,int *,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_16(uint8_t *VAR_1,
                                   int32_t VAR_2,
                                   uint8_t *VAR_3,
                                   int32_t VAR_4,
                                   const int8_t *VAR_5,
                                   const int8_t *VAR_6)
{
    v16u8 VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16;
    v16i8 VAR_17 = FUNC_3(VAR_0 + 16);
    v16i8 VAR_18;
    v8i16 VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    v4i32 VAR_34, VAR_35;

    VAR_1 -= (VAR_2 + 1);

    VAR_19 = FUNC_5(VAR_5);
    FUNC_7(VAR_19, 0, 1, VAR_13, VAR_14);

    VAR_19 = FUNC_5(VAR_6);
    FUNC_10(VAR_19, VAR_19);

    FUNC_8(VAR_19, 0, VAR_15, VAR_16);

    VAR_18 = VAR_17 + 2;

    FUNC_4(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

    FUNC_11(VAR_8, VAR_10, VAR_8, VAR_10, VAR_17, VAR_18, VAR_21, VAR_22);
    FUNC_11(VAR_9, VAR_11, VAR_9, VAR_11, VAR_17, VAR_18, VAR_23, VAR_24);
    FUNC_11(VAR_10, VAR_12, VAR_10, VAR_12, VAR_17, VAR_18, VAR_25, VAR_26);

    VAR_27 = FUNC_1(VAR_21, VAR_22, VAR_13, VAR_14);
    VAR_28 = FUNC_1(VAR_23, VAR_24, VAR_13, VAR_14);
    VAR_29 = FUNC_1(VAR_25, VAR_26, VAR_13, VAR_14);

    FUNC_2(VAR_28, VAR_27, VAR_30, VAR_31);
    FUNC_2(VAR_29, VAR_28, VAR_32, VAR_33);

    VAR_34 = FUNC_0(VAR_30, VAR_31, VAR_15, VAR_16);
    VAR_35 = FUNC_0(VAR_32, VAR_33, VAR_15, VAR_16);
    VAR_34 >>= 6;
    VAR_35 >>= 6;
    VAR_20 = FUNC_13((v8i16) VAR_35, (v8i16) VAR_34);
    VAR_20 = FUNC_15(VAR_20, 6);
    VAR_20 = FUNC_14(VAR_20, 7);
    VAR_7 = FUNC_6(VAR_20, VAR_20);
    FUNC_9(VAR_7, 0, 1, VAR_3, VAR_4);
}
