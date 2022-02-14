
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;





 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;

void FUNC_0(char *VAR_3, uint16_t VAR_4, uint16_t VAR_5, uint32_t VAR_6)
{
    uint16_t VAR_7;


    VAR_3[0] = VAR_5 >> 8;
    VAR_3[1] = VAR_5 & 0xFF;
    switch (VAR_6) {
    case 130:
        VAR_3[2] = VAR_0;
        break;
    case 129:
        VAR_3[2] = VAR_1;
        break;
    case 128:
        VAR_3[2] = VAR_2;
        break;
    }

    for (VAR_7 = 3; VAR_7 < VAR_4; VAR_7++) {
        VAR_3[VAR_7] = VAR_7;
    }
}
