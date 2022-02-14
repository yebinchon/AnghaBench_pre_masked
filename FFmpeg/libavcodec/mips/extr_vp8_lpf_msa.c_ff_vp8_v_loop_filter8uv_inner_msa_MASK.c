
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
 int FUNC_3 (int ,int ,int ,int ,int *,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(uint8_t *VAR_0, uint8_t *VAR_1,
                                       ptrdiff_t VAR_2, int VAR_3,
                                       int VAR_4, int VAR_5)
{
    uint64_t VAR_6, VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    v16u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    v16u8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v16u8 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;

    VAR_21 = (v16u8) FUNC_6(VAR_5);
    VAR_22 = (v16u8) FUNC_6(VAR_4);
    VAR_23 = (v16u8) FUNC_6(VAR_3);

    VAR_0 = VAR_0 - (VAR_2 << 2);
    FUNC_1(VAR_0, VAR_2, VAR_24, VAR_25, VAR_26, VAR_27, VAR_31, VAR_30, VAR_29, VAR_28);
    VAR_0 += (5 * VAR_2);
    VAR_1 = VAR_1 - (VAR_2 << 2);
    FUNC_1(VAR_1, VAR_2, VAR_32, VAR_33, VAR_34, VAR_35, VAR_39, VAR_38, VAR_37, VAR_36);
    VAR_1 += (5 * VAR_2);



    FUNC_0(VAR_32, VAR_24, VAR_33, VAR_25, VAR_34, VAR_26, VAR_35, VAR_27, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_0(VAR_39, VAR_31, VAR_38, VAR_30, VAR_37, VAR_29, VAR_36, VAR_28, VAR_17, VAR_16, VAR_15, VAR_14);
    FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13, VAR_17, VAR_16, VAR_15, VAR_14, VAR_22, VAR_23, VAR_21,
                 VAR_19, VAR_18, VAR_20);
    FUNC_4(VAR_12, VAR_13, VAR_17, VAR_16, VAR_18, VAR_19);

    VAR_6 = FUNC_5((v2i64) VAR_12, 0);
    VAR_7 = FUNC_5((v2i64) VAR_13, 0);
    VAR_8 = FUNC_5((v2i64) VAR_17, 0);
    VAR_9 = FUNC_5((v2i64) VAR_16, 0);
    FUNC_3(VAR_9, VAR_8, VAR_7, VAR_6, VAR_0, (- VAR_2));

    VAR_6 = FUNC_5((v2i64) VAR_12, 1);
    VAR_7 = FUNC_5((v2i64) VAR_13, 1);
    VAR_8 = FUNC_5((v2i64) VAR_17, 1);
    VAR_9 = FUNC_5((v2i64) VAR_16, 1);
    FUNC_3(VAR_9, VAR_8, VAR_7, VAR_6, VAR_1, (- VAR_2));
}
