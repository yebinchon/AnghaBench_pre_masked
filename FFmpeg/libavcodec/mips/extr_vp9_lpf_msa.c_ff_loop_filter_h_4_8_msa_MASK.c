
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int,int,int,int ,int,int,int,int *,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(uint8_t *VAR_0, ptrdiff_t VAR_1,
                              int32_t VAR_2,
                              int32_t VAR_3,
                              int32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v16u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v8i16 VAR_19, VAR_20, VAR_21, VAR_22;

    FUNC_2((VAR_0 - 4), VAR_1, VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_17, VAR_16, VAR_15);

    VAR_9 = (v16u8) FUNC_7(VAR_4);
    VAR_10 = (v16u8) FUNC_7(VAR_2);
    VAR_8 = (v16u8) FUNC_7(VAR_3);

    FUNC_5(VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_17, VAR_16, VAR_15,
                       VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_17, VAR_16, VAR_15);
    FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_17, VAR_16, VAR_15, VAR_8, VAR_10, VAR_9,
                 VAR_6, VAR_5, VAR_7);
    FUNC_6(VAR_13, VAR_14, VAR_18, VAR_17, VAR_5, VAR_6, VAR_13, VAR_14, VAR_18, VAR_17);
    FUNC_1(VAR_14, VAR_13, VAR_17, VAR_18, VAR_19, VAR_20);
    FUNC_0(VAR_20, VAR_19, VAR_21, VAR_22);

    VAR_0 -= 2;
    FUNC_4(VAR_21, VAR_22, 0, 1, 2, 3, 0, 1, 2, 3, VAR_0, VAR_1);
}
