
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_virt_ep {unsigned int stopped_stream; union xhci_trb* stopped_trb; struct xhci_td* stopped_td; int ep_state; } ;
struct xhci_td {TYPE_2__* urb; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct xhci_virt_ep* eps; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_1 (struct xhci_hcd*,unsigned int,unsigned int) ;
 int FUNC_2 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4,
  struct xhci_td *VAR_5, union xhci_trb *VAR_6)
{
 struct xhci_virt_ep *VAR_7 = &VAR_1->devs[VAR_2]->eps[VAR_3];
 VAR_7->ep_state |= VAR_0;
 VAR_7->stopped_td = VAR_5;
 VAR_7->stopped_trb = VAR_6;
 VAR_7->stopped_stream = VAR_4;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_5->urb->dev, VAR_3);

 VAR_7->stopped_td = ((void*)0);
 VAR_7->stopped_trb = ((void*)0);
 VAR_7->stopped_stream = 0;

 FUNC_2(VAR_1);
}
