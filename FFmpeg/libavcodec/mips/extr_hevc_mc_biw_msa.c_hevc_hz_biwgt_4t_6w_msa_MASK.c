
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int ,int ) ;
 int FUNC_8 (int ,int,int,int *,int) ;
 int FUNC_9 (int ,int ,int,int *,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int) ;
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
    v8i16 VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v16i8 VAR_24 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_25;
    v16i8 VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36;
    v4i32 VAR_37, VAR_38, VAR_39;

    VAR_1 -= 1;

    VAR_36 = FUNC_4(VAR_7);
    FUNC_7(VAR_36, 0, 1, VAR_18, VAR_19);

    VAR_15 = (VAR_11 + VAR_12) << VAR_13;
    VAR_9 = VAR_9 & 0x0000FFFF;
    VAR_16 = VAR_9 | (VAR_10 << 16);
    VAR_17 = 128 * VAR_10;
    VAR_17 <<= 6;
    VAR_15 += VAR_17;

    VAR_38 = FUNC_12(VAR_15);
    VAR_37 = FUNC_12(VAR_16);
    VAR_39 = FUNC_12(VAR_13 + 1);

    VAR_25 = VAR_24 + 2;

    for (VAR_14 = 2; VAR_14--;) {
        FUNC_3(VAR_1, VAR_2, VAR_20, VAR_21, VAR_22, VAR_23);
        VAR_1 += (4 * VAR_2);
        FUNC_5(VAR_3, VAR_4, VAR_28, VAR_29, VAR_30, VAR_31);
        VAR_3 += (4 * VAR_4);
        FUNC_11(VAR_20, VAR_21, VAR_22, VAR_23);

        FUNC_10(VAR_20, VAR_20, VAR_20, VAR_20, VAR_24, VAR_25, VAR_26, VAR_27);
        VAR_32 = FUNC_1(VAR_26, VAR_27, VAR_18, VAR_19);
        FUNC_10(VAR_21, VAR_21, VAR_21, VAR_21, VAR_24, VAR_25, VAR_26, VAR_27);
        VAR_33 = FUNC_1(VAR_26, VAR_27, VAR_18, VAR_19);
        FUNC_10(VAR_22, VAR_22, VAR_22, VAR_22, VAR_24, VAR_25, VAR_26, VAR_27);
        VAR_34 = FUNC_1(VAR_26, VAR_27, VAR_18, VAR_19);
        FUNC_10(VAR_23, VAR_23, VAR_23, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27);
        VAR_35 = FUNC_1(VAR_26, VAR_27, VAR_18, VAR_19);

        FUNC_0(VAR_32, VAR_33, VAR_34, VAR_35,
                           VAR_28, VAR_29, VAR_30, VAR_31,
                           VAR_37, VAR_39, VAR_38,
                           VAR_32, VAR_33, VAR_34, VAR_35);

        FUNC_6(VAR_33, VAR_32, VAR_35, VAR_34, VAR_32, VAR_33);
        FUNC_9(VAR_32, 0, 2, VAR_5, VAR_6);
        FUNC_8(VAR_32, 2, 6, VAR_5 + 4, VAR_6);
        FUNC_9(VAR_33, 0, 2, VAR_5 + 2 * VAR_6, VAR_6);
        FUNC_8(VAR_33, 2, 6, VAR_5 + 2 * VAR_6 + 4, VAR_6);
        VAR_5 += (4 * VAR_6);
    }
}
