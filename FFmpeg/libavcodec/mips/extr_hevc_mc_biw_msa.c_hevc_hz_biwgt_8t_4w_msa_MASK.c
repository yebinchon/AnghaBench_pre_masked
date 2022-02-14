
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
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_1,
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
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28;
    v16i8 VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39, VAR_40, VAR_41;
    v4i32 VAR_42, VAR_43, VAR_44;
    v16i8 VAR_45 = FUNC_3(&VAR_0[16]);

    VAR_1 -= 3;
    VAR_39 = FUNC_5(VAR_7);
    FUNC_7(VAR_39, 0, 1, 2, 3, VAR_18, VAR_19, VAR_20, VAR_21);

    VAR_26 = VAR_45 + 2;
    VAR_27 = VAR_45 + 4;
    VAR_28 = VAR_45 + 6;

    VAR_15 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_16 = VAR_9 | (VAR_10 << 16);
    VAR_17 = 128 * VAR_10;
    VAR_17 <<= 6;
    VAR_15 += VAR_17;

    VAR_43 = FUNC_11(VAR_15);
    VAR_42 = FUNC_11(VAR_16);
    VAR_44 = FUNC_11(VAR_13 + 1);

    for (VAR_14 = (VAR_8 >> 2); VAR_14--;) {
        FUNC_4(VAR_1, VAR_2, VAR_22, VAR_23, VAR_24, VAR_25);
        VAR_1 += (4 * VAR_2);
        FUNC_6(VAR_3, VAR_4, VAR_35, VAR_36, VAR_37, VAR_38);
        VAR_3 += (4 * VAR_4);
        FUNC_2(VAR_36, VAR_35, VAR_38, VAR_37, VAR_35, VAR_36);
        FUNC_10(VAR_22, VAR_23, VAR_24, VAR_25);

        FUNC_9(VAR_22, VAR_23, VAR_45, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_33 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);
        FUNC_9(VAR_24, VAR_25, VAR_45, VAR_26, VAR_27, VAR_28,
                   VAR_29, VAR_30, VAR_31, VAR_32);
        VAR_34 = FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_18, VAR_19, VAR_20,
                                 VAR_21);

        FUNC_0(VAR_33, VAR_34, VAR_35, VAR_36,
                           VAR_42, VAR_44, VAR_43,
                           VAR_40, VAR_41);

        VAR_40 = (v8i16) FUNC_12((v16i8) VAR_41, (v16i8) VAR_40);
        FUNC_8(VAR_40, 0, 1, 2, 3, VAR_5, VAR_6);
        VAR_5 += (4 * VAR_6);
    }
}
