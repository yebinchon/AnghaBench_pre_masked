
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int * regs; } ;
struct TYPE_5__ {char const* comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char const*,struct pt_regs*,long,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char const*,long,int) ;
 int FUNC_14 (struct pt_regs*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 long FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct pt_regs*) ;

void FUNC_21(const char * VAR_7, struct pt_regs * VAR_8, long VAR_9)
{
 static int VAR_10;

 FUNC_9();

 FUNC_15(&VAR_5);
 FUNC_2();
 FUNC_1(1);

 FUNC_13("%s: %04lx [#%d]\n", VAR_7, VAR_9 & 0xffff, ++VAR_10);
 FUNC_17();
 FUNC_12();
 FUNC_14(VAR_8);

 FUNC_13("Process: %s (pid: %d, stack limit = %p)\n", VAR_4->comm,
   FUNC_18(VAR_4), FUNC_19(VAR_4) + 1);

 if (!FUNC_20(VAR_8) || FUNC_6())
  FUNC_5("Stack: ", VAR_8->regs[15], VAR_3 +
    (unsigned long)FUNC_19(VAR_4));

 FUNC_8(VAR_0, VAR_7, VAR_8, VAR_9, 255, VAR_1);

 FUNC_1(0);
 FUNC_0(VAR_2);
 FUNC_16(&VAR_5);
 FUNC_10();

 if (FUNC_7(VAR_4))
  FUNC_3(VAR_8);

 if (FUNC_6())
  FUNC_11("Fatal exception in interrupt");

 if (VAR_6)
  FUNC_11("Fatal exception");

 FUNC_4(VAR_1);
}
