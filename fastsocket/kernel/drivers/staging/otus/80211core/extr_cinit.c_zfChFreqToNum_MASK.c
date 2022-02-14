
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8_t FUNC_0(u16_t VAR_4, u8_t* VAR_5)
{
    u8_t VAR_6;
    u8_t VAR_7;


    if ( VAR_5 == ((void*)0) )
    {
        VAR_5 = &VAR_7;
    }

    *VAR_5 = VAR_0;

    if ( VAR_4 == VAR_3 )
    {
        VAR_6 = 14;
    }
    else if ( VAR_4 < 4000 )
    {
        VAR_6 = (VAR_4 - VAR_2) / 5 + 1;
    }
    else if ( VAR_4 < 5000 )
    {
        VAR_6 = (VAR_4 - 4000) / 5;
        *VAR_5 = VAR_1;
    }
    else
    {
        VAR_6 = (VAR_4 - 5000) / 5;
        *VAR_5 = VAR_1;
    }

    return VAR_6;
}
