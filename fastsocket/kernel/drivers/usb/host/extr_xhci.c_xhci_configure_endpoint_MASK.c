
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
typedef int u32 ;
struct completion {int dummy; } ;
struct xhci_virt_device {int cmd_status; struct completion cmd_completion; int cmd_list; struct xhci_container_ctx* in_ctx; } ;
struct xhci_hcd {int quirks; int lock; TYPE_5__* cmd_ring; int num_active_eps; struct xhci_virt_device** devs; } ;
struct xhci_container_ctx {int dma; } ;
struct xhci_command {int cmd_list; TYPE_2__* command_trb; int status; struct completion* completion; struct xhci_container_ctx* in_ctx; } ;
struct usb_device {size_t slot_id; } ;
struct TYPE_10__ {union xhci_trb* dequeue; TYPE_4__* enq_seg; TYPE_2__* enqueue; } ;
struct TYPE_9__ {TYPE_3__* next; } ;
struct TYPE_8__ {TYPE_2__* trbs; } ;
struct TYPE_6__ {int control; } ;
struct TYPE_7__ {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct completion*,int ) ;
 int FUNC_7 (struct xhci_hcd*,struct xhci_command*,union xhci_trb*) ;
 int FUNC_8 (struct xhci_hcd*,struct usb_device*,int *) ;
 int FUNC_9 (struct xhci_hcd*,char*) ;
 int FUNC_10 (struct xhci_hcd*,struct usb_device*,int *) ;
 int FUNC_11 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_12 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_13 (struct xhci_hcd*,int ,size_t,int) ;
 int FUNC_14 (struct xhci_hcd*,int ,size_t,int) ;
 scalar_t__ FUNC_15 (struct xhci_hcd*,struct xhci_virt_device*,struct xhci_container_ctx*) ;
 scalar_t__ FUNC_16 (struct xhci_hcd*,struct xhci_container_ctx*) ;
 int FUNC_17 (struct xhci_hcd*) ;
 int FUNC_18 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static int FUNC_19(struct xhci_hcd *VAR_5,
  struct usb_device *VAR_6,
  struct xhci_command *VAR_7,
  bool VAR_8, bool VAR_9)
{
 int VAR_10;
 int VAR_11;
 unsigned long VAR_12;
 struct xhci_container_ctx *VAR_13;
 struct completion *VAR_14;
 u32 *VAR_15;
 struct xhci_virt_device *VAR_16;
 union xhci_trb *VAR_17;

 FUNC_4(&VAR_5->lock, VAR_12);
 VAR_16 = VAR_5->devs[VAR_6->slot_id];

 if (VAR_7)
  VAR_13 = VAR_7->in_ctx;
 else
  VAR_13 = VAR_16->in_ctx;

 if ((VAR_5->quirks & VAR_3) &&
   FUNC_16(VAR_5, VAR_13)) {
  FUNC_5(&VAR_5->lock, VAR_12);
  FUNC_18(VAR_5, "Not enough host resources, "
    "active endpoint contexts = %u\n",
    VAR_5->num_active_eps);
  return -VAR_0;
 }
 if ((VAR_5->quirks & VAR_4) &&
   FUNC_15(VAR_5, VAR_16, VAR_13)) {
  if ((VAR_5->quirks & VAR_3))
   FUNC_12(VAR_5, VAR_13);
  FUNC_5(&VAR_5->lock, VAR_12);
  FUNC_18(VAR_5, "Not enough bandwidth\n");
  return -VAR_0;
 }

 if (VAR_7) {
  VAR_14 = VAR_7->completion;
  VAR_15 = &VAR_7->status;
  VAR_7->command_trb = VAR_5->cmd_ring->enqueue;




  if (FUNC_0(VAR_7->command_trb->link.control))
   VAR_7->command_trb =
    VAR_5->cmd_ring->enq_seg->next->trbs;

  FUNC_2(&VAR_7->cmd_list, &VAR_16->cmd_list);
 } else {
  VAR_14 = &VAR_16->cmd_completion;
  VAR_15 = &VAR_16->cmd_status;
 }
 FUNC_1(VAR_14);

 VAR_17 = VAR_5->cmd_ring->dequeue;
 if (!VAR_8)
  VAR_10 = FUNC_13(VAR_5, VAR_13->dma,
    VAR_6->slot_id, VAR_9);
 else
  VAR_10 = FUNC_14(VAR_5, VAR_13->dma,
    VAR_6->slot_id, VAR_9);
 if (VAR_10 < 0) {
  if (VAR_7)
   FUNC_3(&VAR_7->cmd_list);
  if ((VAR_5->quirks & VAR_3))
   FUNC_12(VAR_5, VAR_13);
  FUNC_5(&VAR_5->lock, VAR_12);
  FUNC_9(VAR_5, "FIXME allocate a new ring segment\n");
  return -VAR_0;
 }
 FUNC_17(VAR_5);
 FUNC_5(&VAR_5->lock, VAR_12);


 VAR_11 = FUNC_6(
   VAR_14,
   VAR_2);
 if (VAR_11 <= 0) {
  FUNC_18(VAR_5, "%s while waiting for %s command\n",
    VAR_11 == 0 ? "Timeout" : "Signal",
    VAR_8 == 0 ?
     "configure endpoint" :
     "evaluate context");

  VAR_10 = FUNC_7(VAR_5, VAR_7, VAR_17);
  if (VAR_10 < 0)
   return VAR_10;
  return -VAR_1;
 }

 if (!VAR_8)
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_15);
 else
  VAR_10 = FUNC_10(VAR_5, VAR_6, VAR_15);

 if ((VAR_5->quirks & VAR_3)) {
  FUNC_4(&VAR_5->lock, VAR_12);



  if (VAR_10)
   FUNC_12(VAR_5, VAR_13);
  else
   FUNC_11(VAR_5, VAR_13);
  FUNC_5(&VAR_5->lock, VAR_12);
 }
 return VAR_10;
}
