
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int,int,int *,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int ** VAR_0 ;

void FUNC_12(uint8_t *VAR_1, ptrdiff_t VAR_2,
                             uint8_t *VAR_3, ptrdiff_t VAR_4,
                             int VAR_5, int VAR_6, int VAR_7)
{
    uint32_t VAR_8;
    const int8_t *VAR_9 = VAR_0[VAR_7 - 1];
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28;
    v16u8 VAR_29;

    VAR_3 -= VAR_4;

    VAR_26 = FUNC_4(VAR_9);
    FUNC_7(VAR_26, 0, 1, VAR_24, VAR_25);

    FUNC_3(VAR_3, VAR_4, VAR_10, VAR_11, VAR_12);
    VAR_3 += (3 * VAR_4);

    FUNC_1(VAR_11, VAR_10, VAR_12, VAR_11, VAR_16, VAR_19);

    VAR_22 = (v16i8) FUNC_10((v2i64) VAR_19, (v2i64) VAR_16);
    VAR_22 = (v16i8) FUNC_11((v16u8) VAR_22, 128);

    for (VAR_8 = (VAR_5 >> 2); VAR_8--;) {
        FUNC_3(VAR_3, VAR_4, VAR_13, VAR_14, VAR_15);
        VAR_3 += (3 * VAR_4);
        FUNC_1(VAR_13, VAR_12, VAR_14, VAR_13, VAR_17, VAR_20);
        VAR_23 = (v16i8) FUNC_10((v2i64) VAR_20, (v2i64) VAR_17);
        VAR_23 = (v16i8) FUNC_11((v16u8) VAR_23, 128);
        VAR_27 = FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25);

        VAR_12 = FUNC_2(VAR_3);
        VAR_3 += (VAR_4);
        FUNC_1(VAR_15, VAR_14, VAR_12, VAR_15, VAR_18, VAR_21);
        VAR_22 = (v16i8) FUNC_10((v2i64) VAR_21, (v2i64) VAR_18);
        VAR_22 = (v16i8) FUNC_11((v16u8) VAR_22, 128);
        VAR_28 = FUNC_0(VAR_23, VAR_22, VAR_24, VAR_25);
        FUNC_8(VAR_27, VAR_28, 7);
        FUNC_6(VAR_27, VAR_28, 7);
        VAR_29 = FUNC_5(VAR_27, VAR_28);
        FUNC_9(VAR_29, 0, 1, 2, 3, VAR_1, VAR_2);
        VAR_1 += (4 * VAR_2);
    }
}
