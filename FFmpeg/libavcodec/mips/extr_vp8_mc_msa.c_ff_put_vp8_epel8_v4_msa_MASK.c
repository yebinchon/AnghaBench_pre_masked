
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int8_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int ** VAR_0 ;

void FUNC_13(uint8_t *VAR_1, ptrdiff_t VAR_2,
                             uint8_t *VAR_3, ptrdiff_t VAR_4,
                             int VAR_5, int VAR_6, int VAR_7)
{
    uint32_t VAR_8;
    const int8_t *VAR_9 = VAR_0[VAR_7 - 1];
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v16u8 VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

    VAR_3 -= VAR_4;

    VAR_27 = FUNC_5(VAR_9);
    FUNC_8(VAR_27, 0, 1, VAR_23, VAR_24);

    FUNC_3(VAR_3, VAR_4, VAR_10, VAR_11, VAR_12);
    VAR_3 += (3 * VAR_4);

    FUNC_11(VAR_10, VAR_11, VAR_12);
    FUNC_1(VAR_11, VAR_10, VAR_12, VAR_11, VAR_17, VAR_20);

    for (VAR_8 = (VAR_5 >> 2); VAR_8--;) {
        FUNC_4(VAR_3, VAR_4, VAR_13, VAR_14, VAR_15, VAR_16);
        VAR_3 += (4 * VAR_4);

        FUNC_12(VAR_13, VAR_14, VAR_15, VAR_16);
        FUNC_2(VAR_13, VAR_12, VAR_14, VAR_13, VAR_15, VAR_14, VAR_16, VAR_15,
                   VAR_18, VAR_21, VAR_19, VAR_22);
        VAR_28 = FUNC_0(VAR_17, VAR_18, VAR_23, VAR_24);
        VAR_29 = FUNC_0(VAR_20, VAR_21, VAR_23, VAR_24);
        VAR_30 = FUNC_0(VAR_18, VAR_19, VAR_23, VAR_24);
        VAR_31 = FUNC_0(VAR_21, VAR_22, VAR_23, VAR_24);
        FUNC_9(VAR_28, VAR_29, VAR_30, VAR_31, 7);
        FUNC_7(VAR_28, VAR_29, VAR_30, VAR_31, 7);
        VAR_25 = FUNC_6(VAR_28, VAR_29);
        VAR_26 = FUNC_6(VAR_30, VAR_31);
        FUNC_10(VAR_25, VAR_26, 0, 1, 0, 1, VAR_1, VAR_2);
        VAR_1 += (4 * VAR_2);

        VAR_17 = VAR_19;
        VAR_20 = VAR_22;
        VAR_12 = VAR_16;
    }
}
