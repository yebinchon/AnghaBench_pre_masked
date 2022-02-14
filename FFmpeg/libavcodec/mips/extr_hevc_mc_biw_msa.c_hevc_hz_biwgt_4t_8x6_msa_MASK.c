
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,int *,int) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,int,int ,int,int *,int) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_16(uint8_t *VAR_1,
                                     int32_t VAR_2,
                                     int16_t *VAR_3,
                                     int32_t VAR_4,
                                     uint8_t *VAR_5,
                                     int32_t VAR_6,
                                     const int8_t *VAR_7,
                                     int32_t VAR_8,
                                     int32_t VAR_9,
                                     int32_t VAR_10,
                                     int32_t VAR_11,
                                     int32_t VAR_12)
{
    int32_t VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v16i8 VAR_30 = FUNC_3(&VAR_0[0]);
    v16i8 VAR_31;
    v16i8 VAR_32, VAR_33;
    v8i16 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40;
    v4i32 VAR_41, VAR_42, VAR_43;

    VAR_1 -= 1;

    VAR_40 = FUNC_5(VAR_7);
    FUNC_9(VAR_40, 0, 1, VAR_16, VAR_17);

    VAR_14 = (VAR_10 + VAR_11) << VAR_12;
    VAR_8 = VAR_8 & 0x0000FFFF;
    VAR_13 = VAR_8 | (VAR_9 << 16);
    VAR_15 = 128 * VAR_9;
    VAR_15 <<= 6;
    VAR_14 += VAR_15;

    VAR_42 = FUNC_14(VAR_14);
    VAR_41 = FUNC_14(VAR_13);
    VAR_43 = FUNC_14(VAR_12 + 1);

    VAR_31 = VAR_30 + 2;

    FUNC_4(VAR_1, VAR_2, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);

    FUNC_7(VAR_3, VAR_4, VAR_24, VAR_25, VAR_26, VAR_27);
    VAR_3 += (4 * VAR_4);
    FUNC_6(VAR_3, VAR_4, VAR_28, VAR_29);
    FUNC_13(VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
    FUNC_12(VAR_18, VAR_18, VAR_18, VAR_18, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_34 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_12(VAR_19, VAR_19, VAR_19, VAR_19, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_35 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_12(VAR_20, VAR_20, VAR_20, VAR_20, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_36 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_12(VAR_21, VAR_21, VAR_21, VAR_21, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_37 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_12(VAR_22, VAR_22, VAR_22, VAR_22, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_38 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_12(VAR_23, VAR_23, VAR_23, VAR_23, VAR_30, VAR_31, VAR_32, VAR_33);
    VAR_39 = FUNC_2(VAR_32, VAR_33, VAR_16, VAR_17);
    FUNC_1(VAR_34, VAR_35, VAR_36, VAR_37,
                       VAR_24, VAR_25, VAR_26, VAR_27,
                       VAR_41, VAR_43, VAR_42,
                       VAR_34, VAR_35, VAR_36, VAR_37);
    FUNC_0(VAR_38, VAR_39, VAR_28, VAR_29,
                       VAR_41, VAR_43, VAR_42,
                       VAR_38, VAR_39);

    FUNC_8(VAR_35, VAR_34, VAR_37, VAR_36, VAR_34, VAR_35);
    VAR_37 = (v8i16) FUNC_15((v16i8) VAR_39, (v16i8) VAR_38);
    FUNC_11(VAR_34, VAR_35, 0, 1, 0, 1, VAR_5, VAR_6);
    FUNC_10(VAR_37, 0, 1, VAR_5 + 4 * VAR_6, VAR_6);
}
