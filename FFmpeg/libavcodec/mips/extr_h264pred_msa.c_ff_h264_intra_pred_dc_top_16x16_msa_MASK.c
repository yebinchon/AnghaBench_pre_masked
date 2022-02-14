
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v2u64 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int ptrdiff_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

void FUNC_8(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    uint8_t *VAR_2 = VAR_0 - VAR_1;
    uint8_t *VAR_3 = VAR_0;
    v16u8 VAR_4, VAR_5;
    v8u16 VAR_6;
    v4u32 VAR_7;
    v2u64 VAR_8;

    VAR_4 = FUNC_0(VAR_2);

    VAR_6 = FUNC_3(VAR_4, VAR_4);
    VAR_7 = FUNC_4(VAR_6, VAR_6);
    VAR_8 = FUNC_2(VAR_7, VAR_7);
    VAR_7 = (v4u32) FUNC_5((v4i32) VAR_8, (v4i32) VAR_8);
    VAR_8 = FUNC_2(VAR_7, VAR_7);
    VAR_8 = (v2u64) FUNC_7((v2i64) VAR_8, 4);
    VAR_5 = (v16u8) FUNC_6((v16i8) VAR_8, 0);

    FUNC_1(VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_3, VAR_1);
    VAR_3 += (8 * VAR_1);
    FUNC_1(VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_3, VAR_1);
}
