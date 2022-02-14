
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct pt_regs*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_1,
 unsigned long VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = VAR_2 & VAR_0;
 unsigned long VAR_5 = VAR_2 + VAR_3 - 1;
 unsigned long VAR_6 = VAR_5 & VAR_0;

 if (FUNC_1(VAR_4 == VAR_6)) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  return;
 }
 FUNC_0(VAR_1, VAR_2, VAR_6 - VAR_2);
 FUNC_0(VAR_1, VAR_6, VAR_5 - VAR_6);
}
