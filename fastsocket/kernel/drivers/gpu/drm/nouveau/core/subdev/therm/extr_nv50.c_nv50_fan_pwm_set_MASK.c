
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int FUNC_0 (struct nouveau_therm*,int,int) ;
 int FUNC_1 (struct nouveau_therm*,int*,int*,int*) ;

int
FUNC_2(struct nouveau_therm *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = FUNC_1(VAR_0, &VAR_1, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_0, 0x00e114 + (VAR_5 * 8), VAR_2);
 FUNC_0(VAR_0, 0x00e118 + (VAR_5 * 8), VAR_3 | 0x80000000);
 return 0;
}
