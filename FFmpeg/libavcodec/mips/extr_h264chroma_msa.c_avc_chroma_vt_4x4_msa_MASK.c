
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                                  uint32_t VAR_3, uint32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14;
    v8u16 VAR_15, VAR_16;
    v16i8 VAR_17 = FUNC_7(VAR_3);
    v16i8 VAR_18 = FUNC_7(VAR_4);
    v16u8 VAR_19 = (v16u8) FUNC_8(VAR_17, VAR_18);

    FUNC_3(VAR_0, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_1(VAR_6, VAR_5, VAR_7, VAR_6, VAR_8, VAR_7, VAR_9, VAR_8, VAR_10, VAR_11, VAR_12,
               VAR_13);
    FUNC_2(VAR_11, VAR_10, VAR_13, VAR_12, VAR_10, VAR_12);
    FUNC_0(VAR_10, VAR_12, VAR_19, VAR_19, VAR_15, VAR_16);
    VAR_15 <<= 3;
    VAR_16 <<= 3;
    FUNC_5(VAR_15, VAR_16, 6);
    FUNC_4(VAR_15, VAR_16, 7);
    VAR_14 = (v16u8) FUNC_9((v16i8) VAR_16, (v16i8) VAR_15);
    FUNC_6(VAR_14, 0, 1, 2, 3, VAR_1, VAR_2);
}
