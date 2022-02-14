
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(uint8_t *VAR_0, uint8_t *VAR_1,
                                 ptrdiff_t VAR_2, int VAR_3, int VAR_4,
                                 int VAR_5)
{
    uint8_t *VAR_6;
    uint64_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v16u8 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v16u8 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;

    VAR_26 = (v16u8) FUNC_7(VAR_3);
    VAR_25 = (v16u8) FUNC_7(VAR_4);
    VAR_24 = (v16u8) FUNC_7(VAR_5);

    VAR_6 = VAR_0 - (VAR_2 << 2);
    FUNC_1(VAR_6, VAR_2, VAR_27, VAR_28, VAR_29, VAR_30, VAR_34, VAR_33, VAR_32, VAR_31);
    VAR_6 = VAR_1 - (VAR_2 << 2);
    FUNC_1(VAR_6, VAR_2, VAR_35, VAR_36, VAR_37, VAR_38, VAR_42, VAR_41, VAR_40, VAR_39);


    FUNC_0(VAR_35, VAR_27, VAR_36, VAR_28, VAR_37, VAR_29, VAR_38, VAR_30, VAR_13, VAR_14, VAR_15, VAR_16);
    FUNC_0(VAR_42, VAR_34, VAR_41, VAR_33, VAR_40, VAR_32, VAR_39, VAR_31, VAR_20, VAR_19, VAR_18, VAR_17);
    FUNC_2(VAR_13, VAR_14, VAR_15, VAR_16, VAR_20, VAR_19, VAR_18, VAR_17, VAR_25, VAR_26, VAR_24,
                 VAR_22, VAR_21, VAR_23);
    FUNC_5(VAR_14, VAR_15, VAR_16, VAR_20, VAR_19, VAR_18, VAR_21, VAR_22);

    VAR_7 = FUNC_6((v2i64) VAR_14, 0);
    VAR_8 = FUNC_6((v2i64) VAR_15, 0);
    VAR_9 = FUNC_6((v2i64) VAR_16, 0);
    VAR_10 = FUNC_6((v2i64) VAR_20, 0);
    VAR_11 = FUNC_6((v2i64) VAR_19, 0);
    VAR_12 = FUNC_6((v2i64) VAR_18, 0);
    VAR_0 -= (VAR_2 * 3);
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_0, VAR_2);
    VAR_0 += 4 * VAR_2;
    FUNC_3(VAR_11, VAR_0);
    VAR_0 += VAR_2;
    FUNC_3(VAR_12, VAR_0);

    VAR_7 = FUNC_6((v2i64) VAR_14, 1);
    VAR_8 = FUNC_6((v2i64) VAR_15, 1);
    VAR_9 = FUNC_6((v2i64) VAR_16, 1);
    VAR_10 = FUNC_6((v2i64) VAR_20, 1);
    VAR_11 = FUNC_6((v2i64) VAR_19, 1);
    VAR_12 = FUNC_6((v2i64) VAR_18, 1);
    VAR_1 -= (VAR_2 * 3);
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_1, VAR_2);
    VAR_1 += 4 * VAR_2;
    FUNC_3(VAR_11, VAR_1);
    VAR_1 += VAR_2;
    FUNC_3(VAR_12, VAR_1);
}
