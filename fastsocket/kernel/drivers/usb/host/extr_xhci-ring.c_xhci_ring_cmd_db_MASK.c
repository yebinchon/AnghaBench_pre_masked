
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int cmd_ring_state; TYPE_1__* dba; } ;
struct TYPE_2__ {int * doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,int *) ;
 int FUNC_2 (struct xhci_hcd*,int ,int *) ;

void FUNC_3(struct xhci_hcd *VAR_2)
{
 if (!(VAR_2->cmd_ring_state & VAR_0))
  return;

 FUNC_0(VAR_2, "// Ding dong!\n");
 FUNC_2(VAR_2, VAR_1, &VAR_2->dba->doorbell[0]);

 FUNC_1(VAR_2, &VAR_2->dba->doorbell[0]);
}
