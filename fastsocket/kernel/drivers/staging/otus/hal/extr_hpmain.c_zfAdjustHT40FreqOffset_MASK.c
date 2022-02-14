
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;



u32_t FUNC_0(zdev_t* VAR_0, u32_t VAR_1, u8_t VAR_2, u8_t VAR_3)
{
    u32_t VAR_4 = VAR_1;

 if (VAR_2 == 1)
 {
        if (VAR_3 == 1)
        {
            VAR_4 += 10;
        }
        else
        {
            VAR_4 -= 10;
        }
 }
 return VAR_4;
}
