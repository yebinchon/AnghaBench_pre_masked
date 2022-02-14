
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_cause; unsigned long cp0_epc; } ;
struct notifier_block {int dummy; } ;
struct die_args {struct pt_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int ,int ,struct pt_regs*) ;
 int FUNC_4 (int ,struct pt_regs*) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_5, unsigned long VAR_6,
       void *VAR_7)
{
 struct die_args *VAR_8 = (struct die_args *)VAR_7;
 struct pt_regs *VAR_9 = VAR_8->regs;
 int VAR_10 = (VAR_9->cp0_cause & 0x7c) >> 2;


 if (FUNC_7(VAR_9))
  return VAR_0;

 if (FUNC_1(&VAR_3) != -1)
  FUNC_4(FUNC_6(), VAR_9);

 if (FUNC_3(VAR_10, FUNC_2(VAR_10), 0, VAR_9))
  return VAR_0;

 if (FUNC_1(&VAR_4))
  if ((VAR_10 == 9) && (VAR_9->cp0_epc == (unsigned long)VAR_2))
   VAR_9->cp0_epc += 4;


 FUNC_5();
 FUNC_0();

 return VAR_1;
}
