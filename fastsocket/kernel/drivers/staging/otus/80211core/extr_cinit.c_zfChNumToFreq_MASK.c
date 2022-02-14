
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;

u16_t FUNC_0(zdev_t* VAR_2, u8_t VAR_3, u8_t VAR_4)
{
    u16_t VAR_5 = 0xffff;

    if ( VAR_4 == 0 )
    {
        if (VAR_3 > 14)
        {
            VAR_4 = 2;
        }
        else
        {
            VAR_4 = 1;
        }
    }

    if ( VAR_4 == 2 )
    {
        if ( (VAR_3 >= 184)&&(VAR_3 <= 196) )
        {
            VAR_5 = 4000 + VAR_3*5;
        }
        else
        {
            VAR_5 = 5000 + VAR_3*5;
        }
    }
    else
    {
        if ( VAR_3 == 14 )
        {
            VAR_5 = VAR_1;
        }
        else
        {
            VAR_5 = VAR_0 + (VAR_3-1)*5;
        }
    }

    return VAR_5;
}
