
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tstate; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int) ;
 unsigned long FUNC_2 (unsigned int) ;

unsigned long FUNC_3(struct pt_regs *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = (VAR_2 >> 14) & 0x1f;
 unsigned int VAR_5 = VAR_2 & 0x1f;
 int VAR_6 = (VAR_1->tstate & VAR_0) != 0;

 if (VAR_2 & 0x2000) {
  FUNC_1(VAR_4, 0, VAR_3, VAR_6);
  return (FUNC_0(VAR_4, VAR_1) + FUNC_2(VAR_2));
 } else {
  FUNC_1(VAR_4, VAR_5, VAR_3, VAR_6);
  return (FUNC_0(VAR_4, VAR_1) + FUNC_0(VAR_5, VAR_1));
 }
}
