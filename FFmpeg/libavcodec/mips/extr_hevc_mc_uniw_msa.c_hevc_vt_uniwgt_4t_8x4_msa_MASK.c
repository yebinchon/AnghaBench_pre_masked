
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                                      int32_t VAR_1,
                                      uint8_t *VAR_2,
                                      int32_t VAR_3,
                                      const int8_t *VAR_4,
                                      int32_t VAR_5,
                                      int32_t VAR_6,
                                      int32_t VAR_7)
{
    v16u8 VAR_8, VAR_9;
    v16i8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19, VAR_20, VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32;
    v4i32 VAR_33, VAR_34;

    VAR_0 -= VAR_1;

    VAR_5 = VAR_5 & 0x0000FFFF;

    VAR_33 = FUNC_11(VAR_5);
    VAR_34 = FUNC_11(VAR_7);

    VAR_5 *= 128;
    VAR_7 -= 6;

    VAR_30 = FUNC_10(VAR_5);
    VAR_31 = FUNC_10(VAR_6);
    VAR_32 = FUNC_10(VAR_7);

    VAR_30 = FUNC_12(VAR_30, VAR_32);
    VAR_31 = FUNC_9(VAR_31, VAR_30);

    VAR_29 = FUNC_4(VAR_4);
    FUNC_6(VAR_29, 0, 1, VAR_23, VAR_24);

    FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_19, VAR_20);
    VAR_0 += (3 * VAR_1);
    FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_19, VAR_20);
    FUNC_2(VAR_11, VAR_10, VAR_12, VAR_11, VAR_15, VAR_17);
    FUNC_2(VAR_13, VAR_12, VAR_14, VAR_13, VAR_16, VAR_18);
    FUNC_2(VAR_19, VAR_14, VAR_20, VAR_19, VAR_21, VAR_22);
    VAR_25 = FUNC_0(VAR_15, VAR_16, VAR_23, VAR_24);
    VAR_26 = FUNC_0(VAR_17, VAR_18, VAR_23, VAR_24);
    VAR_27 = FUNC_0(VAR_16, VAR_21, VAR_23, VAR_24);
    VAR_28 = FUNC_0(VAR_18, VAR_22, VAR_23, VAR_24);
    FUNC_1(VAR_25, VAR_26, VAR_27, VAR_28, VAR_33,
                                   VAR_31, VAR_34, VAR_25, VAR_26, VAR_27,
                                   VAR_28);
    FUNC_5(VAR_26, VAR_25, VAR_28, VAR_27, VAR_8, VAR_9);
    FUNC_7(VAR_8, VAR_9, 0, 1, 0, 1, VAR_2, VAR_3);
}
