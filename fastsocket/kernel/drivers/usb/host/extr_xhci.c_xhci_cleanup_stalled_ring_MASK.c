
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {int stopped_stream; int stopped_td; } ;
struct xhci_hcd {int quirks; TYPE_1__** devs; } ;
struct xhci_dequeue_state {int dummy; } ;
struct usb_device {size_t slot_id; } ;
struct TYPE_2__ {struct xhci_virt_ep* eps; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,size_t,unsigned int,int ,int ,struct xhci_dequeue_state*) ;
 int FUNC_2 (struct xhci_hcd*,size_t,unsigned int,int ,struct xhci_dequeue_state*) ;
 int FUNC_3 (struct xhci_hcd*,size_t,unsigned int,struct xhci_dequeue_state*) ;

void FUNC_4(struct xhci_hcd *VAR_1,
  struct usb_device *VAR_2, unsigned int VAR_3)
{
 struct xhci_dequeue_state VAR_4;
 struct xhci_virt_ep *VAR_5;

 FUNC_0(VAR_1, "Cleaning up stalled endpoint ring\n");
 VAR_5 = &VAR_1->devs[VAR_2->slot_id]->eps[VAR_3];



 FUNC_1(VAR_1, VAR_2->slot_id,
   VAR_3, VAR_5->stopped_stream, VAR_5->stopped_td,
   &VAR_4);




 if (!(VAR_1->quirks & VAR_0)) {
  FUNC_0(VAR_1, "Queueing new dequeue state\n");
  FUNC_2(VAR_1, VAR_2->slot_id,
    VAR_3, VAR_5->stopped_stream, &VAR_4);
 } else {





  FUNC_0(VAR_1, "Setting up input context for "
    "configure endpoint command\n");
  FUNC_3(VAR_1, VAR_2->slot_id,
    VAR_3, &VAR_4);
 }
}
