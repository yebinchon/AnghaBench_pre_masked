
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_6__ {scalar_t__ decr_int; } ;
struct TYPE_5__ {TYPE_2__ fields; } ;
struct TYPE_8__ {TYPE_1__ int_dword; } ;
struct TYPE_7__ {unsigned int (* get_irq ) () ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 struct pt_regs* FUNC_6 (struct pt_regs*) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (struct pt_regs*) ;

void FUNC_9(struct pt_regs *VAR_5)
{
 struct pt_regs *VAR_6 = FUNC_6(VAR_5);
 unsigned int VAR_7;

 FUNC_4();

 FUNC_0();

 VAR_7 = VAR_3.get_irq();

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  FUNC_3(VAR_7);
 else if (VAR_7 != VAR_2)

  VAR_4++;

 FUNC_5();
 FUNC_6(VAR_6);
}
