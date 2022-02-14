
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int FUNC_0 (struct nouveau_therm*,int,int,int) ;
 int FUNC_1 (struct nouveau_therm*,int*,int*,int*) ;

int
FUNC_2(struct nouveau_therm *VAR_0, int VAR_1, bool VAR_2)
{
 u32 VAR_3 = VAR_2 ? 0x00000001 : 0x00000000;
 int VAR_4, VAR_5, VAR_6 = FUNC_1(VAR_0, &VAR_1, &VAR_4, &VAR_5);
 if (VAR_6 == 0)
  FUNC_0(VAR_0, VAR_4, 0x00010001 << VAR_1, VAR_3 << VAR_1);
 return VAR_6;
}
