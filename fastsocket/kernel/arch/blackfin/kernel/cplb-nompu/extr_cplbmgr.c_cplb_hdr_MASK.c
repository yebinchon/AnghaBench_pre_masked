
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;

int FUNC_3(int VAR_1, struct pt_regs *VAR_2)
{
 int VAR_3 = VAR_1 & 0x3f;
 unsigned int VAR_4 = FUNC_2();
 switch (VAR_3) {
 case 129:
  return FUNC_1(VAR_4);
 case 128:
  return FUNC_0(VAR_4);
 default:
  return VAR_0;
 }
}
