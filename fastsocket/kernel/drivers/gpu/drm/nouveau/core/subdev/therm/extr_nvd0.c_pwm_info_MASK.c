
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_therm*,char*,int,int) ;
 int FUNC_1 (struct nouveau_therm*,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_therm *VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1, 0x00d610 + (VAR_2 * 0x04));
 switch (VAR_3 & 0x000000c0) {
 case 0x00000000:
 case 0x00000040:
  switch (VAR_3 & 0x0000001f) {
  case 0x19: return 1;
  case 0x1c: return 0;
  default:
   break;
  }
 default:
  break;
 }

 FUNC_0(VAR_1, "GPIO %d unknown PWM: 0x%08x\n", VAR_2, VAR_3);
 return -VAR_0;
}
