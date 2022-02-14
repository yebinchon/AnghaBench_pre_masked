
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_hcd {int quirks; int lock; scalar_t__ slot_id; int num_active_eps; int addr_dev; TYPE_1__* cmd_ring; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {scalar_t__ slot_id; } ;
struct TYPE_2__ {union xhci_trb* dequeue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct xhci_hcd*,scalar_t__,struct usb_device*,int ) ;
 int FUNC_5 (struct xhci_hcd*,int *,union xhci_trb*) ;
 int FUNC_6 (struct xhci_hcd*,char*) ;
 int FUNC_7 (struct xhci_hcd*,char*) ;
 int FUNC_8 (struct xhci_hcd*,int ,scalar_t__) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*) ;
 int FUNC_11 (struct xhci_hcd*,char*,...) ;

int FUNC_12(struct usb_hcd *VAR_5, struct usb_device *VAR_6)
{
 struct xhci_hcd *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;
 union xhci_trb *VAR_11;

 FUNC_1(&VAR_7->lock, VAR_8);
 VAR_11 = VAR_7->cmd_ring->dequeue;
 VAR_10 = FUNC_8(VAR_7, VAR_2, 0);
 if (VAR_10) {
  FUNC_2(&VAR_7->lock, VAR_8);
  FUNC_6(VAR_7, "FIXME: allocate a command ring segment\n");
  return 0;
 }
 FUNC_10(VAR_7);
 FUNC_2(&VAR_7->lock, VAR_8);


 VAR_9 = FUNC_3(&VAR_7->addr_dev,
   VAR_3);
 if (VAR_9 <= 0) {
  FUNC_11(VAR_7, "%s while waiting for a slot\n",
    VAR_9 == 0 ? "Timeout" : "Signal");

  return FUNC_5(VAR_7, ((void*)0), VAR_11);
 }

 if (!VAR_7->slot_id) {
  FUNC_7(VAR_7, "Error while assigning device slot ID\n");
  return 0;
 }

 if ((VAR_7->quirks & VAR_4)) {
  FUNC_1(&VAR_7->lock, VAR_8);
  VAR_10 = FUNC_9(VAR_7);
  if (VAR_10) {
   FUNC_2(&VAR_7->lock, VAR_8);
   FUNC_11(VAR_7, "Not enough host resources, "
     "active endpoint contexts = %u\n",
     VAR_7->num_active_eps);
   goto disable_slot;
  }
  FUNC_2(&VAR_7->lock, VAR_8);
 }




 if (!FUNC_4(VAR_7, VAR_7->slot_id, VAR_6, VAR_0)) {
  FUNC_11(VAR_7, "Could not allocate xHCI USB device data structures\n");
  goto disable_slot;
 }
 VAR_6->slot_id = VAR_7->slot_id;


 return 1;

disable_slot:

 FUNC_1(&VAR_7->lock, VAR_8);
 if (!FUNC_8(VAR_7, VAR_1, VAR_6->slot_id))
  FUNC_10(VAR_7);
 FUNC_2(&VAR_7->lock, VAR_8);
 return 0;
}
