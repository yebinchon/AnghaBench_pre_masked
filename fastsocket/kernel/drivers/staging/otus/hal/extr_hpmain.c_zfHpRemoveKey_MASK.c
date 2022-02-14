
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int*,int,int ,int *) ;

u16_t FUNC_1(zdev_t* VAR_2, u16_t VAR_3)
{
    u32_t VAR_4[(VAR_0/4)];
    u16_t VAR_5 = 0;

    VAR_4[0] = 0x00002904;
    VAR_4[1] = (u32_t)VAR_3;

    VAR_5 = FUNC_0(VAR_2, VAR_4, 8, VAR_1, ((void*)0));
    return VAR_5;
}
