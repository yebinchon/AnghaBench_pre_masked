
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; int psr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int*) ;
 unsigned long FUNC_1 (struct pt_regs*,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(struct pt_regs *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2)
  return VAR_1->pc;

 if (VAR_1->psr & VAR_0) {
  VAR_3 = *(unsigned int *) VAR_1->pc;
 } else {
  FUNC_0(VAR_3, (unsigned int *) VAR_1->pc);
 }

 return FUNC_1(VAR_1, VAR_3);
}
