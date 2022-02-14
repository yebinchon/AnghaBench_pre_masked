
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {int trap_no; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char const*,struct pt_regs*,long,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct pt_regs*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(const char * VAR_6, struct pt_regs * VAR_7, long VAR_8)
{
 static int VAR_9;

 FUNC_8();
 FUNC_6();
 FUNC_3();
 FUNC_2();
 FUNC_13(&VAR_4);
 FUNC_1(1);
 FUNC_11("%s: %04lx [#%d] ", VAR_6, VAR_8 & 0xffff, ++VAR_9);
 FUNC_11("\n");
 FUNC_7(VAR_0, VAR_6, VAR_7, VAR_8, VAR_3->thread.trap_no, VAR_1);
 FUNC_12(VAR_7);
 FUNC_1(0);
 FUNC_0(VAR_2);
 FUNC_14(&VAR_4);
 if (FUNC_5())
  FUNC_10("Fatal exception in interrupt");
 if (VAR_5)
  FUNC_10("Fatal exception: panic_on_oops");
 FUNC_9();
 FUNC_4(VAR_1);
}
