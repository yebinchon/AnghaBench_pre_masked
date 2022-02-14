
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int ,int ,int,int *,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_1, int32_t VAR_2,
                                      uint8_t *VAR_3, int32_t VAR_4,
                                      const int8_t *VAR_5,
                                      const int8_t *VAR_6)
{
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8u16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    v8u16 VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;

    VAR_16 = FUNC_3(&VAR_0[16]);


    VAR_40 = FUNC_5(VAR_5);
    VAR_21 = (v16u8) FUNC_12((v8i16) VAR_40, 0);

    VAR_40 = FUNC_5(VAR_6);
    VAR_22 = (v16u8) FUNC_12((v8i16) VAR_40, 0);

    FUNC_4(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    VAR_1 += (8 * VAR_2);
    VAR_15 = FUNC_3(VAR_1);

    VAR_27 = FUNC_1(VAR_7, VAR_8, VAR_16, VAR_21, 7);
    VAR_29 = FUNC_1(VAR_9, VAR_10, VAR_16, VAR_21, 7);
    VAR_31 = FUNC_1(VAR_11, VAR_12, VAR_16, VAR_21, 7);
    VAR_33 = FUNC_1(VAR_13, VAR_14, VAR_16, VAR_21, 7);
    VAR_35 = FUNC_1(VAR_15, VAR_15, VAR_16, VAR_21, 7);
    FUNC_8(VAR_29, VAR_27, VAR_31, VAR_29, VAR_33, VAR_31, 8, VAR_28,
               VAR_30, VAR_32);
    VAR_34 = (v8u16) FUNC_11((v2i64) VAR_35, (v2i64) VAR_33);

    FUNC_2(VAR_27, VAR_28, VAR_29, VAR_30, VAR_23, VAR_24);
    FUNC_2(VAR_31, VAR_32, VAR_33, VAR_34, VAR_25, VAR_26);
    FUNC_0(VAR_23, VAR_24, VAR_25, VAR_26, VAR_22, VAR_22, VAR_22, VAR_22,
                VAR_36, VAR_37, VAR_38, VAR_39);
    FUNC_9(VAR_36, VAR_37, VAR_38, VAR_39, 7);
    FUNC_7(VAR_36, VAR_37, VAR_38, VAR_39, 7);
    FUNC_6(VAR_36, VAR_36, VAR_37, VAR_37, VAR_38, VAR_38, VAR_39, VAR_39,
                VAR_17, VAR_18, VAR_19, VAR_20);
    FUNC_10(VAR_17, 0, 1, VAR_3, VAR_4);
    FUNC_10(VAR_18, 0, 1, VAR_3 + 2 * VAR_4, VAR_4);
    FUNC_10(VAR_19, 0, 1, VAR_3 + 4 * VAR_4, VAR_4);
    FUNC_10(VAR_20, 0, 1, VAR_3 + 6 * VAR_4, VAR_4);
}
