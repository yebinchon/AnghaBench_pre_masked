
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t ptrdiff_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int*,size_t) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1)
{
    uint8_t *VAR_2 = VAR_0 - 1;
    uint8_t *VAR_3 = VAR_0;
    uint32_t VAR_4;
    v16u8 VAR_5;

    VAR_4 = VAR_2[ 0 * VAR_1];
    VAR_4 += VAR_2[ 1 * VAR_1];
    VAR_4 += VAR_2[ 2 * VAR_1];
    VAR_4 += VAR_2[ 3 * VAR_1];
    VAR_4 += VAR_2[ 4 * VAR_1];
    VAR_4 += VAR_2[ 5 * VAR_1];
    VAR_4 += VAR_2[ 6 * VAR_1];
    VAR_4 += VAR_2[ 7 * VAR_1];
    VAR_4 += VAR_2[ 8 * VAR_1];
    VAR_4 += VAR_2[ 9 * VAR_1];
    VAR_4 += VAR_2[10 * VAR_1];
    VAR_4 += VAR_2[11 * VAR_1];
    VAR_4 += VAR_2[12 * VAR_1];
    VAR_4 += VAR_2[13 * VAR_1];
    VAR_4 += VAR_2[14 * VAR_1];
    VAR_4 += VAR_2[15 * VAR_1];

    VAR_4 = (VAR_4 + 8) >> 4;
    VAR_5 = (v16u8) FUNC_1(VAR_4);

    FUNC_0(VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_3, VAR_1);
    VAR_3 += (8 * VAR_1);
    FUNC_0(VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_5, VAR_3, VAR_1);
}
