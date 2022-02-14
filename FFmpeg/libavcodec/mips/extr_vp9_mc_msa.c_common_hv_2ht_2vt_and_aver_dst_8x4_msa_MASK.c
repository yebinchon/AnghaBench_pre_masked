
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_1,
                                                   int32_t VAR_2,
                                                   uint8_t *VAR_3,
                                                   int32_t VAR_4,
                                                   const int8_t *VAR_5,
                                                   const int8_t *VAR_6)
{
    uint64_t VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16u8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    v8u16 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31;

    VAR_16 = FUNC_3(&VAR_0[0]);


    VAR_31 = FUNC_5(VAR_5);
    VAR_17 = (v16u8) FUNC_11(VAR_31, 0);

    VAR_31 = FUNC_5(VAR_6);
    VAR_18 = (v16u8) FUNC_11(VAR_31, 0);

    FUNC_4(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    VAR_1 += (5 * VAR_2);

    FUNC_2(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_1(VAR_7, VAR_8, VAR_19);
    FUNC_1(VAR_9, VAR_10, VAR_20);
    VAR_25 = FUNC_0(VAR_11, VAR_11, VAR_16, VAR_17, 7);
    VAR_26 = FUNC_0(VAR_12, VAR_12, VAR_16, VAR_17, 7);
    VAR_21 = (v16u8) FUNC_10((v16i8) VAR_26, (v16i8) VAR_25);
    VAR_27 = FUNC_9(VAR_21, VAR_18);

    VAR_25 = FUNC_0(VAR_13, VAR_13, VAR_16, VAR_17, 7);
    VAR_22 = (v16u8) FUNC_10((v16i8) VAR_25, (v16i8) VAR_26);
    VAR_28 = FUNC_9(VAR_22, VAR_18);

    VAR_26 = FUNC_0(VAR_14, VAR_14, VAR_16, VAR_17, 7);
    VAR_23 = (v16u8) FUNC_10((v16i8) VAR_26, (v16i8) VAR_25);
    VAR_29 = FUNC_9(VAR_23, VAR_18);

    VAR_25 = FUNC_0(VAR_15, VAR_15, VAR_16, VAR_17, 7);
    VAR_24 = (v16u8) FUNC_10((v16i8) VAR_25, (v16i8) VAR_26);
    VAR_30 = FUNC_9(VAR_24, VAR_18);

    FUNC_8(VAR_27, VAR_28, VAR_29, VAR_30, 7);
    FUNC_7(VAR_27, VAR_28, VAR_29, VAR_30, 7);
    FUNC_6(VAR_27, VAR_28, VAR_29, VAR_30, VAR_19, VAR_20, VAR_3, VAR_4);
}
