
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_3, u16_t* VAR_4, u16_t VAR_5)
{
    if (VAR_5 == 0)
    {
        FUNC_0(VAR_3, VAR_2,
                (((u32_t)VAR_4[1])<<16) | VAR_4[0]);
        FUNC_0(VAR_3, VAR_1, VAR_4[2]);
    }
    else if (VAR_5 <= 7)
    {
        FUNC_0(VAR_3, VAR_0+((VAR_5-1)*8),
                VAR_4[0] + ((u32_t)VAR_4[1]<<16));
        FUNC_0(VAR_3, VAR_0+((VAR_5-1)*8)+4,
                VAR_4[2]);
    }
    FUNC_1(VAR_3);
}
