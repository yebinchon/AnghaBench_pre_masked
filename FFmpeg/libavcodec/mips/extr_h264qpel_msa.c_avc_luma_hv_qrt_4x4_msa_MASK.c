
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int,int,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int const) ;
 scalar_t__ FUNC_12 (int ,int,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_14(const uint8_t *VAR_1, const uint8_t *VAR_2,
                                    uint8_t *VAR_3, int32_t VAR_4)
{
    const int16_t VAR_5 = 0xfb01;
    const int16_t VAR_6 = 0x1414;
    const int16_t VAR_7 = 0x1fb;
    v16u8 VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;

    VAR_29 = (v16i8) FUNC_11(VAR_5);
    VAR_30 = (v16i8) FUNC_11(VAR_6);
    VAR_31 = (v16i8) FUNC_11(VAR_7);

    FUNC_3(&VAR_0[48], 16, VAR_26, VAR_27, VAR_28);

    FUNC_5(VAR_2, VAR_4, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
    VAR_2 += (5 * VAR_4);

    VAR_15 = (v16i8) FUNC_12((v4i32) VAR_15, 1, (v4i32) VAR_16);
    VAR_16 = (v16i8) FUNC_12((v4i32) VAR_16, 1, (v4i32) VAR_17);
    VAR_17 = (v16i8) FUNC_12((v4i32) VAR_17, 1, (v4i32) VAR_18);
    VAR_18 = (v16i8) FUNC_12((v4i32) VAR_18, 1, (v4i32) VAR_19);

    FUNC_10(VAR_15, VAR_16, VAR_17, VAR_18);

    FUNC_4(VAR_1, VAR_4, VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_32 = FUNC_1(VAR_9, VAR_10, VAR_26, VAR_27, VAR_28);
    VAR_33 = FUNC_1(VAR_11, VAR_12, VAR_26, VAR_27, VAR_28);

    FUNC_8(VAR_32, VAR_33, 5);
    FUNC_7(VAR_32, VAR_33, 7);

    FUNC_4(VAR_2, VAR_4, VAR_20, VAR_21, VAR_13, VAR_14);

    VAR_19 = (v16i8) FUNC_12((v4i32) VAR_19, 1, (v4i32) VAR_20);
    VAR_20 = (v16i8) FUNC_12((v4i32) VAR_20, 1, (v4i32) VAR_21);
    VAR_21 = (v16i8) FUNC_12((v4i32) VAR_21, 1, (v4i32) VAR_13);
    VAR_13 = (v16i8) FUNC_12((v4i32) VAR_13, 1, (v4i32) VAR_14);

    FUNC_10(VAR_19, VAR_20, VAR_21, VAR_13);
    FUNC_2(VAR_16, VAR_15, VAR_18, VAR_17, VAR_22, VAR_23);
    FUNC_2(VAR_20, VAR_19, VAR_13, VAR_21, VAR_24, VAR_25);
    VAR_34 = FUNC_0(VAR_22, VAR_23, VAR_24, VAR_29, VAR_30,
                             VAR_31);
    VAR_35 = FUNC_0(VAR_23, VAR_24, VAR_25, VAR_29, VAR_30,
                             VAR_31);
    FUNC_8(VAR_34, VAR_35, 5);
    FUNC_7(VAR_34, VAR_35, 7);

    VAR_36 = FUNC_13((VAR_32 + VAR_34), 1);
    VAR_37 = FUNC_13((VAR_33 + VAR_35), 1);

    FUNC_7(VAR_36, VAR_37, 7);
    VAR_8 = FUNC_6(VAR_36, VAR_37);
    FUNC_9(VAR_8, 0, 1, 2, 3, VAR_3, VAR_4);
}
