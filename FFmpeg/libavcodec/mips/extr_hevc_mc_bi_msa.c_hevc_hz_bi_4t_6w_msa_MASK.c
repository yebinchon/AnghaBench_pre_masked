
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,int,int,int,int) ;
 int FUNC_6 (int,int,int,int,int,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 int FUNC_8 (int,int,int,int *,int) ;
 int FUNC_9 (int,int ,int,int *,int) ;
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
                                 int32_t VAR_8)
{
    uint32_t VAR_9;
    v8i16 VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31;

    VAR_1 -= 1;

    VAR_31 = FUNC_12(128);
    VAR_31 <<= 6;

    VAR_30 = FUNC_4(VAR_7);
    FUNC_7(VAR_30, 0, 1, VAR_10, VAR_11);

    VAR_21 = VAR_20 + 2;

    for (VAR_9 = (VAR_8 >> 2); VAR_9--;) {
        FUNC_3(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_1 += (4 * VAR_2);
        FUNC_5(VAR_3, VAR_4, VAR_16, VAR_17, VAR_18, VAR_19);
        VAR_3 += (4 * VAR_4);
        FUNC_11(VAR_12, VAR_13, VAR_14, VAR_15);

        VAR_26 = VAR_31;
        VAR_27 = VAR_31;
        VAR_28 = VAR_31;
        VAR_29 = VAR_31;
        FUNC_10(VAR_12, VAR_12, VAR_13, VAR_13, VAR_20, VAR_20, VAR_22, VAR_23);
        FUNC_10(VAR_14, VAR_14, VAR_15, VAR_15, VAR_20, VAR_20, VAR_24, VAR_25);
        FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25, VAR_10, VAR_10, VAR_10, VAR_10, VAR_26,
                     VAR_27, VAR_28, VAR_29);
        FUNC_10(VAR_12, VAR_12, VAR_13, VAR_13, VAR_21, VAR_21, VAR_22, VAR_23);
        FUNC_10(VAR_14, VAR_14, VAR_15, VAR_15, VAR_21, VAR_21, VAR_24, VAR_25);
        FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25, VAR_11, VAR_11, VAR_11, VAR_11, VAR_26,
                     VAR_27, VAR_28, VAR_29);

        FUNC_1(VAR_16, VAR_17, VAR_18, VAR_19,
                          VAR_26, VAR_27, VAR_28, VAR_29, 7, VAR_26, VAR_27, VAR_28, VAR_29);

        FUNC_6(VAR_27, VAR_26, VAR_29, VAR_28, VAR_26, VAR_27);
        FUNC_9(VAR_26, 0, 2, VAR_5, VAR_6);
        FUNC_8(VAR_26, 2, 6, VAR_5 + 4, VAR_6);
        FUNC_9(VAR_27, 0, 2, VAR_5 + 2 * VAR_6, VAR_6);
        FUNC_8(VAR_27, 2, 6, VAR_5 + 2 * VAR_6 + 4, VAR_6);
        VAR_5 += (4 * VAR_6);
    }
}
