
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_1, int32_t VAR_2,
                                 uint8_t *VAR_3, int32_t VAR_4,
                                 const int8_t *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16i8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

    VAR_8 = FUNC_3(&VAR_0[0]);
    VAR_1 -= 3;


    VAR_25 = FUNC_2(VAR_5);
    FUNC_6(VAR_25, 0, 1, 2, 3, VAR_21, VAR_22, VAR_23, VAR_24);

    VAR_9 = VAR_8 + 2;
    VAR_10 = VAR_8 + 4;
    VAR_11 = VAR_8 + 6;

    for (VAR_7 = (VAR_6 >> 1); VAR_7--;) {
        VAR_13 = FUNC_1(VAR_1);
        VAR_14 = FUNC_1(VAR_1 + 8);
        VAR_15 = FUNC_1(VAR_1 + 16);
        VAR_16 = FUNC_1(VAR_1 + 24);
        VAR_1 += VAR_2;
        FUNC_9(VAR_13, VAR_14, VAR_15, VAR_16);

        VAR_17 = FUNC_1(VAR_1);
        VAR_18 = FUNC_1(VAR_1 + 8);
        VAR_19 = FUNC_1(VAR_1 + 16);
        VAR_20 = FUNC_1(VAR_1 + 24);
        VAR_1 += VAR_2;
        FUNC_9(VAR_17, VAR_18, VAR_19, VAR_20);

        FUNC_0(VAR_13, VAR_14, VAR_15, VAR_16, VAR_8, VAR_9, VAR_10,
                                   VAR_11, VAR_21, VAR_22, VAR_23, VAR_24, VAR_26,
                                   VAR_27, VAR_28, VAR_29);
        FUNC_7(VAR_26, VAR_27, VAR_28, VAR_29, 6);
        FUNC_5(VAR_26, VAR_27, VAR_28, VAR_29, 7);

        VAR_12 = FUNC_4(VAR_26, VAR_27);
        FUNC_8(VAR_12, VAR_3);
        VAR_12 = FUNC_4(VAR_28, VAR_29);
        FUNC_8(VAR_12, VAR_3 + 16);
        VAR_3 += VAR_4;

        FUNC_0(VAR_17, VAR_18, VAR_19, VAR_20, VAR_8, VAR_9, VAR_10,
                                   VAR_11, VAR_21, VAR_22, VAR_23, VAR_24, VAR_26,
                                   VAR_27, VAR_28, VAR_29);
        FUNC_7(VAR_26, VAR_27, VAR_28, VAR_29, 6);
        FUNC_5(VAR_26, VAR_27, VAR_28, VAR_29, 7);
        VAR_12 = FUNC_4(VAR_26, VAR_27);
        FUNC_8(VAR_12, VAR_3);
        VAR_12 = FUNC_4(VAR_28, VAR_29);
        FUNC_8(VAR_12, VAR_3 + 16);
        VAR_3 += VAR_4;
    }
}
