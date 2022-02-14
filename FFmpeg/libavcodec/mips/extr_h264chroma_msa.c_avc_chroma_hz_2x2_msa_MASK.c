
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v8i16 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_11(uint8_t *VAR_1, uint8_t *VAR_2, int32_t VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5)
{
    uint16_t VAR_6, VAR_7;
    v16i8 VAR_8, VAR_9;
    v8u16 VAR_10;
    v8i16 VAR_11;
    v16i8 VAR_12;
    v16i8 VAR_13 = FUNC_5(VAR_4);
    v16i8 VAR_14 = FUNC_5(VAR_5);
    v16u8 VAR_15 = (v16u8) FUNC_6(VAR_13, VAR_14);

    VAR_12 = FUNC_0(&VAR_0[0]);

    FUNC_1(VAR_1, VAR_3, VAR_8, VAR_9);

    VAR_8 = FUNC_10(VAR_12, VAR_9, VAR_8);
    VAR_10 = FUNC_4((v16u8) VAR_8, VAR_15);
    VAR_10 <<= 3;
    VAR_10 = (v8u16) FUNC_9((v8i16) VAR_10, 6);
    VAR_10 = FUNC_8(VAR_10, 7);
    VAR_11 = (v8i16) FUNC_7((v16i8) VAR_10, (v16i8) VAR_10);

    VAR_6 = FUNC_3(VAR_11, 0);
    VAR_7 = FUNC_3(VAR_11, 2);

    FUNC_2(VAR_6, VAR_2);
    VAR_2 += VAR_3;
    FUNC_2(VAR_7, VAR_2);
}
