
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (scalar_t__,int ,int,int,int,int *,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5)
{
    v16u8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v8u16 VAR_11, VAR_12;
    v16i8 VAR_13;
    v16i8 VAR_14 = FUNC_7(VAR_4);
    v16i8 VAR_15 = FUNC_7(VAR_5);
    v16u8 VAR_16 = (v16u8) FUNC_8(VAR_14, VAR_15);

    VAR_13 = FUNC_1(&VAR_0[0]);

    FUNC_2(VAR_1, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_13, VAR_6, VAR_8);
    FUNC_0(VAR_6, VAR_8, VAR_16, VAR_16, VAR_11, VAR_12);
    VAR_11 <<= 3;
    VAR_12 <<= 3;
    FUNC_4(VAR_11, VAR_12, 6);
    FUNC_3(VAR_11, VAR_12, 7);
    VAR_10 = (v16u8) FUNC_9((v16i8) VAR_12, (v16i8) VAR_11);
    FUNC_5(VAR_10, 0, 1, 2, 3, VAR_2, VAR_3);
}
