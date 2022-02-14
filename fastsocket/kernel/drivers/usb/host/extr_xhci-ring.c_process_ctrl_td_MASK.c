
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
typedef int u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_virt_device {int out_ctx; } ;
struct xhci_transfer_event {int transfer_len; int buffer; int flags; } ;
struct xhci_td {TYPE_1__* urb; union xhci_trb* last_trb; } ;
struct xhci_ring {union xhci_trb* dequeue; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct TYPE_2__ {int transfer_flags; scalar_t__ actual_length; void* transfer_buffer_length; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct xhci_hcd*,struct xhci_td*,union xhci_trb*,struct xhci_transfer_event*,struct xhci_virt_ep*,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xhci_hcd*,unsigned int,int,int ,struct xhci_td*,union xhci_trb*) ;
 int FUNC_8 (struct xhci_hcd*,char*,...) ;
 struct xhci_ring* FUNC_9 (struct xhci_virt_ep*,int ) ;
 struct xhci_ep_ctx* FUNC_10 (struct xhci_hcd*,int ,int) ;
 int FUNC_11 (struct xhci_hcd*,struct xhci_ep_ctx*,int) ;
 int FUNC_12 (struct xhci_hcd*,char*) ;

__attribute__((used)) static int FUNC_13(struct xhci_hcd *VAR_4, struct xhci_td *VAR_5,
 union xhci_trb *VAR_6, struct xhci_transfer_event *VAR_7,
 struct xhci_virt_ep *VAR_8, int *VAR_9)
{
 struct xhci_virt_device *VAR_10;
 struct xhci_ring *VAR_11;
 unsigned int VAR_12;
 int VAR_13;
 struct xhci_ep_ctx *VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_3(FUNC_5(VAR_7->flags));
 VAR_10 = VAR_4->devs[VAR_12];
 VAR_13 = FUNC_2(FUNC_5(VAR_7->flags)) - 1;
 VAR_11 = FUNC_9(VAR_8, FUNC_6(VAR_7->buffer));
 VAR_14 = FUNC_10(VAR_4, VAR_10->out_ctx, VAR_13);
 VAR_15 = FUNC_1(FUNC_5(VAR_7->transfer_len));

 switch (VAR_15) {
 case 128:
  if (VAR_6 == VAR_11->dequeue) {
   FUNC_12(VAR_4, "WARN: Success on ctrl setup TRB "
     "without IOC set??\n");
   *VAR_9 = -VAR_2;
  } else if (VAR_6 != VAR_5->last_trb) {
   FUNC_12(VAR_4, "WARN: Success on ctrl data TRB "
     "without IOC set??\n");
   *VAR_9 = -VAR_2;
  } else {
   *VAR_9 = 0;
  }
  break;
 case 132:
  if (VAR_5->urb->transfer_flags & VAR_3)
   *VAR_9 = -VAR_1;
  else
   *VAR_9 = 0;
  break;
 case 129:
 case 130:
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 0);
 default:
  if (!FUNC_11(VAR_4,
     VAR_14, VAR_15))
   break;
  FUNC_8(VAR_4, "TRB error code %u, "
    "halted endpoint index = %u\n",
    VAR_15, VAR_13);

 case 131:

  if (VAR_6 != VAR_11->dequeue &&
    VAR_6 != VAR_5->last_trb)
   VAR_5->urb->actual_length =
    VAR_5->urb->transfer_buffer_length -
    FUNC_0(FUNC_5(VAR_7->transfer_len));
  else
   VAR_5->urb->actual_length = 0;

  FUNC_7(VAR_4,
   VAR_12, VAR_13, 0, VAR_5, VAR_6);
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 1);
 }




 if (VAR_6 != VAR_11->dequeue) {

  if (VAR_6 == VAR_5->last_trb) {
   if (VAR_5->urb->actual_length != 0) {


    if ((*VAR_9 == -VAR_0 || *VAR_9 == 0) &&
      (VAR_5->urb->transfer_flags
       & VAR_3))


     *VAR_9 = -VAR_1;
   } else {
    VAR_5->urb->actual_length =
     VAR_5->urb->transfer_buffer_length;
   }
  } else {

   VAR_5->urb->actual_length =
    VAR_5->urb->transfer_buffer_length -
    FUNC_0(FUNC_5(VAR_7->transfer_len));
   FUNC_8(VAR_4, "Waiting for status "
     "stage event\n");
   return 0;
  }
 }

 return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 0);
}
