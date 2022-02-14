
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {int broken_periodic; int next_uframe; TYPE_1__* regs; int last_periodic_enable; scalar_t__ periodic_sched; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ehci_hcd*,int *) ;
 int FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,int,int *) ;
 int FUNC_3 (struct ehci_hcd*,int *,int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10 (struct ehci_hcd *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (--VAR_2->periodic_sched)
  return 0;

 if (FUNC_8(VAR_2->broken_periodic)) {

  ktime_t VAR_5 = FUNC_4(VAR_2->last_periodic_enable, 1000);
  ktime_t VAR_6 = FUNC_5();
  s64 VAR_7 = FUNC_6(VAR_5, VAR_6);

  if (FUNC_8(VAR_7 > 0))
   FUNC_7(VAR_7);
 }




 VAR_4 = FUNC_3(VAR_2, &VAR_2->regs->status,
          VAR_1, VAR_1, 9 * 125);
 if (VAR_4) {
  FUNC_9(FUNC_1(VAR_2));
  return VAR_4;
 }

 VAR_3 = FUNC_0(VAR_2, &VAR_2->regs->command) & ~VAR_0;
 FUNC_2(VAR_2, VAR_3, &VAR_2->regs->command);


 VAR_2->next_uframe = -1;
 return 0;
}
