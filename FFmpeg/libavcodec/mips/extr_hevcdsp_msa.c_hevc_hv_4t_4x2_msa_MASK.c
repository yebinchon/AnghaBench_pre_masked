
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (int,int ,int,int) ;
 int FUNC_8 (int,int ,int,int *,scalar_t__) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_14(uint8_t *VAR_1,
                               int32_t VAR_2,
                               int16_t *VAR_3,
                               int32_t VAR_4,
                               const int8_t *VAR_5,
                               const int8_t *VAR_6)
{
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    v8i16 VAR_12, VAR_13;
    v8i16 VAR_14, VAR_15;
    v16i8 VAR_16 = FUNC_3(VAR_0 + 16);
    v16i8 VAR_17;
    v8i16 VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v4i32 VAR_33, VAR_34;

    VAR_1 -= (VAR_2 + 1);
    VAR_18 = FUNC_5(VAR_5);
    FUNC_6(VAR_18, 0, 1, VAR_12, VAR_13);

    VAR_18 = FUNC_5(VAR_6);
    FUNC_9(VAR_18, VAR_18);

    FUNC_7(VAR_18, 0, VAR_14, VAR_15);

    VAR_17 = VAR_16 + 2;

    VAR_19 = FUNC_12(128);
    VAR_19 <<= 6;

    FUNC_4(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_10(VAR_7, VAR_9, VAR_7, VAR_9, VAR_16, VAR_17, VAR_20, VAR_21);
    FUNC_10(VAR_8, VAR_10, VAR_8, VAR_10, VAR_16, VAR_17, VAR_22, VAR_23);
    FUNC_10(VAR_9, VAR_11, VAR_9, VAR_11, VAR_16, VAR_17, VAR_24, VAR_25);

    VAR_26 = VAR_19;
    VAR_27 = VAR_19;
    VAR_28 = VAR_19;
    FUNC_0(VAR_20, VAR_21, VAR_12, VAR_13, VAR_26, VAR_26);
    FUNC_0(VAR_22, VAR_23, VAR_12, VAR_13, VAR_27, VAR_27);
    FUNC_0(VAR_24, VAR_25, VAR_12, VAR_13, VAR_28, VAR_28);
    FUNC_2(VAR_27, VAR_26, VAR_29, VAR_30);
    FUNC_2(VAR_28, VAR_27, VAR_31, VAR_32);

    VAR_33 = FUNC_1(VAR_29, VAR_30, VAR_14, VAR_15);
    VAR_34 = FUNC_1(VAR_31, VAR_32, VAR_14, VAR_15);
    VAR_33 >>= 6;
    VAR_34 >>= 6;
    VAR_33 = (v4i32) FUNC_13((v8i16) VAR_34, (v8i16) VAR_33);
    FUNC_8(VAR_33, 0, 1, VAR_3, VAR_4);
}
