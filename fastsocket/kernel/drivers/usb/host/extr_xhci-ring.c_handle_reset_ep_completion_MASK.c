
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
struct xhci_hcd {int quirks; TYPE_4__** devs; } ;
struct xhci_event_cmd {int status; } ;
struct TYPE_8__ {TYPE_3__* eps; TYPE_2__* in_ctx; } ;
struct TYPE_7__ {int ep_state; } ;
struct TYPE_6__ {int dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*,int,unsigned int) ;
 int FUNC_5 (struct xhci_hcd*,char*,...) ;
 int FUNC_6 (struct xhci_hcd*,int ,int,int) ;
 int FUNC_7 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_8(struct xhci_hcd *VAR_2,
  struct xhci_event_cmd *VAR_3,
  union xhci_trb *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_2(FUNC_3(VAR_4->generic.field[3]));
 VAR_6 = FUNC_1(FUNC_3(VAR_4->generic.field[3]));



 FUNC_5(VAR_2, "Ignoring reset ep completion code of %u\n",
   FUNC_0(FUNC_3(VAR_3->status)));





 if (VAR_2->quirks & VAR_1) {
  FUNC_5(VAR_2, "Queueing configure endpoint command\n");
  FUNC_6(VAR_2,
    VAR_2->devs[VAR_5]->in_ctx->dma, VAR_5,
    0);
  FUNC_7(VAR_2);
 } else {

  VAR_2->devs[VAR_5]->eps[VAR_6].ep_state &= ~VAR_0;
  FUNC_4(VAR_2, VAR_5, VAR_6);
 }
}
