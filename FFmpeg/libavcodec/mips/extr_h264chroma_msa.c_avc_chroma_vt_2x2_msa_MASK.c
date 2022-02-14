
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_11(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                                  uint32_t VAR_3, uint32_t VAR_4)
{
    uint16_t VAR_5, VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9;
    v16u8 VAR_10, VAR_11;
    v8i16 VAR_12;
    v8u16 VAR_13;
    v16i8 VAR_14 = FUNC_5(VAR_3);
    v16i8 VAR_15 = FUNC_5(VAR_4);
    v16u8 VAR_16 = (v16u8) FUNC_6(VAR_14, VAR_15);

    FUNC_1(VAR_0, VAR_2, VAR_7, VAR_8, VAR_9);

    FUNC_0(VAR_8, VAR_7, VAR_9, VAR_8, VAR_10, VAR_11);

    VAR_10 = (v16u8) FUNC_7((v2i64) VAR_11, (v2i64) VAR_10);

    VAR_13 = FUNC_4(VAR_10, VAR_16);
    VAR_13 <<= 3;
    VAR_13 = (v8u16) FUNC_10((v8i16) VAR_13, 6);
    VAR_13 = FUNC_9(VAR_13, 7);
    VAR_12 = (v8i16) FUNC_8((v16i8) VAR_13, (v16i8) VAR_13);

    VAR_5 = FUNC_3(VAR_12, 0);
    VAR_6 = FUNC_3(VAR_12, 2);

    FUNC_2(VAR_5, VAR_1);
    VAR_1 += VAR_2;
    FUNC_2(VAR_6, VAR_1);
}
