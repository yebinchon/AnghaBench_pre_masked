
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int* VAR_0 ;
 unsigned long FUNC_1 (struct pt_regs*,int) ;

unsigned long FUNC_2(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 < FUNC_0(VAR_0))
  return *(unsigned long *)((char *)VAR_1 + VAR_0[VAR_2]);
 else {




  VAR_2 -= FUNC_0(VAR_0);
  return FUNC_1(VAR_1, 1 + VAR_2);
 }
}
