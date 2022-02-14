
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int,int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
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
    v8i16 VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24, VAR_25, VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29;
    v8i16 VAR_30;
    v4i32 VAR_31, VAR_32, VAR_33;

    VAR_0 -= VAR_1;

    VAR_12 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_13 = VAR_7 | (VAR_8 << 16);
    VAR_14 = 128 * VAR_8;
    VAR_14 <<= 6;
    VAR_12 += VAR_14;

    VAR_32 = FUNC_11(VAR_12);
    VAR_31 = FUNC_11(VAR_13);
    VAR_33 = FUNC_11(VAR_11 + 1);

    VAR_30 = FUNC_5(VAR_6);
    FUNC_7(VAR_30, 0, 1, VAR_28, VAR_29);

    FUNC_4(VAR_0, VAR_1, VAR_15, VAR_16, VAR_17);
    VAR_0 += (3 * VAR_1);
    FUNC_10(VAR_15, VAR_16, VAR_17);
    FUNC_2(VAR_16, VAR_15, VAR_17, VAR_16, VAR_24, VAR_26);

    FUNC_3(VAR_0, VAR_1, VAR_18, VAR_19);
    FUNC_6(VAR_2, VAR_3, VAR_20, VAR_21);
    FUNC_9(VAR_18, VAR_19);
    FUNC_2(VAR_18, VAR_17, VAR_19, VAR_18, VAR_25, VAR_27);

    VAR_22 = FUNC_1(VAR_24, VAR_25, VAR_28, VAR_29);
    VAR_23 = FUNC_1(VAR_26, VAR_27, VAR_28, VAR_29);
    FUNC_0(VAR_22, VAR_23, VAR_20, VAR_21,
                       VAR_31, VAR_33, VAR_32,
                       VAR_22, VAR_23);

    VAR_22 = (v8i16) FUNC_12((v16i8) VAR_23, (v16i8) VAR_22);
    FUNC_8(VAR_22, 0, 1, VAR_4, VAR_5);
}
