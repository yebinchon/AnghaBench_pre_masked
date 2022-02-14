
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2,
                                int VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

    VAR_19 = (v16u8) FUNC_5(VAR_2);
    VAR_18 = (v16u8) FUNC_5(VAR_3);
    VAR_17 = (v16u8) FUNC_5(VAR_4);

    VAR_5 = VAR_0 - (VAR_1 << 2);
    FUNC_0(VAR_5, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_12, VAR_11, VAR_10);
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_12, VAR_11, VAR_10, VAR_18, VAR_19, VAR_17,
                 VAR_15, VAR_14, VAR_16);
    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_13, VAR_12, VAR_11, VAR_14, VAR_15);

    VAR_5 = VAR_0 - 3 * VAR_1;
    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_13, VAR_5, VAR_1);
    VAR_5 += (4 * VAR_1);
    FUNC_2(VAR_12, VAR_11, VAR_5, VAR_1);
}
