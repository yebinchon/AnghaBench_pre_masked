
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_therm*,int) ;

int
FUNC_1(struct nouveau_therm *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1, 0x00e728) & 0x0000ffff;
 u32 VAR_3 = FUNC_0(VAR_1, 0x00e720);
 if (VAR_3 & 0x00000001)
  return VAR_2 * 60;
 return -VAR_0;
}
