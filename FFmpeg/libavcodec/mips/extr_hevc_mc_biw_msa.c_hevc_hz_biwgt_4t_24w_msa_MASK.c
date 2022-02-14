
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_1,
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
                                     int32_t VAR_12,
                                     int32_t VAR_13)
{
    uint32_t VAR_14;
    int32_t VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23;
    v16i8 VAR_24 = FUNC_3(&VAR_0[0]);
    v16i8 VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31, VAR_32, VAR_33;
    v8i16 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40;
    v4i32 VAR_41, VAR_42, VAR_43;

    VAR_1 -= 1;

    VAR_40 = FUNC_5(VAR_7);
    FUNC_8(VAR_40, 0, 1, VAR_22, VAR_23);

    VAR_15 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_16 = VAR_9 | (VAR_10 << 16);
    VAR_17 = 128 * VAR_10;
    VAR_17 <<= 6;
    VAR_15 += VAR_17;

    VAR_42 = FUNC_13(VAR_15);
    VAR_41 = FUNC_13(VAR_16);
    VAR_43 = FUNC_13(VAR_13 + 1);

    VAR_25 = VAR_24 + 2;
    VAR_26 = VAR_24 + 8;
    VAR_27 = VAR_24 + 10;

    for (VAR_14 = 16; VAR_14--;) {
        FUNC_4(VAR_1, VAR_2, VAR_18, VAR_20);
        FUNC_4(VAR_1 + 16, VAR_2, VAR_19, VAR_21);
        VAR_1 += (2 * VAR_2);
        FUNC_6(VAR_3, VAR_4, VAR_34, VAR_36);
        FUNC_6(VAR_3 + 8, VAR_4, VAR_35, VAR_37);
        FUNC_6(VAR_3 + 16, VAR_4, VAR_38, VAR_39);
        VAR_3 += (2 * VAR_4);
        FUNC_12(VAR_18, VAR_19, VAR_20, VAR_21);

        FUNC_11(VAR_18, VAR_18, VAR_18, VAR_18, VAR_24, VAR_25, VAR_28, VAR_29);
        VAR_30 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_11(VAR_18, VAR_19, VAR_18, VAR_19, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_31 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_11(VAR_20, VAR_20, VAR_20, VAR_20, VAR_24, VAR_25, VAR_28, VAR_29);
        VAR_32 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_11(VAR_20, VAR_21, VAR_20, VAR_21, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_33 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_1(VAR_30, VAR_31, VAR_32, VAR_33,
                           VAR_34, VAR_35, VAR_36, VAR_37,
                           VAR_41, VAR_43, VAR_42,
                           VAR_30, VAR_31, VAR_32, VAR_33);

        FUNC_7(VAR_31, VAR_30, VAR_33, VAR_32, VAR_30, VAR_31);
        FUNC_10(VAR_30, VAR_31, VAR_5, VAR_6);


        FUNC_11(VAR_19, VAR_19, VAR_19, VAR_19, VAR_24, VAR_25, VAR_28, VAR_29);
        VAR_30 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_11(VAR_21, VAR_21, VAR_21, VAR_21, VAR_24, VAR_25, VAR_28, VAR_29);
        VAR_31 = FUNC_2(VAR_28, VAR_29, VAR_22, VAR_23);
        FUNC_0(VAR_30, VAR_31, VAR_38, VAR_39,
                           VAR_41, VAR_43, VAR_42,
                           VAR_30, VAR_31);

        VAR_30 = (v8i16) FUNC_14((v16i8) VAR_31, (v16i8) VAR_30);
        FUNC_9(VAR_30, 0, 1, (VAR_5 + 16), VAR_6);
        VAR_5 += (2 * VAR_6);
    }
}
