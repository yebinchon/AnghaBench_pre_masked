
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int,int,int *,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                              int32_t VAR_3, int32_t VAR_4,
                              int32_t VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21;

    VAR_6 = (unsigned) ((VAR_6 + 1) | 1) << VAR_3;
    VAR_6 += (128 * (VAR_4 + VAR_5));

    VAR_11 = FUNC_7(VAR_4);
    VAR_12 = FUNC_7(VAR_5);
    VAR_21 = FUNC_8(VAR_6);
    VAR_20 = FUNC_8(VAR_3 + 1);

    VAR_13 = FUNC_9(VAR_12, VAR_11);

    FUNC_3(VAR_0, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_16);
    FUNC_3(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_17);
    FUNC_5(VAR_16, VAR_17);
    FUNC_1(VAR_17, VAR_16, VAR_14, VAR_15);
    VAR_18 = FUNC_6(VAR_21, VAR_13, VAR_14);
    VAR_19 = FUNC_6(VAR_21, VAR_13, VAR_15);
    VAR_18 >>= VAR_20;
    VAR_19 >>= VAR_20;
    FUNC_0(VAR_18, VAR_19);
    VAR_17 = (v16u8) FUNC_10((v16i8) VAR_19, (v16i8) VAR_18);
    FUNC_4(VAR_17, 0, 1, 2, 3, VAR_1, VAR_2);
}
