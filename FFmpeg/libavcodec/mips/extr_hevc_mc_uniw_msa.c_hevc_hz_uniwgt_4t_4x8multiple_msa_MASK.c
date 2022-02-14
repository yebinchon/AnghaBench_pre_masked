
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_14(uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3,
                                              int32_t VAR_4,
                                              const int8_t *VAR_5,
                                              int32_t VAR_6,
                                              int32_t VAR_7,
                                              int32_t VAR_8,
                                              int32_t VAR_9)
{
    uint32_t VAR_10;
    v16u8 VAR_11, VAR_12;
    v8i16 VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36;
    v8i16 VAR_37, VAR_38, VAR_39;
    v4i32 VAR_40, VAR_41;
    v16i8 VAR_42 = FUNC_2(&VAR_0[16]);

    VAR_1 -= 1;

    VAR_36 = FUNC_4(VAR_5);
    FUNC_6(VAR_36, 0, 1, VAR_13, VAR_14);

    VAR_7 = VAR_7 & 0x0000FFFF;

    VAR_40 = FUNC_12(VAR_7);
    VAR_41 = FUNC_12(VAR_9);

    VAR_7 *= 128;
    VAR_9 -= 6;

    VAR_37 = FUNC_11(VAR_7);
    VAR_38 = FUNC_11(VAR_8);
    VAR_39 = FUNC_11(VAR_9);

    VAR_37 = FUNC_13(VAR_37, VAR_39);
    VAR_38 = FUNC_10(VAR_38, VAR_37);

    VAR_23 = VAR_42 + 2;

    for (VAR_10 = (VAR_6 >> 3); VAR_10--;) {
        FUNC_3(VAR_1, VAR_2, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
        VAR_1 += (8 * VAR_2);

        FUNC_9(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);

        FUNC_8(VAR_15, VAR_16, VAR_15, VAR_16, VAR_42, VAR_23, VAR_24, VAR_25);
        FUNC_8(VAR_17, VAR_18, VAR_17, VAR_18, VAR_42, VAR_23, VAR_26, VAR_27);
        FUNC_8(VAR_19, VAR_20, VAR_19, VAR_20, VAR_42, VAR_23, VAR_28, VAR_29);
        FUNC_8(VAR_21, VAR_22, VAR_21, VAR_22, VAR_42, VAR_23, VAR_30, VAR_31);
        VAR_32 = FUNC_0(VAR_24, VAR_25, VAR_13, VAR_14);
        VAR_33 = FUNC_0(VAR_26, VAR_27, VAR_13, VAR_14);
        VAR_34 = FUNC_0(VAR_28, VAR_29, VAR_13, VAR_14);
        VAR_35 = FUNC_0(VAR_30, VAR_31, VAR_13, VAR_14);

        FUNC_1(VAR_32, VAR_33, VAR_34, VAR_35,
                                       VAR_40, VAR_38, VAR_41,
                                       VAR_32, VAR_33, VAR_34, VAR_35);

        FUNC_5(VAR_33, VAR_32, VAR_35, VAR_34, VAR_11, VAR_12);
        FUNC_7(VAR_11, VAR_12, 0, 1, 2, 3, 0, 1, 2, 3, VAR_3, VAR_4);
        VAR_3 += (8 * VAR_4);
    }
}
