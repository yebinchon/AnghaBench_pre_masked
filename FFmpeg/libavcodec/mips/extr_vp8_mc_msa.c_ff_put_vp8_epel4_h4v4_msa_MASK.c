
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int ,int,int ,int ) ;
 int FUNC_9 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int) ;
 int * VAR_0 ;
 int ** VAR_1 ;

void FUNC_16(uint8_t *VAR_2, ptrdiff_t VAR_3,
                               uint8_t *VAR_4, ptrdiff_t VAR_5,
                               int VAR_6, int VAR_7, int VAR_8)
{
    uint32_t VAR_9;
    const int8_t *VAR_10 = VAR_1[VAR_7 - 1];
    const int8_t *VAR_11 = VAR_1[VAR_8 - 1];
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;

    VAR_21 = FUNC_5(&VAR_0[16]);
    VAR_4 -= (1 + 1 * VAR_5);


    VAR_24 = FUNC_4(VAR_10);
    FUNC_8(VAR_24, 0, 1, VAR_19, VAR_20);

    VAR_22 = VAR_21 + 2;

    FUNC_2(VAR_4, VAR_5, VAR_12, VAR_13, VAR_14);
    VAR_4 += (3 * VAR_5);

    FUNC_13(VAR_12, VAR_13, VAR_14);
    VAR_32 = FUNC_1(VAR_12, VAR_13, VAR_21, VAR_22, VAR_19, VAR_20);
    VAR_33 = FUNC_1(VAR_13, VAR_14, VAR_21, VAR_22, VAR_19, VAR_20);
    VAR_29 = (v8i16) FUNC_14((v16i8) VAR_33, (v16i8) VAR_32);

    VAR_24 = FUNC_4(VAR_11);
    FUNC_9(VAR_24, 0, 1, VAR_25, VAR_26);

    for (VAR_9 = (VAR_6 >> 2); VAR_9--;) {
        FUNC_3(VAR_4, VAR_5, VAR_15, VAR_16, VAR_17, VAR_18);
        VAR_4 += (4 * VAR_5);

        FUNC_12(VAR_15, VAR_16);
        VAR_35 = FUNC_1(VAR_15, VAR_16, VAR_21, VAR_22, VAR_19, VAR_20);
        VAR_34 = (v8i16) FUNC_15((v16i8) VAR_35, (v16i8) VAR_33, 8);
        VAR_30 = (v8i16) FUNC_14((v16i8) VAR_35, (v16i8) VAR_34);
        VAR_27 = FUNC_0(VAR_29, VAR_30, VAR_25, VAR_26);

        FUNC_12(VAR_17, VAR_18);
        VAR_37 = FUNC_1(VAR_17, VAR_18, VAR_21, VAR_22, VAR_19, VAR_20);
        VAR_36 = (v8i16) FUNC_15((v16i8) VAR_37, (v16i8) VAR_35, 8);
        VAR_31 = (v8i16) FUNC_14((v16i8) VAR_37, (v16i8) VAR_36);
        VAR_28 = FUNC_0(VAR_30, VAR_31, VAR_25, VAR_26);

        FUNC_10(VAR_27, VAR_28, 7);
        FUNC_7(VAR_27, VAR_28, 7);
        VAR_23 = FUNC_6(VAR_27, VAR_28);
        FUNC_11(VAR_23, 0, 1, 2, 3, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_33 = VAR_37;
        VAR_29 = VAR_31;
    }
}
