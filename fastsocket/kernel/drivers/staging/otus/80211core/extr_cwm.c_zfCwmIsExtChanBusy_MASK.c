
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u16_t FUNC_0(u32_t VAR_3, u32_t VAR_4)
{
    u32_t VAR_5;
    u32_t VAR_6, VAR_7;

    VAR_6 = 1280000;

    if (VAR_6 > VAR_3) {
        VAR_7 = VAR_6 - VAR_3;
    }
    else
    {
        VAR_7 = 0;
    }







    if (VAR_7) {
        VAR_5 = (VAR_4 * 100) / VAR_7;
    } else {
        VAR_5 = 0;
    }
    if (VAR_5 > VAR_0) {
        return VAR_2;
    }

    return VAR_1;
}
