
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_therm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_therm*,char*,int) ;
 int FUNC_1 (struct nouveau_therm*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_therm *VAR_1, int VAR_2, bool VAR_3)
{
 u32 VAR_4 = VAR_3 ? 0x80000000 : 0x0000000;
 if (VAR_2 == 2) FUNC_1(VAR_1, 0x0010f0, 0x80000000, VAR_4);
 else if (VAR_2 == 9) FUNC_1(VAR_1, 0x0015f4, 0x80000000, VAR_4);
 else {
  FUNC_0(VAR_1, "unknown pwm ctrl for gpio %d\n", VAR_2);
  return -VAR_0;
 }
 return 0;
}
