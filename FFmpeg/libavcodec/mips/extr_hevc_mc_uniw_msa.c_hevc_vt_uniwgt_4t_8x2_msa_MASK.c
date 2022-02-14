
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int,int *,int) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                                      int32_t VAR_1,
                                      uint8_t *VAR_2,
                                      int32_t VAR_3,
                                      const int8_t *VAR_4,
                                      int32_t VAR_5,
                                      int32_t VAR_6,
                                      int32_t VAR_7)
{
    v16u8 VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23, VAR_24, VAR_25;
    v4i32 VAR_26, VAR_27;

    VAR_0 -= VAR_1;

    VAR_5 = VAR_5 & 0x0000FFFF;

    VAR_26 = FUNC_10(VAR_5);
    VAR_27 = FUNC_10(VAR_7);

    VAR_5 *= 128;
    VAR_7 -= 6;

    VAR_23 = FUNC_9(VAR_5);
    VAR_24 = FUNC_9(VAR_6);
    VAR_25 = FUNC_9(VAR_7);

    VAR_23 = FUNC_12(VAR_23, VAR_25);
    VAR_24 = FUNC_8(VAR_24, VAR_23);

    VAR_22 = FUNC_4(VAR_4);
    FUNC_5(VAR_22, 0, 1, VAR_20, VAR_21);

    FUNC_3(VAR_0, VAR_1, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_7(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_2(VAR_10, VAR_9, VAR_11, VAR_10, VAR_14, VAR_16);
    FUNC_2(VAR_12, VAR_11, VAR_13, VAR_12, VAR_15, VAR_17);
    VAR_18 = FUNC_0(VAR_14, VAR_15, VAR_20, VAR_21);
    VAR_19 = FUNC_0(VAR_16, VAR_17, VAR_20, VAR_21);

    FUNC_1(VAR_18, VAR_19, VAR_26, VAR_24, VAR_27,
                                   VAR_18, VAR_19);

    VAR_8 = (v16u8) FUNC_11((v16i8) VAR_19, (v16i8) VAR_18);
    FUNC_6(VAR_8, 0, 1, VAR_2, VAR_3);
}
