
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

uint8_t FUNC_1(void)
{
    uint8_t VAR_3, VAR_4, VAR_5;
    VAR_3 = (FUNC_0(VAR_1) & 0xF000) >> 15;
    VAR_4 = (FUNC_0(VAR_2) & 0x100000) >> 20;
    VAR_5 = (FUNC_0(VAR_0) & 0x80000000) >> 31;
    uint32_t VAR_6 = (VAR_5 << 2) | (VAR_4 << 1) | VAR_3;
    uint8_t VAR_7 = 0;
    switch (VAR_6) {
    case 0:
        VAR_7 = 0;
        break;
    case 1:
        VAR_7 = 1;
        break;
    case 3:
        VAR_7 = 2;
        break;
    case 7:
        VAR_7 = 3;
        break;
    default:
        VAR_7 = 0;
        break;
    }
    return VAR_7;
}
