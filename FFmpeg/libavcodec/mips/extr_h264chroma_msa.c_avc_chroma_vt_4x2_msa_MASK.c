
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v4i32 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int,int *,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                                  uint32_t VAR_3, uint32_t VAR_4)
{
    v16u8 VAR_5, VAR_6, VAR_7;
    v16u8 VAR_8, VAR_9;
    v4i32 VAR_10;
    v8u16 VAR_11;
    v16i8 VAR_12 = FUNC_4(VAR_3);
    v16i8 VAR_13 = FUNC_4(VAR_4);
    v16u8 VAR_14 = (v16u8) FUNC_5(VAR_12, VAR_13);

    FUNC_1(VAR_0, VAR_2, VAR_5, VAR_6, VAR_7);
    FUNC_0(VAR_6, VAR_5, VAR_7, VAR_6, VAR_8, VAR_9);

    VAR_8 = (v16u8) FUNC_6((v2i64) VAR_9, (v2i64) VAR_8);
    VAR_11 = FUNC_3(VAR_8, VAR_14);
    VAR_11 <<= 3;
    VAR_11 = (v8u16) FUNC_9((v8i16) VAR_11, 6);
    VAR_11 = FUNC_8(VAR_11, 7);
    VAR_10 = (v4i32) FUNC_7((v16i8) VAR_11, (v16i8) VAR_11);

    FUNC_2(VAR_10, 0, 1, VAR_1, VAR_2);
}
