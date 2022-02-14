
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef scalar_t__ u16_t ;


 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t *VAR_0, u8_t VAR_1, u8_t VAR_2, u8_t VAR_3, u8_t VAR_4)
{
 u8_t VAR_5 = 0;
 u8_t VAR_6 = 0;
 u8_t VAR_7 = 15;
 u8_t VAR_8 = 15;
 u8_t VAR_9 = 30;
 u8_t VAR_10 = 16;
 u8_t VAR_11 = 32;

    FUNC_0(VAR_0);

    if( VAR_1 == 0 )
        return (VAR_4 + VAR_5);
    else
    {
        if( VAR_2 == 0 && VAR_3 == 0 )
        {
            if( VAR_4 < 18 )
    return VAR_4 + VAR_6;
   else
    return (VAR_4 + VAR_7);
        }
        else if( VAR_2 == 1 && VAR_3 == 0 )
        {
            if( VAR_4 < 23 )
                return (VAR_4 + VAR_8);
            else
                return (VAR_4 + VAR_9);
        }
        else
        {
            if( VAR_4 < 16 )
                return (VAR_4 + VAR_10);
            else
                return (VAR_4 + VAR_11);
        }
    }
}
