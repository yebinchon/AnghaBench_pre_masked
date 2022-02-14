
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
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int,int,int,int,int,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 int FUNC_8 (int,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    uint32_t VAR_9;
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    v8i16 VAR_26, VAR_27;
    v16i8 VAR_28 = FUNC_2(&VAR_0[0]);
    v16i8 VAR_29;
    v8i16 VAR_30, VAR_31;

    VAR_1 -= 1;

    VAR_31 = FUNC_11(128);
    VAR_31 <<= 6;

    VAR_30 = FUNC_4(VAR_7);
    FUNC_7(VAR_30, 0, 1, VAR_26, VAR_27);

    VAR_29 = VAR_28 + 2;

    for (VAR_9 = (VAR_8 >> 1); VAR_9--;) {
        FUNC_3(VAR_1, VAR_2, VAR_10, VAR_12);
        FUNC_3(VAR_1 + 8, VAR_2, VAR_11, VAR_13);
        VAR_1 += (2 * VAR_2);
        FUNC_5(VAR_3, VAR_4, VAR_18, VAR_20);
        FUNC_5(VAR_3 + 8, VAR_4, VAR_19, VAR_21);
        VAR_3 += (2 * VAR_4);

        FUNC_10(VAR_10, VAR_11, VAR_12, VAR_13);

        VAR_22 = VAR_31;
        VAR_23 = VAR_31;
        VAR_24 = VAR_31;
        VAR_25 = VAR_31;

        FUNC_9(VAR_10, VAR_10, VAR_11, VAR_11, VAR_28, VAR_28, VAR_14, VAR_15);
        FUNC_9(VAR_12, VAR_12, VAR_13, VAR_13, VAR_28, VAR_28, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17, VAR_26, VAR_26, VAR_26, VAR_26, VAR_22,
                     VAR_23, VAR_24, VAR_25);
        FUNC_9(VAR_10, VAR_10, VAR_11, VAR_11, VAR_29, VAR_29, VAR_14, VAR_15);
        FUNC_9(VAR_12, VAR_12, VAR_13, VAR_13, VAR_29, VAR_29, VAR_16, VAR_17);
        FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17, VAR_27, VAR_27, VAR_27, VAR_27, VAR_22,
                     VAR_23, VAR_24, VAR_25);

        FUNC_1(VAR_18, VAR_19, VAR_20, VAR_21,
                          VAR_22, VAR_23, VAR_24, VAR_25, 7, VAR_22, VAR_23, VAR_24, VAR_25);

        FUNC_6(VAR_23, VAR_22, VAR_25, VAR_24, VAR_22, VAR_23);
        FUNC_8(VAR_22, VAR_23, VAR_5, VAR_6);
        VAR_5 += (2 * VAR_6);
    }
}
