
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_14(uint8_t *VAR_1,
                                      int32_t VAR_2,
                                      uint8_t *VAR_3,
                                      int32_t VAR_4,
                                      const int8_t *VAR_5,
                                      int32_t VAR_6,
                                      int32_t VAR_7,
                                      int32_t VAR_8)
{
    v16u8 VAR_9;
    v8i16 VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24, VAR_25, VAR_26;
    v4i32 VAR_27, VAR_28;
    v16i8 VAR_29 = FUNC_2(&VAR_0[16]);

    VAR_1 -= 1;


    VAR_23 = FUNC_4(VAR_5);
    FUNC_5(VAR_23, 0, 1, VAR_10, VAR_11);

    VAR_16 = VAR_29 + 2;

    VAR_6 = VAR_6 & 0x0000FFFF;

    VAR_27 = FUNC_11(VAR_6);
    VAR_28 = FUNC_11(VAR_8);

    VAR_6 *= 128;
    VAR_8 -= 6;

    VAR_24 = FUNC_10(VAR_6);
    VAR_25 = FUNC_10(VAR_7);
    VAR_26 = FUNC_10(VAR_8);

    VAR_24 = FUNC_13(VAR_24, VAR_26);
    VAR_25 = FUNC_9(VAR_25, VAR_24);

    FUNC_3(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14, VAR_15);
    FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15);

    FUNC_7(VAR_12, VAR_13, VAR_12, VAR_13, VAR_29, VAR_16, VAR_17, VAR_18);
    FUNC_7(VAR_14, VAR_15, VAR_14, VAR_15, VAR_29, VAR_16, VAR_19, VAR_20);
    VAR_21 = FUNC_0(VAR_17, VAR_18, VAR_10, VAR_11);
    VAR_22 = FUNC_0(VAR_19, VAR_20, VAR_10, VAR_11);

    FUNC_1(VAR_21, VAR_22, VAR_27, VAR_25, VAR_28,
                                   VAR_21, VAR_22);

    VAR_9 = (v16u8) FUNC_12((v16i8) VAR_22, (v16i8) VAR_21);
    FUNC_6(VAR_9, 0, 1, 2, 3, VAR_3, VAR_4);
    VAR_3 += (4 * VAR_4);
}
