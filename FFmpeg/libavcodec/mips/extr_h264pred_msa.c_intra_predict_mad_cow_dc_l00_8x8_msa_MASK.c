
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,int,int,int*,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int32_t VAR_1)
{
    uint32_t VAR_2;
    uint64_t VAR_3, VAR_4;

    VAR_2 = VAR_0[0 * VAR_1 - 1];
    VAR_2 += VAR_0[1 * VAR_1 - 1];
    VAR_2 += VAR_0[2 * VAR_1 - 1];
    VAR_2 += VAR_0[3 * VAR_1 - 1];
    VAR_2 = (VAR_2 + 2) >> 2;
    VAR_3 = VAR_2 * 0x0101010101010101;
    VAR_4 = 0x8080808080808080;

    FUNC_0(VAR_3, VAR_3, VAR_3, VAR_3, VAR_0, VAR_1);
    VAR_0 += (4 * VAR_1);
    FUNC_0(VAR_4, VAR_4, VAR_4, VAR_4, VAR_0, VAR_1);
}
