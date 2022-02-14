
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tpc; int tstate; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 if (!VAR_2) {
  if (!VAR_1->tpc || (VAR_1->tpc & 0x3))
   return 0;
  if (VAR_1->tstate & VAR_0) {
   VAR_2 = *(unsigned int *) VAR_1->tpc;
  } else {
   VAR_2 = FUNC_0(VAR_1->tpc);
  }
 }
 return VAR_2;
}
