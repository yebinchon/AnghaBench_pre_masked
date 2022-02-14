
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (int *,int,int ,int ,int ,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int ** VAR_0 ;
 int * VAR_1 ;

void FUNC_11(uint8_t *VAR_2, ptrdiff_t VAR_3,
                                  uint8_t *VAR_4, ptrdiff_t VAR_5,
                                  int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_0[VAR_7 - 1];
    const int8_t *VAR_11 = VAR_0[VAR_8 - 1];
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24;
    v8u16 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31;

    VAR_20 = FUNC_3(&VAR_1[0]);


    VAR_31 = FUNC_6(VAR_10);
    VAR_21 = (v16u8) FUNC_10(VAR_31, 0);

    VAR_31 = FUNC_6(VAR_11);
    VAR_22 = (v16u8) FUNC_10(VAR_31, 0);

    FUNC_4(VAR_4, 8, VAR_12, VAR_13);
    VAR_4 += VAR_5;

    VAR_27 = FUNC_1(VAR_12, VAR_12, VAR_20, VAR_21, 7);
    VAR_29 = FUNC_1(VAR_13, VAR_13, VAR_20, VAR_21, 7);


    for (VAR_9 = (VAR_6 >> 2); VAR_9--;) {
        FUNC_5(VAR_4, VAR_5, VAR_12, VAR_14, VAR_16, VAR_18);
        FUNC_5(VAR_4 + 8, VAR_5, VAR_13, VAR_15, VAR_17, VAR_19);
        VAR_4 += (4 * VAR_5);

        VAR_28 = FUNC_1(VAR_12, VAR_12, VAR_20, VAR_21, 7);
        VAR_30 = FUNC_1(VAR_13, VAR_13, VAR_20, VAR_21, 7);
        FUNC_2(VAR_27, VAR_28, VAR_29, VAR_30, VAR_23, VAR_24);
        FUNC_0(VAR_23, VAR_24, VAR_22, VAR_22, VAR_25, VAR_26);
        FUNC_9(VAR_25, VAR_26, 7);
        FUNC_8(VAR_25, VAR_26, 7);
        FUNC_7(VAR_25, VAR_26, VAR_2);
        VAR_2 += VAR_3;

        VAR_27 = FUNC_1(VAR_14, VAR_14, VAR_20, VAR_21, 7);
        VAR_29 = FUNC_1(VAR_15, VAR_15, VAR_20, VAR_21, 7);
        FUNC_2(VAR_28, VAR_27, VAR_30, VAR_29, VAR_23, VAR_24);
        FUNC_0(VAR_23, VAR_24, VAR_22, VAR_22, VAR_25, VAR_26);
        FUNC_9(VAR_25, VAR_26, 7);
        FUNC_8(VAR_25, VAR_26, 7);
        FUNC_7(VAR_25, VAR_26, VAR_2);
        VAR_2 += VAR_3;

        VAR_28 = FUNC_1(VAR_16, VAR_16, VAR_20, VAR_21, 7);
        VAR_30 = FUNC_1(VAR_17, VAR_17, VAR_20, VAR_21, 7);
        FUNC_2(VAR_27, VAR_28, VAR_29, VAR_30, VAR_23, VAR_24);
        FUNC_0(VAR_23, VAR_24, VAR_22, VAR_22, VAR_25, VAR_26);
        FUNC_9(VAR_25, VAR_26, 7);
        FUNC_8(VAR_25, VAR_26, 7);
        FUNC_7(VAR_25, VAR_26, VAR_2);
        VAR_2 += VAR_3;

        VAR_27 = FUNC_1(VAR_18, VAR_18, VAR_20, VAR_21, 7);
        VAR_29 = FUNC_1(VAR_19, VAR_19, VAR_20, VAR_21, 7);
        FUNC_2(VAR_28, VAR_27, VAR_30, VAR_29, VAR_23, VAR_24);
        FUNC_0(VAR_23, VAR_24, VAR_22, VAR_22, VAR_25, VAR_26);
        FUNC_9(VAR_25, VAR_26, 7);
        FUNC_8(VAR_25, VAR_26, 7);
        FUNC_7(VAR_25, VAR_26, VAR_2);
        VAR_2 += VAR_3;
    }
}
