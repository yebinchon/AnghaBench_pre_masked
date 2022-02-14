
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

u16_t FUNC_2(zdev_t* VAR_10, u8_t VAR_11)
{
    u16_t VAR_12 = VAR_5;

    if (VAR_11 == VAR_3)
    {
        VAR_12 = FUNC_0(VAR_10, (u32_t*)VAR_6,
                (u32_t)VAR_9, VAR_4);
    }
    else if (VAR_11 == VAR_2)
    {
        VAR_12 = FUNC_0(VAR_10, (u32_t*)VAR_7,
                (u32_t)VAR_8, VAR_1);
    }
    else
    {
        FUNC_1("Unknown firmware type = ", VAR_11);
        VAR_12 = VAR_0;
    }

    return VAR_12;
}
