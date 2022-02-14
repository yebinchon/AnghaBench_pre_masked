
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_15(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;

    VAR_20 = FUNC_4(&VAR_0[0]);
    VAR_1 -= 3;


    VAR_29 = FUNC_3(VAR_5);
    FUNC_7(VAR_29, 0, 1, 2, 3, VAR_12, VAR_13, VAR_14, VAR_15);

    VAR_21 = VAR_20 + 2;
    VAR_22 = VAR_20 + 4;
    VAR_23 = VAR_20 + 6;
    VAR_24 = VAR_20 + 8;
    VAR_25 = VAR_20 + 10;
    VAR_26 = VAR_20 + 12;
    VAR_27 = VAR_20 + 14;

    for (VAR_7 = 64; VAR_7--;) {
        VAR_8 = FUNC_2(VAR_1);
        VAR_9 = FUNC_2(VAR_1 + 8);
        VAR_10 = FUNC_2(VAR_1 + 16);
        VAR_11 = FUNC_2(VAR_1 + 32);
        VAR_19 = FUNC_2(VAR_1 + 40);
        VAR_1 += VAR_2;

        FUNC_11(VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_19 = (v16i8) FUNC_14((v16u8) VAR_19, 128);

        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_10, VAR_10, VAR_20, VAR_20, VAR_20,
                   VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_16, VAR_17, VAR_18, VAR_12, VAR_12, VAR_12, VAR_30, VAR_31, VAR_32);
        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_10, VAR_10, VAR_21, VAR_21, VAR_21,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_13, VAR_13, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_13);
        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_10, VAR_10, VAR_22, VAR_22, VAR_22,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_14, VAR_14, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_14);

        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_10, VAR_10, VAR_23, VAR_23, VAR_23,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_15, VAR_15, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_15);

        FUNC_8(VAR_30, VAR_31, 6);
        VAR_33 = FUNC_13(VAR_32, 6);
        FUNC_6(VAR_30, VAR_31, VAR_33, 7);
        VAR_28 = FUNC_5(VAR_30, VAR_31);
        FUNC_9(VAR_28, VAR_3);

        FUNC_10(VAR_10, VAR_11, VAR_11, VAR_11, VAR_19, VAR_19, VAR_24, VAR_20, VAR_20,
                   VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_16, VAR_17, VAR_18, VAR_12, VAR_12, VAR_12, VAR_30, VAR_31, VAR_32);
        FUNC_10(VAR_10, VAR_11, VAR_11, VAR_11, VAR_19, VAR_19, VAR_25, VAR_21, VAR_21,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_13, VAR_13, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_13);
        FUNC_10(VAR_10, VAR_11, VAR_11, VAR_11, VAR_19, VAR_19, VAR_26, VAR_22, VAR_22,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_14, VAR_14, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_14);
        FUNC_10(VAR_10, VAR_11, VAR_11, VAR_11, VAR_19, VAR_19, VAR_27, VAR_23, VAR_23,
                   VAR_16, VAR_17, VAR_18);
        FUNC_1(VAR_16, VAR_17, VAR_15, VAR_15, VAR_30, VAR_31);
        VAR_32 = FUNC_12(VAR_32, VAR_18, VAR_15);

        FUNC_8(VAR_30, VAR_31, 6);
        VAR_32 = FUNC_13(VAR_32, 6);
        FUNC_6(VAR_30, VAR_31, VAR_32, 7);
        VAR_28 = FUNC_5(VAR_33, VAR_30);
        FUNC_9(VAR_28, VAR_3 + 16);
        VAR_28 = FUNC_5(VAR_31, VAR_32);
        FUNC_9(VAR_28, VAR_3 + 32);
        VAR_3 += VAR_4;
    }
}
