
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
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int,int *,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1,
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
    v16i8 VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21;
    v16i8 VAR_22 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27;
    v8i16 VAR_28;
    v4i32 VAR_29, VAR_30, VAR_31;

    VAR_1 -= 1;

    VAR_28 = FUNC_4(VAR_7);
    FUNC_6(VAR_28, 0, 1, VAR_16, VAR_17);

    VAR_13 = (VAR_10 + VAR_11) << VAR_12;
    VAR_8 = VAR_8 & 0x0000FFFF;
    VAR_14 = VAR_8 | (VAR_9 << 16);
    VAR_15 = 128 * VAR_9;
    VAR_15 <<= 6;
    VAR_13 += VAR_15;

    VAR_30 = FUNC_10(VAR_13);
    VAR_29 = FUNC_10(VAR_14);
    VAR_31 = FUNC_10(VAR_12 + 1);

    VAR_23 = VAR_22 + 2;

    FUNC_3(VAR_1, VAR_2, VAR_18, VAR_19);
    FUNC_5(VAR_3, VAR_4, VAR_20, VAR_21);
    FUNC_9(VAR_18, VAR_19);
    FUNC_8(VAR_18, VAR_18, VAR_18, VAR_18, VAR_22, VAR_23, VAR_24, VAR_25);
    VAR_26 = FUNC_1(VAR_24, VAR_25, VAR_16, VAR_17);
    FUNC_8(VAR_19, VAR_19, VAR_19, VAR_19, VAR_22, VAR_23, VAR_24, VAR_25);
    VAR_27 = FUNC_1(VAR_24, VAR_25, VAR_16, VAR_17);
    FUNC_0(VAR_26, VAR_27, VAR_20, VAR_21,
                       VAR_29, VAR_31, VAR_30,
                       VAR_26, VAR_27);

    VAR_26 = (v8i16) FUNC_11((v16i8) VAR_27, (v16i8) VAR_26);
    FUNC_7(VAR_26, 0, 1, VAR_5, VAR_6);
}
