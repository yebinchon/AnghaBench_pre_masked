
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_8(uint8_t *VAR_2, ptrdiff_t VAR_3,
                          const uint8_t *VAR_4, ptrdiff_t VAR_5,
                          int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_1[VAR_7 - 1];
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16u8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v8u16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;

    VAR_19 = FUNC_1(&VAR_0[0]);

    VAR_9 = (VAR_6 >> 2) - 1;


    VAR_37 = FUNC_3(VAR_10);
    VAR_20 = (v16u8) FUNC_7((v8i16) VAR_37, 0);

    FUNC_2(VAR_4, VAR_5, VAR_11, VAR_13, VAR_15, VAR_17);
    FUNC_2(VAR_4 + 8, VAR_5, VAR_12, VAR_14, VAR_16, VAR_18);
    VAR_4 += (4 * VAR_5);

    FUNC_6(VAR_11, VAR_11, VAR_12, VAR_12, VAR_19, VAR_19, VAR_21, VAR_22);
    FUNC_6(VAR_13, VAR_13, VAR_14, VAR_14, VAR_19, VAR_19, VAR_23, VAR_24);
    FUNC_6(VAR_15, VAR_15, VAR_16, VAR_16, VAR_19, VAR_19, VAR_25, VAR_26);
    FUNC_6(VAR_17, VAR_17, VAR_18, VAR_18, VAR_19, VAR_19, VAR_27, VAR_28);
    FUNC_0(VAR_21, VAR_22, VAR_23, VAR_24, VAR_20, VAR_20, VAR_20, VAR_20,
                VAR_29, VAR_30, VAR_31, VAR_32);
    FUNC_0(VAR_25, VAR_26, VAR_27, VAR_28, VAR_20, VAR_20, VAR_20, VAR_20,
                VAR_33, VAR_34, VAR_35, VAR_36);
    FUNC_5(VAR_29, VAR_30, VAR_31, VAR_32, 7);
    FUNC_5(VAR_33, VAR_34, VAR_35, VAR_36, 7);
    FUNC_4(VAR_29, VAR_30, VAR_2);
    VAR_2 += VAR_3;
    FUNC_4(VAR_31, VAR_32, VAR_2);
    VAR_2 += VAR_3;
    FUNC_4(VAR_33, VAR_34, VAR_2);
    VAR_2 += VAR_3;
    FUNC_4(VAR_35, VAR_36, VAR_2);
    VAR_2 += VAR_3;

    for (; VAR_9--;) {
        FUNC_2(VAR_4, VAR_5, VAR_11, VAR_13, VAR_15, VAR_17);
        FUNC_2(VAR_4 + 8, VAR_5, VAR_12, VAR_14, VAR_16, VAR_18);
        VAR_4 += (4 * VAR_5);

        FUNC_6(VAR_11, VAR_11, VAR_12, VAR_12, VAR_19, VAR_19, VAR_21, VAR_22);
        FUNC_6(VAR_13, VAR_13, VAR_14, VAR_14, VAR_19, VAR_19, VAR_23, VAR_24);
        FUNC_6(VAR_15, VAR_15, VAR_16, VAR_16, VAR_19, VAR_19, VAR_25, VAR_26);
        FUNC_6(VAR_17, VAR_17, VAR_18, VAR_18, VAR_19, VAR_19, VAR_27, VAR_28);
        FUNC_0(VAR_21, VAR_22, VAR_23, VAR_24, VAR_20, VAR_20, VAR_20, VAR_20,
                    VAR_29, VAR_30, VAR_31, VAR_32);
        FUNC_0(VAR_25, VAR_26, VAR_27, VAR_28, VAR_20, VAR_20, VAR_20, VAR_20,
                    VAR_33, VAR_34, VAR_35, VAR_36);
        FUNC_5(VAR_29, VAR_30, VAR_31, VAR_32, 7);
        FUNC_5(VAR_33, VAR_34, VAR_35, VAR_36, 7);
        FUNC_4(VAR_29, VAR_30, VAR_2);
        VAR_2 += VAR_3;
        FUNC_4(VAR_31, VAR_32, VAR_2);
        VAR_2 += VAR_3;
        FUNC_4(VAR_33, VAR_34, VAR_2);
        VAR_2 += VAR_3;
        FUNC_4(VAR_35, VAR_36, VAR_2);
        VAR_2 += VAR_3;
    }
}
