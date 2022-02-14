
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_virt_ep {scalar_t__ stopped_stream; int * stopped_trb; int * stopped_td; } ;
struct xhci_hcd {int lock; TYPE_1__** devs; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; scalar_t__ hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {size_t slot_id; } ;
struct TYPE_4__ {struct xhci_virt_ep* eps; } ;


 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct xhci_hcd*,struct usb_device*,unsigned int) ;
 int FUNC_6 (struct xhci_hcd*,char*,...) ;
 unsigned int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct xhci_hcd*,size_t,unsigned int) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*,char*) ;

void FUNC_11(struct usb_hcd *VAR_0,
  struct usb_host_endpoint *VAR_1)
{
 struct xhci_hcd *VAR_2;
 struct usb_device *VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 struct xhci_virt_ep *VAR_7;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct usb_device *) VAR_1->hcpriv;



 if (!VAR_1->hcpriv)
  return;
 VAR_4 = FUNC_7(&VAR_1->desc);
 VAR_7 = &VAR_2->devs[VAR_3->slot_id]->eps[VAR_4];
 if (!VAR_7->stopped_td) {
  FUNC_6(VAR_2, "Endpoint 0x%x not halted, refusing to reset.\n",
    VAR_1->desc.bEndpointAddress);
  return;
 }
 if (FUNC_4(&VAR_1->desc)) {
  FUNC_6(VAR_2, "Control endpoint stall already handled.\n");
  return;
 }

 FUNC_6(VAR_2, "Queueing reset endpoint command\n");
 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_6 = FUNC_8(VAR_2, VAR_3->slot_id, VAR_4);





 if (!VAR_6) {
  FUNC_5(VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_7->stopped_td);
  FUNC_9(VAR_2);
 }
 VAR_7->stopped_td = ((void*)0);
 VAR_7->stopped_trb = ((void*)0);
 VAR_7->stopped_stream = 0;
 FUNC_3(&VAR_2->lock, VAR_5);

 if (VAR_6)
  FUNC_10(VAR_2, "FIXME allocate a new ring segment\n");
}
