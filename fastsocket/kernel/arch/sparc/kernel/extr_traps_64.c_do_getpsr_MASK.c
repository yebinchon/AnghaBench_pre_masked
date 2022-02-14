
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tpc; int tnpc; int tstate; int * u_regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct pt_regs *VAR_2)
{
 VAR_2->u_regs[VAR_1] = FUNC_1(VAR_2->tstate);
 VAR_2->tpc = VAR_2->tnpc;
 VAR_2->tnpc += 4;
 if (FUNC_0(VAR_0)) {
  VAR_2->tpc &= 0xffffffff;
  VAR_2->tnpc &= 0xffffffff;
 }
}
