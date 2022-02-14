
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {int next_uframe; int periodic_size; int last_periodic_enable; int broken_periodic; TYPE_1__* regs; int periodic_sched; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int frame_index; int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int *) ;
 TYPE_2__* FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,int,int *) ;
 int FUNC_3 (struct ehci_hcd*,int *,int ,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7 (struct ehci_hcd *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (VAR_3->periodic_sched++)
  return 0;




 VAR_5 = FUNC_3(VAR_3, &VAR_3->regs->status,
          VAR_2, 0, 9 * 125);
 if (VAR_5) {
  FUNC_6(FUNC_1(VAR_3));
  return VAR_5;
 }

 VAR_4 = FUNC_0(VAR_3, &VAR_3->regs->command) | VAR_0;
 FUNC_2(VAR_3, VAR_4, &VAR_3->regs->command);

 FUNC_1(VAR_3)->state = VAR_1;


 VAR_3->next_uframe = FUNC_0(VAR_3, &VAR_3->regs->frame_index)
  % (VAR_3->periodic_size << 3);
 if (FUNC_5(VAR_3->broken_periodic))
  VAR_3->last_periodic_enable = FUNC_4();
 return 0;
}
