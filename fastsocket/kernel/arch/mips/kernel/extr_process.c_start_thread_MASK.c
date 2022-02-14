
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long cp0_status; unsigned long cp0_epc; unsigned long* regs; } ;
struct TYPE_2__ {int addr_limit; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct pt_regs * VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11;


 VAR_11 = VAR_8->cp0_status & ~(VAR_2|VAR_3|VAR_4|VAR_0);



 VAR_11 |= VAR_1;
 VAR_8->cp0_status = VAR_11;
 FUNC_2();
 FUNC_1();
 if (VAR_7)
  FUNC_0();
 VAR_8->cp0_epc = VAR_9;
 VAR_8->regs[29] = VAR_10;
 FUNC_3()->addr_limit = VAR_6;
}
