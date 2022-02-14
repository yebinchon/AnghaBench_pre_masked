
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef scalar_t__ v4i32 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int,int *,int) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_18(uint8_t *VAR_0,
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
    v16i8 VAR_18, VAR_19;
    v8i16 VAR_20;
    v4i32 VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24;
    v8i16 VAR_25, VAR_26, VAR_27, VAR_28;
    v4i32 VAR_29, VAR_30;

    VAR_0 -= VAR_1;

    VAR_5 = VAR_5 & 0x0000FFFF;

    VAR_29 = FUNC_14(VAR_5);
    VAR_30 = FUNC_14(VAR_7);

    VAR_5 *= 128;
    VAR_7 -= 6;

    VAR_26 = FUNC_13(VAR_5);
    VAR_27 = FUNC_13(VAR_6);
    VAR_28 = FUNC_13(VAR_7);

    VAR_26 = FUNC_17(VAR_26, VAR_28);
    VAR_27 = FUNC_12(VAR_27, VAR_26);

    VAR_25 = FUNC_7(VAR_4);
    FUNC_8(VAR_25, 0, 1, VAR_23, VAR_24);

    FUNC_6(VAR_0, VAR_1, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_4(VAR_10, VAR_9, VAR_11, VAR_10, VAR_14, VAR_16);
    FUNC_4(VAR_12, VAR_11, VAR_13, VAR_12, VAR_15, VAR_17);
    FUNC_5(VAR_16, VAR_14, VAR_17, VAR_15, VAR_18, VAR_19);
    FUNC_11(VAR_18, VAR_19);
    VAR_20 = FUNC_2(VAR_18, VAR_19, VAR_23, VAR_24);
    FUNC_3(VAR_20, VAR_20, VAR_21, VAR_22);
    FUNC_1(VAR_21, VAR_22, VAR_29, VAR_29, VAR_21, VAR_22);
    FUNC_9(VAR_21, VAR_22, VAR_30);
    VAR_20 = FUNC_16((v8i16) VAR_22, (v8i16) VAR_21);
    VAR_20 = FUNC_12(VAR_20, VAR_27);
    FUNC_0(VAR_20);
    VAR_8 = (v16u8) FUNC_15((v16i8) VAR_20, (v16i8) VAR_20);
    FUNC_10(VAR_8, 0, 1, VAR_2, VAR_3);
}
