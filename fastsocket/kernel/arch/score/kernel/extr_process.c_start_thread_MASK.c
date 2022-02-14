
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long cp0_psr; unsigned long cp0_epc; unsigned long* regs; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

void FUNC_0(struct pt_regs *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;


 VAR_5 = VAR_2->cp0_psr & ~(VAR_0);
 VAR_5 |= VAR_1;
 VAR_2->cp0_psr = VAR_5;
 VAR_2->cp0_epc = VAR_3;
 VAR_2->regs[0] = VAR_4;
}
