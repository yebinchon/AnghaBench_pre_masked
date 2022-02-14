
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsWlanDev {int dummy; } ;


 int FUNC_0 (int) ;

u16_t FUNC_1(zdev_t *VAR_0)
{
 u32_t VAR_1;
 VAR_1 = (sizeof(struct zsWlanDev));
 FUNC_0((VAR_1>>16) == 0);
 return (u16_t)VAR_1;
}
