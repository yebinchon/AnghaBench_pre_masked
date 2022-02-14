
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;

int FUNC_4(int VAR_0, struct pt_regs *VAR_1)
{
 int VAR_2 = VAR_0 & 0x3f;
 unsigned int VAR_3 = FUNC_3();
 switch (VAR_2) {
 case 0x23:
  return FUNC_1(VAR_3);
 case 0x2C:
  return FUNC_2(VAR_3);
 case 0x26:
  return FUNC_0(VAR_3);
 default:
  return 1;
 }
}
