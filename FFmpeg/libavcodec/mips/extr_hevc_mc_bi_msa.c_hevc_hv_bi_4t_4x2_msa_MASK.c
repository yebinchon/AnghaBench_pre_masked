
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int,int ,int,int,int) ;
 int FUNC_10 (int,int ,int,int) ;
 int FUNC_11 (scalar_t__,int ,int,int *,scalar_t__) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_20(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  const int8_t *VAR_8)
{
    uint64_t VAR_9, VAR_10;
    v16u8 VAR_11;
    v8i16 VAR_12 = { 0 };
    v16i8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19;
    v8i16 VAR_20, VAR_21;
    v16i8 VAR_22 = FUNC_6(VAR_0 + 16);
    v16i8 VAR_23;
    v8i16 VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v4i32 VAR_40, VAR_41;

    VAR_1 -= (VAR_2 + 1);

    VAR_24 = FUNC_8(VAR_7);
    FUNC_9(VAR_24, 0, 1, VAR_18, VAR_19);

    VAR_24 = FUNC_8(VAR_8);
    FUNC_12(VAR_24, VAR_24);

    FUNC_10(VAR_24, 0, VAR_20, VAR_21);

    VAR_23 = VAR_22 + 2;

    VAR_25 = FUNC_16(128);
    VAR_25 <<= 6;

    FUNC_7(VAR_1, VAR_2, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
    FUNC_14(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

    FUNC_5(VAR_3, VAR_4, VAR_9, VAR_10);
    FUNC_4(VAR_9, VAR_10, VAR_12);
    VAR_12 = FUNC_15(VAR_12, VAR_25);

    FUNC_13(VAR_13, VAR_15, VAR_13, VAR_15, VAR_22, VAR_23, VAR_26, VAR_27);
    FUNC_13(VAR_14, VAR_16, VAR_14, VAR_16, VAR_22, VAR_23, VAR_28, VAR_29);
    FUNC_13(VAR_15, VAR_17, VAR_15, VAR_17, VAR_22, VAR_23, VAR_30, VAR_31);

    VAR_32 = FUNC_2(VAR_26, VAR_27, VAR_18, VAR_19);
    VAR_33 = FUNC_2(VAR_28, VAR_29, VAR_18, VAR_19);
    VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_18, VAR_19);

    FUNC_3(VAR_33, VAR_32, VAR_35, VAR_36);
    FUNC_3(VAR_34, VAR_33, VAR_37, VAR_38);

    VAR_40 = FUNC_1(VAR_35, VAR_36, VAR_20, VAR_21);
    VAR_41 = FUNC_1(VAR_37, VAR_38, VAR_20, VAR_21);
    VAR_40 >>= 6;
    VAR_41 >>= 6;
    VAR_39 = FUNC_18((v8i16) VAR_41, (v8i16) VAR_40);
    VAR_39 = FUNC_15(VAR_39, VAR_12);
    VAR_39 = FUNC_19(VAR_39, 7);
    FUNC_0(VAR_39);
    VAR_11 = (v16u8) FUNC_17((v16i8) VAR_39, (v16i8) VAR_39);
    FUNC_11(VAR_11, 0, 1, VAR_5, VAR_6);
}
