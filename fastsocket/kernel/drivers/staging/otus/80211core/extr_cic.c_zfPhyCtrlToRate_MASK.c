
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u32_t ;


 scalar_t__* VAR_0 ;

u8_t FUNC_0(u32_t VAR_1)
{
    u32_t VAR_2, VAR_3, VAR_4;
    u8_t VAR_5 = 0;

    VAR_2 = VAR_1 & 0x3;
    VAR_3 = (VAR_1>>18) & 0x3f;
    VAR_4 = (VAR_1>>31) & 0x1;

    if ((VAR_2 == 0) && (VAR_3 <=3))
    {
        VAR_5 = (u8_t)VAR_3;
    }
    else if ((VAR_2 == 1) && (VAR_3 >= 0x8) && (VAR_3 <= 0xf))
    {
        VAR_5 = VAR_0[VAR_3-8];
    }
    else if ((VAR_2 == 2) && (VAR_3 <= 15))
    {
        VAR_5 = (u8_t)VAR_3 + 12;
        if(VAR_4) {
            if (VAR_3 != 7)
            {
                VAR_5 = (u8_t)VAR_3 + 12 + 2;
            }
            else
            {
                VAR_5 = (u8_t)30;
            }
        }
    }

    return VAR_5;
}
