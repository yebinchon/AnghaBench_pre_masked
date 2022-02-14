
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_therm*,char*,int) ;
 int FUNC_1 (struct nouveau_therm*,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_therm *VAR_2, int VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 if (VAR_3 == 2) {
  u32 VAR_6 = FUNC_1(VAR_2, 0x0010f0);
  if (VAR_6 & 0x80000000) {
   *VAR_5 = (VAR_6 & 0x7fff0000) >> 16;
   *VAR_4 = (VAR_6 & 0x00007fff);
   return 0;
  }
 } else
 if (VAR_3 == 9) {
  u32 VAR_7 = FUNC_1(VAR_2, 0x0015f4);
  if (VAR_7 & 0x80000000) {
   *VAR_4 = FUNC_1(VAR_2, 0x0015f8);
   *VAR_5 = (VAR_7 & 0x7fffffff);
   return 0;
  }
 } else {
  FUNC_0(VAR_2, "unknown pwm ctrl for gpio %d\n", VAR_3);
  return -VAR_1;
 }

 return -VAR_0;
}
