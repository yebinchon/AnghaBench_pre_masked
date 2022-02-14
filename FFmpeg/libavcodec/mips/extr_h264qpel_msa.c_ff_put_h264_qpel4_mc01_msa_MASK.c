
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
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int,int ) ;
 scalar_t__ FUNC_13 (int ,int,int ) ;

void FUNC_14(uint8_t *VAR_0, const uint8_t *VAR_1,
                                ptrdiff_t VAR_2)
{
    int16_t VAR_3 = 0xfb01;
    int16_t VAR_4 = 0x1414;
    int16_t VAR_5 = 0x1fb;
    v16u8 VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32;

    VAR_28 = (v16i8) FUNC_11(VAR_3);
    VAR_29 = (v16i8) FUNC_11(VAR_4);
    VAR_30 = (v16i8) FUNC_11(VAR_5);

    VAR_1 -= (VAR_2 * 2);

    FUNC_4(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    VAR_1 += (5 * VAR_2);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_10, VAR_9, VAR_11, VAR_10, VAR_16, VAR_20,
               VAR_17, VAR_21);
    FUNC_2(VAR_20, VAR_16, VAR_21, VAR_17, VAR_24, VAR_25);
    FUNC_9(VAR_24, VAR_25);
    FUNC_3(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14, VAR_15);
    FUNC_1(VAR_12, VAR_11, VAR_13, VAR_12, VAR_14, VAR_13, VAR_15, VAR_14, VAR_18, VAR_22,
               VAR_19, VAR_23);
    FUNC_2(VAR_22, VAR_18, VAR_23, VAR_19, VAR_26, VAR_27);
    FUNC_9(VAR_26, VAR_27);
    VAR_31 = FUNC_0(VAR_24, VAR_25, VAR_26, VAR_28, VAR_29, VAR_30);
    VAR_32 = FUNC_0(VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);
    FUNC_7(VAR_31, VAR_32, 5);
    FUNC_6(VAR_31, VAR_32, 7);
    VAR_6 = FUNC_5(VAR_31, VAR_32);
    VAR_17 = (v16i8) FUNC_13((v4i32) VAR_9, 1, (v4i32) VAR_10);
    VAR_18 = (v16i8) FUNC_13((v4i32) VAR_11, 1, (v4i32) VAR_12);
    VAR_17 = (v16i8) FUNC_12((v2i64) VAR_17, 1, (v2i64) VAR_18);
    VAR_6 = FUNC_10(VAR_6, (v16u8) VAR_17);
    FUNC_8(VAR_6, 0, 1, 2, 3, VAR_0, VAR_2);
}
