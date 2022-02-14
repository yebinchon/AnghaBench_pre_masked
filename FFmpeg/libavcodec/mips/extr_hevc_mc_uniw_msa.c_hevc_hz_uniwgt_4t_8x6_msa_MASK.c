
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
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int ,int ) ;
 int FUNC_8 (int ,int ,int,int *,int) ;
 int FUNC_9 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_16(uint8_t *VAR_1,
                                      int32_t VAR_2,
                                      uint8_t *VAR_3,
                                      int32_t VAR_4,
                                      const int8_t *VAR_5,
                                      int32_t VAR_6,
                                      int32_t VAR_7,
                                      int32_t VAR_8)
{
    v16u8 VAR_9, VAR_10, VAR_11;
    v8i16 VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20 = FUNC_3(&VAR_0[0]);
    v16i8 VAR_21;
    v16i8 VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    v8i16 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43;
    v4i32 VAR_44, VAR_45;

    VAR_1 -= 1;

    VAR_40 = FUNC_5(VAR_5);
    FUNC_7(VAR_40, 0, 1, VAR_12, VAR_13);

    VAR_6 = VAR_6 & 0x0000FFFF;

    VAR_44 = FUNC_14(VAR_6);
    VAR_45 = FUNC_14(VAR_8);

    VAR_6 *= 128;
    VAR_8 -= 6;

    VAR_41 = FUNC_13(VAR_6);
    VAR_42 = FUNC_13(VAR_7);
    VAR_43 = FUNC_13(VAR_8);

    VAR_41 = FUNC_15(VAR_41, VAR_43);
    VAR_42 = FUNC_12(VAR_42, VAR_41);

    VAR_21 = VAR_20 + 2;

    FUNC_4(VAR_1, VAR_2, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
    FUNC_11(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

    FUNC_10(VAR_14, VAR_14, VAR_14, VAR_14, VAR_20, VAR_21, VAR_23, VAR_24);
    FUNC_10(VAR_15, VAR_15, VAR_15, VAR_15, VAR_20, VAR_21, VAR_25, VAR_26);
    FUNC_10(VAR_16, VAR_16, VAR_16, VAR_16, VAR_20, VAR_21, VAR_27, VAR_28);
    FUNC_10(VAR_17, VAR_17, VAR_17, VAR_17, VAR_20, VAR_21, VAR_29, VAR_30);
    FUNC_10(VAR_18, VAR_18, VAR_18, VAR_18, VAR_20, VAR_21, VAR_31, VAR_32);
    FUNC_10(VAR_19, VAR_19, VAR_19, VAR_19, VAR_20, VAR_21, VAR_33, VAR_22);
    VAR_34 = FUNC_0(VAR_23, VAR_24, VAR_12, VAR_13);
    VAR_35 = FUNC_0(VAR_25, VAR_26, VAR_12, VAR_13);
    VAR_36 = FUNC_0(VAR_27, VAR_28, VAR_12, VAR_13);
    VAR_37 = FUNC_0(VAR_29, VAR_30, VAR_12, VAR_13);
    VAR_38 = FUNC_0(VAR_31, VAR_32, VAR_12, VAR_13);
    VAR_39 = FUNC_0(VAR_33, VAR_22, VAR_12, VAR_13);

    FUNC_2(VAR_34, VAR_35, VAR_36, VAR_37,
                                   VAR_44, VAR_42, VAR_45,
                                   VAR_34, VAR_35, VAR_36, VAR_37);

    FUNC_1(VAR_38, VAR_39, VAR_44, VAR_42, VAR_45,
                                   VAR_38, VAR_39);

    FUNC_6(VAR_35, VAR_34, VAR_37, VAR_36, VAR_39, VAR_38, VAR_9, VAR_10, VAR_11);
    FUNC_9(VAR_9, VAR_10, 0, 1, 0, 1, VAR_3, VAR_4);
    FUNC_8(VAR_11, 0, 1, VAR_3 + 4 * VAR_4, VAR_4);
}
