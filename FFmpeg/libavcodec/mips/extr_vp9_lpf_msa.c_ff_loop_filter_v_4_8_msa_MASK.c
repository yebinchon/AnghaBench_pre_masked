
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(uint8_t *VAR_0, ptrdiff_t VAR_1,
                              int32_t VAR_2,
                              int32_t VAR_3,
                              int32_t VAR_4)
{
    uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
    v16u8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;


    FUNC_0((VAR_0 - 4 * VAR_1), VAR_1, VAR_15, VAR_16, VAR_17, VAR_18, VAR_22, VAR_21, VAR_20, VAR_19);

    VAR_12 = (v16u8) FUNC_5(VAR_4);
    VAR_13 = (v16u8) FUNC_5(VAR_2);
    VAR_14 = (v16u8) FUNC_5(VAR_3);

    FUNC_1(VAR_15, VAR_16, VAR_17, VAR_18, VAR_22, VAR_21, VAR_20, VAR_19, VAR_14, VAR_13, VAR_12,
                 VAR_10, VAR_9, VAR_11);
    FUNC_3(VAR_17, VAR_18, VAR_22, VAR_21, VAR_9, VAR_10, VAR_23, VAR_24, VAR_25,
                       VAR_26);

    VAR_5 = FUNC_4((v2i64) VAR_23, 0);
    VAR_6 = FUNC_4((v2i64) VAR_24, 0);
    VAR_7 = FUNC_4((v2i64) VAR_25, 0);
    VAR_8 = FUNC_4((v2i64) VAR_26, 0);
    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, (VAR_0 - 2 * VAR_1), VAR_1);
}
