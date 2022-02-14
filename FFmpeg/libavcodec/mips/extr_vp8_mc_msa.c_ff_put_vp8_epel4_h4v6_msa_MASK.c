
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (int ,int ,int,int,int,int *,int) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,int) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_17(uint8_t *VAR_2, ptrdiff_t VAR_3,
                               uint8_t *VAR_4, ptrdiff_t VAR_5,
                               int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_1[VAR_7 - 1];
    const int8_t *VAR_11 = VAR_1[VAR_8 - 1];
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24;
    v16u8 VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41, VAR_42, VAR_43;

    VAR_23 = FUNC_3(&VAR_0[16]);

    VAR_4 -= (1 + 2 * VAR_5);


    VAR_40 = FUNC_6(VAR_10);
    FUNC_9(VAR_40, 0, 1, VAR_21, VAR_22);

    VAR_24 = VAR_23 + 2;

    FUNC_5(VAR_4, VAR_5, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_4 += (5 * VAR_5);

    FUNC_14(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_26 = FUNC_1(VAR_12, VAR_13, VAR_23, VAR_24, VAR_21, VAR_22);
    VAR_28 = FUNC_1(VAR_14, VAR_15, VAR_23, VAR_24, VAR_21, VAR_22);
    VAR_29 = FUNC_1(VAR_15, VAR_16, VAR_23, VAR_24, VAR_21, VAR_22);
    VAR_27 = (v8i16) FUNC_16((v16i8) VAR_28, (v16i8) VAR_26, 8);
    FUNC_2(VAR_26, VAR_27, VAR_28, VAR_29, VAR_36, VAR_37);

    VAR_40 = FUNC_6(VAR_11);
    FUNC_10(VAR_40, 0, 1, 2, VAR_41, VAR_42, VAR_43);

    for (VAR_9 = (VAR_6 >> 2); VAR_9--;) {
        FUNC_4(VAR_4, VAR_5, VAR_17, VAR_18, VAR_19, VAR_20);
        FUNC_13(VAR_17, VAR_18, VAR_19, VAR_20);
        VAR_4 += (4 * VAR_5);

        VAR_31 = FUNC_1(VAR_17, VAR_18, VAR_23, VAR_24, VAR_21, VAR_22);
        VAR_30 = (v8i16) FUNC_16((v16i8) VAR_31, (v16i8) VAR_29, 8);
        VAR_38 = (v8i16) FUNC_15((v16i8) VAR_31, (v16i8) VAR_30);
        VAR_34 = FUNC_0(VAR_36, VAR_37, VAR_38, VAR_41, VAR_42, VAR_43);

        VAR_33 = FUNC_1(VAR_19, VAR_20, VAR_23, VAR_24, VAR_21, VAR_22);
        VAR_32 = (v8i16) FUNC_16((v16i8) VAR_33, (v16i8) VAR_31, 8);
        VAR_39 = (v8i16) FUNC_15((v16i8) VAR_33, (v16i8) VAR_32);
        VAR_35 = FUNC_0(VAR_37, VAR_38, VAR_39, VAR_41, VAR_42, VAR_43);

        FUNC_11(VAR_34, VAR_35, 7);
        FUNC_8(VAR_34, VAR_35, 7);
        VAR_25 = FUNC_7(VAR_34, VAR_35);
        FUNC_12(VAR_25, 0, 1, 2, 3, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_29 = VAR_33;
        VAR_36 = VAR_38;
        VAR_37 = VAR_39;
    }
}
