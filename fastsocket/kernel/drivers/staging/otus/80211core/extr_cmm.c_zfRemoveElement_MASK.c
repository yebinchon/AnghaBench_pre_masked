
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef scalar_t__ u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,scalar_t__) ;

u16_t FUNC_1(zdev_t* VAR_3, u8_t* VAR_4, u16_t VAR_5, u8_t VAR_6)
{
    u16_t VAR_7 = 0;
    u16_t VAR_8;
    u8_t VAR_9 = 0;
    u8_t VAR_10[4] = {0x00, 0x50, 0xf2, 0x01};
    u8_t VAR_11[3] = {0x00,0x90,0x4C};
    u8_t VAR_12 = 0;

    if ((VAR_6 == VAR_1) ||
        (VAR_6 == VAR_0))
    {
        VAR_9 = VAR_6;
        VAR_6 = VAR_2;
        VAR_12 = 1;
    }

    while (VAR_7 < VAR_5)
    {
        VAR_8 = *(VAR_4+VAR_7+1);

        if (*(VAR_4+VAR_7) == VAR_6)
        {
            if ( VAR_6 == VAR_2 )
            {
                if ( (VAR_12 == 0)
                     && (*(VAR_4+VAR_7+2) == VAR_10[0])
                     && (*(VAR_4+VAR_7+3) == VAR_10[1])
                     && (*(VAR_4+VAR_7+4) == VAR_10[2])
                     && (*(VAR_4+VAR_7+5) == VAR_10[3]) )
                {
                    FUNC_0(VAR_4+VAR_7, VAR_4+VAR_7+VAR_8+2, VAR_5-VAR_7-VAR_8-2);
                    return (VAR_5-VAR_8-2);
                }

                if ( (VAR_12 == 1)
                    && (*(VAR_4+VAR_7+2) == VAR_11[0])
                    && (*(VAR_4+VAR_7+3) == VAR_11[1])
                    && (*(VAR_4+VAR_7+4) == VAR_11[2])
                    && (*(VAR_4+VAR_7+5) == VAR_9) )
                {
                    FUNC_0(VAR_4+VAR_7, VAR_4+VAR_7+VAR_8+2, VAR_5-VAR_7-VAR_8-2);
                    return (VAR_5-VAR_8-2);
                }
            }
            else
            {
                FUNC_0(VAR_4+VAR_7, VAR_4+VAR_7+VAR_8+2, VAR_5-VAR_7-VAR_8-2);
                return (VAR_5-VAR_8-2);
            }
        }

        VAR_7 += (VAR_8+2);
    }

    return VAR_5;
}
