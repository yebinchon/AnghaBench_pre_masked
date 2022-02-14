
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ) ;

void FUNC_10(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                int32_t VAR_2,
                                int32_t VAR_3,
                                int32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16u8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    v16u8 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
    v8i16 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;

    FUNC_3(VAR_0 - 4, VAR_1, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29);
    FUNC_3(VAR_0 - 4 + (8 * VAR_1), VAR_1,
           VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37);

    FUNC_6(VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29,
                        VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37,
                        VAR_14, VAR_15, VAR_16, VAR_17, VAR_21, VAR_20, VAR_19, VAR_18);

    VAR_8 = (v16u8) FUNC_8(VAR_4);
    VAR_11 = (v16u8) FUNC_8(VAR_4 >> 8);
    VAR_8 = (v16u8) FUNC_9((v2i64) VAR_11, (v2i64) VAR_8);

    VAR_9 = (v16u8) FUNC_8(VAR_2);
    VAR_12 = (v16u8) FUNC_8(VAR_2 >> 8);
    VAR_9 = (v16u8) FUNC_9((v2i64) VAR_12, (v2i64) VAR_9);

    VAR_10 = (v16u8) FUNC_8(VAR_3);
    VAR_13 = (v16u8) FUNC_8(VAR_3 >> 8);
    VAR_10 = (v16u8) FUNC_9((v2i64) VAR_13, (v2i64) VAR_10);

    FUNC_4(VAR_14, VAR_15, VAR_16, VAR_17, VAR_21, VAR_20, VAR_19, VAR_18, VAR_10, VAR_9, VAR_8,
                 VAR_6, VAR_5, VAR_7);
    FUNC_7(VAR_16, VAR_17, VAR_21, VAR_20, VAR_5, VAR_6, VAR_16, VAR_17, VAR_21, VAR_20);
    FUNC_2(VAR_17, VAR_16, VAR_20, VAR_21, VAR_38, VAR_39);
    FUNC_1(VAR_39, VAR_38, VAR_40, VAR_41);
    FUNC_0(VAR_17, VAR_16, VAR_20, VAR_21, VAR_38, VAR_39);
    FUNC_1(VAR_39, VAR_38, VAR_42, VAR_43);

    VAR_0 -= 2;

    FUNC_5(VAR_40, VAR_41, 0, 1, 2, 3, 0, 1, 2, 3, VAR_0, VAR_1);
    FUNC_5(VAR_42, VAR_43, 0, 1, 2, 3, 0, 1, 2, 3, VAR_0 + 8 * VAR_1, VAR_1);
}
