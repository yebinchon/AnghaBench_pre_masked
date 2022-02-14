
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t* VAR_0, u8_t* VAR_1)
{
    u32_t VAR_2;
    u16_t *VAR_3 = (u16_t *)VAR_1;

    VAR_2 = VAR_3[0] + (((u32_t)VAR_3[1]) << 16);
    FUNC_0(VAR_0, 0x1c3618, VAR_2);

    VAR_2 = (u32_t)VAR_3[2];
    FUNC_0(VAR_0, 0x1c361C, VAR_2);
    FUNC_1(VAR_0);
    return 0;
}
