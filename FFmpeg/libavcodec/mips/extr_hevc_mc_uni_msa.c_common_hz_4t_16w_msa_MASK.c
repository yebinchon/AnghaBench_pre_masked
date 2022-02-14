
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v16u8 VAR_33;

    VAR_18 = FUNC_2(&VAR_0[0]);
    VAR_1 -= 1;


    VAR_24 = FUNC_4(VAR_5);
    FUNC_7(VAR_24, 0, 1, VAR_16, VAR_17);

    VAR_19 = VAR_18 + 2;

    for (VAR_7 = (VAR_6 >> 2); VAR_7--;) {
        FUNC_3(VAR_1, VAR_2, VAR_8, VAR_10, VAR_12, VAR_14);
        FUNC_3(VAR_1 + 8, VAR_2, VAR_9, VAR_11, VAR_13, VAR_15);
        VAR_1 += (4 * VAR_2);

        FUNC_11(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_18, VAR_18, VAR_20, VAR_21);
        FUNC_10(VAR_10, VAR_10, VAR_11, VAR_11, VAR_18, VAR_18, VAR_22, VAR_23);
        FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_16, VAR_16, VAR_16, VAR_16,
                    VAR_25, VAR_26, VAR_27, VAR_28);
        FUNC_10(VAR_8, VAR_8, VAR_9, VAR_9, VAR_19, VAR_19, VAR_20, VAR_21);
        FUNC_10(VAR_10, VAR_10, VAR_11, VAR_11, VAR_19, VAR_19, VAR_22, VAR_23);
        FUNC_1(VAR_20, VAR_21, VAR_22, VAR_23, VAR_17, VAR_17, VAR_17, VAR_17,
                     VAR_25, VAR_26, VAR_27, VAR_28);
        FUNC_8(VAR_25, VAR_26, VAR_27, VAR_28, 6);
        FUNC_6(VAR_25, VAR_26, VAR_27, VAR_28, 7);
        VAR_33 = FUNC_5(VAR_25, VAR_26);
        FUNC_9(VAR_33, VAR_3);
        VAR_3 += VAR_4;
        VAR_33 = FUNC_5(VAR_27, VAR_28);
        FUNC_9(VAR_33, VAR_3);
        VAR_3 += VAR_4;

        FUNC_10(VAR_12, VAR_12, VAR_13, VAR_13, VAR_18, VAR_18, VAR_20, VAR_21);
        FUNC_10(VAR_14, VAR_14, VAR_15, VAR_15, VAR_18, VAR_18, VAR_22, VAR_23);
        FUNC_0(VAR_20, VAR_21, VAR_22, VAR_23, VAR_16, VAR_16, VAR_16, VAR_16,
                    VAR_29, VAR_30, VAR_31, VAR_32);
        FUNC_10(VAR_12, VAR_12, VAR_13, VAR_13, VAR_19, VAR_19, VAR_20, VAR_21);
        FUNC_10(VAR_14, VAR_14, VAR_15, VAR_15, VAR_19, VAR_19, VAR_22, VAR_23);
        FUNC_1(VAR_20, VAR_21, VAR_22, VAR_23, VAR_17, VAR_17, VAR_17, VAR_17,
                     VAR_29, VAR_30, VAR_31, VAR_32);
        FUNC_8(VAR_29, VAR_30, VAR_31, VAR_32, 6);
        FUNC_6(VAR_29, VAR_30, VAR_31, VAR_32, 7);
        VAR_33 = FUNC_5(VAR_29, VAR_30);
        FUNC_9(VAR_33, VAR_3);
        VAR_3 += VAR_4;
        VAR_33 = FUNC_5(VAR_31, VAR_32);
        FUNC_9(VAR_33, VAR_3);
        VAR_3 += VAR_4;
    }
}
