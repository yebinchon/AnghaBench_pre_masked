
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
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int,int ,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ,int,int,int,int ,int,int,int,int *,int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int const* VAR_0 ;

__attribute__((used)) static void FUNC_16(const uint8_t *VAR_1,
                                                   int32_t VAR_2,
                                                   uint8_t *VAR_3,
                                                   int32_t VAR_4,
                                                   const int8_t *VAR_5,
                                                   const int8_t *VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v16u8 VAR_29, VAR_30;
    v8u16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
    v8u16 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
    v8i16 VAR_44;

    VAR_20 = FUNC_5(&VAR_0[16]);


    VAR_44 = FUNC_7(VAR_5);
    VAR_21 = (v16u8) FUNC_15(VAR_44, 0);

    VAR_44 = FUNC_7(VAR_6);
    VAR_22 = (v16u8) FUNC_15(VAR_44, 0);

    FUNC_6(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
    VAR_1 += (8 * VAR_2);
    VAR_19 = FUNC_5(VAR_1);

    VAR_31 = FUNC_2(VAR_11, VAR_12, VAR_20, VAR_21, 7);
    VAR_33 = FUNC_2(VAR_13, VAR_14, VAR_20, VAR_21, 7);
    VAR_35 = FUNC_2(VAR_15, VAR_16, VAR_20, VAR_21, 7);
    VAR_37 = FUNC_2(VAR_17, VAR_18, VAR_20, VAR_21, 7);
    VAR_39 = FUNC_2(VAR_19, VAR_19, VAR_20, VAR_21, 7);
    FUNC_11(VAR_33, VAR_31, VAR_35, VAR_33, VAR_37, VAR_35, 8, VAR_32,
               VAR_34, VAR_36);
    VAR_38 = (v8u16) FUNC_14((v2i64) VAR_39, (v2i64) VAR_37);

    FUNC_8(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_29);
    FUNC_8(VAR_3 + 4 * VAR_4, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_30);
    FUNC_3(VAR_31, VAR_32, VAR_33, VAR_34, VAR_23, VAR_24);
    FUNC_3(VAR_35, VAR_36, VAR_37, VAR_38, VAR_25, VAR_26);
    FUNC_1(VAR_23, VAR_24, VAR_25, VAR_26, VAR_22, VAR_22, VAR_22, VAR_22,
                VAR_40, VAR_41, VAR_42, VAR_43);
    FUNC_12(VAR_40, VAR_41, VAR_42, VAR_43, 7);
    FUNC_10(VAR_40, VAR_41, VAR_42, VAR_43, 7);
    FUNC_9(VAR_41, VAR_40, VAR_43, VAR_42, VAR_27, VAR_28);
    FUNC_0(VAR_27, VAR_29, VAR_28, VAR_30, VAR_27, VAR_28);
    FUNC_13(VAR_27, VAR_28, 0, 1, 2, 3, 0, 1, 2, 3, VAR_3, VAR_4);
}
