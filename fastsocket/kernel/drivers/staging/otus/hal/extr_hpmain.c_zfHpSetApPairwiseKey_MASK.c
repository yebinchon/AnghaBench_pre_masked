
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int,scalar_t__,int*,int*) ;

u32_t FUNC_1(zdev_t* VAR_2, u16_t* VAR_3, u8_t VAR_4,
        u32_t* VAR_5, u32_t* VAR_6, u16_t VAR_7)
{
    if ((VAR_7!=0) && (VAR_7<64))
    {
        FUNC_0(VAR_2, (VAR_7-1), 0, VAR_4, VAR_3, VAR_5);
                if (VAR_4 == VAR_1



           )
            FUNC_0(VAR_2, (VAR_7-1), 1, VAR_4, VAR_3, VAR_6);
        return 0;
    }
    return 1;
}
