
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* machine_crash_shutdown ) (struct pt_regs*) ;} ;


 int FUNC_0 (struct pt_regs*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct pt_regs*) ;

void FUNC_2(struct pt_regs *VAR_1)
{
 if (VAR_0.machine_crash_shutdown)
  VAR_0.machine_crash_shutdown(VAR_1);
 else
  FUNC_0(VAR_1);
}
