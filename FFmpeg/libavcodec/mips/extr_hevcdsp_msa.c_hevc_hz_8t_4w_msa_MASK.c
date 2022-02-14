
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
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int,int ,int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int ,int,int ,int,int ,int,int ,int,int *,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_1, int32_t VAR_2,
                              int16_t *VAR_3, int32_t VAR_4,
                              const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32;
    v16i8 VAR_33 = FUNC_1(VAR_0 + 16);

    VAR_1 -= 3;
    VAR_32 = FUNC_8(128);
    VAR_32 <<= 6;

    VAR_31 = FUNC_3(VAR_5);
    FUNC_4(VAR_31, 0, 1, 2, 3, VAR_16, VAR_17, VAR_18, VAR_19);

    VAR_20 = VAR_33 + 2;
    VAR_21 = VAR_33 + 4;
    VAR_22 = VAR_33 + 6;

    for (VAR_7 = (VAR_6 >> 3); VAR_7--;) {
        FUNC_2(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_1 += (8 * VAR_2);
        FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

        FUNC_6(VAR_8, VAR_9, VAR_33, VAR_20, VAR_21, VAR_22,
                   VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_27 = VAR_32;
        FUNC_0(VAR_23, VAR_24, VAR_25, VAR_26, VAR_16, VAR_17, VAR_18, VAR_19,
                     VAR_27, VAR_27, VAR_27, VAR_27);
        FUNC_6(VAR_10, VAR_11, VAR_33, VAR_20, VAR_21, VAR_22,
                   VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_28 = VAR_32;
        FUNC_0(VAR_23, VAR_24, VAR_25, VAR_26, VAR_16, VAR_17, VAR_18, VAR_19,
                     VAR_28, VAR_28, VAR_28, VAR_28);
        FUNC_6(VAR_12, VAR_13, VAR_33, VAR_20, VAR_21, VAR_22,
                   VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_29 = VAR_32;
        FUNC_0(VAR_23, VAR_24, VAR_25, VAR_26, VAR_16, VAR_17, VAR_18, VAR_19,
                     VAR_29, VAR_29, VAR_29, VAR_29);
        FUNC_6(VAR_14, VAR_15, VAR_33, VAR_20, VAR_21, VAR_22,
                   VAR_23, VAR_24, VAR_25, VAR_26);
        VAR_30 = VAR_32;
        FUNC_0(VAR_23, VAR_24, VAR_25, VAR_26, VAR_16, VAR_17, VAR_18, VAR_19,
                     VAR_30, VAR_30, VAR_30, VAR_30);

        FUNC_5(VAR_27, VAR_28, VAR_29, VAR_30, 0, 1, 0, 1, 0, 1, 0, 1, VAR_3, VAR_4);
        VAR_3 += (8 * VAR_4);
    }
}
