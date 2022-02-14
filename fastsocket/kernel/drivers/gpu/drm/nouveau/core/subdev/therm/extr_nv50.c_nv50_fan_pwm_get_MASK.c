
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_therm*,int) ;
 int FUNC_1 (struct nouveau_therm*,int*,int*,int*) ;

int
FUNC_2(struct nouveau_therm *VAR_1, int VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = FUNC_1(VAR_1, &VAR_2, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (FUNC_0(VAR_1, VAR_5) & (1 << VAR_2)) {
  *VAR_3 = FUNC_0(VAR_1, 0x00e114 + (VAR_6 * 8));
  *VAR_4 = FUNC_0(VAR_1, 0x00e118 + (VAR_6 * 8));
  return 0;
 }

 return -VAR_0;
}
