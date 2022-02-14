
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static uint32_t FUNC_3(uint32_t VAR_0, uint32_t VAR_1)
{
    uint8_t VAR_2[4], VAR_3[8];
    FUNC_1(VAR_3, VAR_0);
    FUNC_1(VAR_3 + 4, VAR_1);
    VAR_2[0] = FUNC_2(0x01, VAR_3[0]) ^ FUNC_2(0xa4, VAR_3[1]) ^ FUNC_2(0x55, VAR_3[2]) ^ FUNC_2(0x87, VAR_3[3]) ^ FUNC_2(0x5a, VAR_3[4]) ^ FUNC_2(0x58, VAR_3[5]) ^ FUNC_2(0xdb, VAR_3[6]) ^ FUNC_2(0x9e, VAR_3[7]);
    VAR_2[1] = FUNC_2(0xa4, VAR_3[0]) ^ FUNC_2(0x56, VAR_3[1]) ^ FUNC_2(0x82, VAR_3[2]) ^ FUNC_2(0xf3, VAR_3[3]) ^ FUNC_2(0x1e, VAR_3[4]) ^ FUNC_2(0xc6, VAR_3[5]) ^ FUNC_2(0x68, VAR_3[6]) ^ FUNC_2(0xe5, VAR_3[7]);
    VAR_2[2] = FUNC_2(0x02, VAR_3[0]) ^ FUNC_2(0xa1, VAR_3[1]) ^ FUNC_2(0xfc, VAR_3[2]) ^ FUNC_2(0xc1, VAR_3[3]) ^ FUNC_2(0x47, VAR_3[4]) ^ FUNC_2(0xae, VAR_3[5]) ^ FUNC_2(0x3d, VAR_3[6]) ^ FUNC_2(0x19, VAR_3[7]);
    VAR_2[3] = FUNC_2(0xa4, VAR_3[0]) ^ FUNC_2(0x55, VAR_3[1]) ^ FUNC_2(0x87, VAR_3[2]) ^ FUNC_2(0x5a, VAR_3[3]) ^ FUNC_2(0x58, VAR_3[4]) ^ FUNC_2(0xdb, VAR_3[5]) ^ FUNC_2(0x9e, VAR_3[6]) ^ FUNC_2(0x03, VAR_3[7]);
    return FUNC_0(VAR_2);
}
