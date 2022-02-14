
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
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
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
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v16i8 VAR_32, VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36;
    v8i16 VAR_37, VAR_38;
    v8i16 VAR_39;
    v4i32 VAR_40, VAR_41, VAR_42;

    VAR_0 -= VAR_1;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_12 = VAR_7 | (VAR_8 << 16);
    VAR_14 = 128 * VAR_8;
    VAR_14 <<= 6;
    VAR_13 += VAR_14;

    VAR_41 = FUNC_13(VAR_13);
    VAR_40 = FUNC_13(VAR_12);
    VAR_42 = FUNC_13(VAR_11 + 1);

    VAR_39 = FUNC_8(VAR_6);
    FUNC_10(VAR_39, 0, 1, VAR_37, VAR_38);

    FUNC_6(VAR_0, VAR_1, VAR_15, VAR_16, VAR_17);
    VAR_0 += (3 * VAR_1);
    FUNC_2(VAR_16, VAR_15, VAR_17, VAR_16, VAR_26, VAR_29);
    VAR_32 = (v16i8) FUNC_14((v2i64) VAR_29, (v2i64) VAR_26);
    VAR_32 = (v16i8) FUNC_16((v16u8) VAR_32, 128);

    FUNC_7(VAR_0, VAR_1, VAR_18, VAR_19, VAR_20, VAR_21);
    VAR_0 += (4 * VAR_1);
    FUNC_9(VAR_2, VAR_3, VAR_22, VAR_23, VAR_24, VAR_25);
    VAR_2 += (4 * VAR_3);
    FUNC_5(VAR_23, VAR_22, VAR_25, VAR_24, VAR_22, VAR_23);
    FUNC_3(VAR_18, VAR_17, VAR_19, VAR_18, VAR_20, VAR_19, VAR_21, VAR_20,
               VAR_27, VAR_30, VAR_28, VAR_31);
    FUNC_4(VAR_30, VAR_27, VAR_31, VAR_28, VAR_33, VAR_34);
    FUNC_12(VAR_33, VAR_34);

    VAR_35 = FUNC_1(VAR_32, VAR_33, VAR_37, VAR_38);
    VAR_36 = FUNC_1(VAR_33, VAR_34, VAR_37, VAR_38);

    FUNC_0(VAR_35, VAR_36, VAR_22, VAR_23,
                       VAR_40, VAR_42, VAR_41,
                       VAR_35, VAR_36);

    VAR_35 = (v8i16) FUNC_15((v16i8) VAR_36, (v16i8) VAR_35);
    FUNC_11(VAR_35, 0, 1, 2, 3, VAR_4, VAR_5);
    VAR_4 += (4 * VAR_5);
}
