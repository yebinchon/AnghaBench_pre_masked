
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,struct pt_regs* const,unsigned long,int) ;
 scalar_t__ FUNC_1 (struct pt_regs* const) ;
 unsigned long FUNC_2 (struct pt_regs* const) ;
 int FUNC_3 (struct pt_regs* const) ;

void FUNC_4(struct pt_regs * const VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 if (FUNC_1(VAR_1)) {
  VAR_3 = !FUNC_3(VAR_1);
  VAR_4 = FUNC_2(VAR_1);
 } else {
  VAR_3 = 0;
  VAR_4 = VAR_0;
 }

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
