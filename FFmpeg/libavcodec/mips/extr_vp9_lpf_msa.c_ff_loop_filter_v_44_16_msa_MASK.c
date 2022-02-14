
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

void FUNC_6(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                int32_t VAR_2,
                                int32_t VAR_3,
                                int32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


    FUNC_0((VAR_0 - 4 * VAR_1), VAR_1, VAR_14, VAR_15, VAR_16, VAR_17, VAR_21, VAR_20, VAR_19, VAR_18);

    VAR_8 = (v16u8) FUNC_4(VAR_4);
    VAR_11 = (v16u8) FUNC_4(VAR_4 >> 8);
    VAR_8 = (v16u8) FUNC_5((v2i64) VAR_11, (v2i64) VAR_8);

    VAR_9 = (v16u8) FUNC_4(VAR_2);
    VAR_12 = (v16u8) FUNC_4(VAR_2 >> 8);
    VAR_9 = (v16u8) FUNC_5((v2i64) VAR_12, (v2i64) VAR_9);

    VAR_10 = (v16u8) FUNC_4(VAR_3);
    VAR_13 = (v16u8) FUNC_4(VAR_3 >> 8);
    VAR_10 = (v16u8) FUNC_5((v2i64) VAR_13, (v2i64) VAR_10);

    FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17, VAR_21, VAR_20, VAR_19, VAR_18, VAR_10, VAR_9, VAR_8,
                 VAR_6, VAR_5, VAR_7);
    FUNC_3(VAR_16, VAR_17, VAR_21, VAR_20, VAR_5, VAR_6, VAR_16, VAR_17, VAR_21, VAR_20);

    FUNC_2(VAR_16, VAR_17, VAR_21, VAR_20, (VAR_0 - 2 * VAR_1), VAR_1);
}
