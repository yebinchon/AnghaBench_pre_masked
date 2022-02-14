
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

int FUNC_1(uint32_t VAR_1)
{
    uint8_t VAR_2;
    uint8_t VAR_3;
    uint16_t VAR_4;


    VAR_2 = FUNC_0(VAR_1);
    VAR_1 <<= (31 - VAR_2);


    VAR_3 = (VAR_1 & 0x7c000000) >> 26;
    VAR_4 = (VAR_1 & 0x03fff800) >> 11;

    VAR_1 = VAR_0[VAR_3];
    VAR_1 += (VAR_4 * (VAR_0[VAR_3+1] - VAR_0[VAR_3])) >> 15;

    return (VAR_2 << 15) + VAR_1;
}
