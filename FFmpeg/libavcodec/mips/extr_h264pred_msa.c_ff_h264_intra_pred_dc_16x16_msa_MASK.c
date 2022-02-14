
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8u16 ;
typedef scalar_t__ v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v2u64 ;
typedef scalar_t__ v16u8 ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef size_t ptrdiff_t ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,size_t) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

void FUNC_8(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    uint8_t *VAR_2 = VAR_0 - VAR_1;
    uint8_t *VAR_3 = VAR_0 - 1;
    uint8_t *VAR_4 = VAR_0;
    uint32_t VAR_5 = 0;
    v16u8 VAR_6, VAR_7;
    v8u16 VAR_8;
    v4u32 VAR_9;
    v2u64 VAR_10;

    VAR_6 = FUNC_0(VAR_2);

    VAR_8 = FUNC_5(VAR_6, VAR_6);
    VAR_9 = FUNC_6(VAR_8, VAR_8);
    VAR_10 = FUNC_4(VAR_9, VAR_9);
    VAR_9 = (v4u32) FUNC_7((v4i32) VAR_10, (v4i32) VAR_10);
    VAR_10 = FUNC_4(VAR_9, VAR_9);
    VAR_5 = FUNC_2((v4i32) VAR_10, 0);
    VAR_5 += VAR_3[ 0 * VAR_1];
    VAR_5 += VAR_3[ 1 * VAR_1];
    VAR_5 += VAR_3[ 2 * VAR_1];
    VAR_5 += VAR_3[ 3 * VAR_1];
    VAR_5 += VAR_3[ 4 * VAR_1];
    VAR_5 += VAR_3[ 5 * VAR_1];
    VAR_5 += VAR_3[ 6 * VAR_1];
    VAR_5 += VAR_3[ 7 * VAR_1];
    VAR_5 += VAR_3[ 8 * VAR_1];
    VAR_5 += VAR_3[ 9 * VAR_1];
    VAR_5 += VAR_3[10 * VAR_1];
    VAR_5 += VAR_3[11 * VAR_1];
    VAR_5 += VAR_3[12 * VAR_1];
    VAR_5 += VAR_3[13 * VAR_1];
    VAR_5 += VAR_3[14 * VAR_1];
    VAR_5 += VAR_3[15 * VAR_1];
    VAR_5 = (VAR_5 + 16) >> 5;
    VAR_7 = (v16u8) FUNC_3(VAR_5);

    FUNC_1(VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_4, VAR_1);
    VAR_4 += (8 * VAR_1);
    FUNC_1(VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_7, VAR_4, VAR_1);
}
