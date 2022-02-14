
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,int *,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int) ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_0,
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
                                     int32_t VAR_11)
{
    int32_t VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21, VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v4i32 VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34;
    v4i32 VAR_35, VAR_36, VAR_37;

    VAR_0 -= VAR_1;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_12 = VAR_7 | (VAR_8 << 16);
    VAR_14 = 128 * VAR_8;
    VAR_14 <<= 6;
    VAR_13 += VAR_14;

    VAR_36 = FUNC_12(VAR_13);
    VAR_35 = FUNC_12(VAR_12);
    VAR_37 = FUNC_12(VAR_11 + 1);

    VAR_33 = FUNC_6(VAR_6);
    FUNC_8(VAR_33, 0, 1, VAR_31, VAR_32);

    FUNC_5(VAR_0, VAR_1, VAR_15, VAR_16, VAR_17);
    VAR_0 += (3 * VAR_1);
    FUNC_3(VAR_16, VAR_15, VAR_17, VAR_16, VAR_23, VAR_25);
    VAR_27 = (v16i8) FUNC_13((v2i64) VAR_25, (v2i64) VAR_23);
    VAR_27 = (v16i8) FUNC_16((v16u8) VAR_27, 128);
    FUNC_4(VAR_0, VAR_1, VAR_18, VAR_19);
    VAR_0 += (2 * VAR_1);
    FUNC_7(VAR_2, VAR_3, VAR_20, VAR_21);
    VAR_2 += (2 * VAR_3);

    VAR_20 = (v8i16) FUNC_13((v2i64) VAR_21, (v2i64) VAR_20);
    FUNC_3(VAR_18, VAR_17, VAR_19, VAR_18, VAR_24, VAR_26);
    VAR_28 = (v16i8) FUNC_13((v2i64) VAR_26, (v2i64) VAR_24);
    VAR_28 = (v16i8) FUNC_16((v16u8) VAR_28, 128);

    VAR_22 = FUNC_1(VAR_27, VAR_28, VAR_31, VAR_32);

    FUNC_2(VAR_22, VAR_20, VAR_29, VAR_30);
    VAR_29 = FUNC_11(VAR_36, (v8i16) VAR_29, (v8i16) VAR_35);
    VAR_30 = FUNC_11(VAR_36, (v8i16) VAR_30, (v8i16) VAR_35);
    FUNC_9(VAR_29, VAR_30, VAR_37);
    VAR_34 = FUNC_15((v8i16) VAR_30, (v8i16) VAR_29);
    FUNC_0(VAR_34);
    VAR_34 = (v8i16) FUNC_14((v16i8) VAR_34, (v16i8) VAR_34);
    FUNC_10(VAR_34, 0, 1, VAR_4, VAR_5);
}
