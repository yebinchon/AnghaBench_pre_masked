
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * field; } ;
union xhci_trb {TYPE_4__ generic; } ;
typedef int u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_transfer_event {int transfer_len; int buffer; } ;
struct xhci_td {TYPE_3__* urb; union xhci_trb* last_trb; } ;
struct xhci_segment {int dummy; } ;
struct xhci_ring {struct xhci_segment* deq_seg; union xhci_trb* dequeue; } ;
struct xhci_hcd {int quirks; } ;
struct TYPE_7__ {int transfer_flags; scalar_t__ transfer_buffer_length; scalar_t__ actual_length; TYPE_2__* ep; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct xhci_hcd*,struct xhci_td*,union xhci_trb*,struct xhci_transfer_event*,struct xhci_virt_ep*,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment**,union xhci_trb**) ;
 int FUNC_9 (struct xhci_hcd*,char*,int ,scalar_t__,scalar_t__) ;
 struct xhci_ring* FUNC_10 (struct xhci_virt_ep*,int ) ;
 int FUNC_11 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static int FUNC_12(struct xhci_hcd *VAR_5, struct xhci_td *VAR_6,
 union xhci_trb *VAR_7, struct xhci_transfer_event *VAR_8,
 struct xhci_virt_ep *VAR_9, int *VAR_10)
{
 struct xhci_ring *VAR_11;
 union xhci_trb *VAR_12;
 struct xhci_segment *VAR_13;
 u32 VAR_14;

 VAR_11 = FUNC_10(VAR_9, FUNC_7(VAR_8->buffer));
 VAR_14 = FUNC_1(FUNC_6(VAR_8->transfer_len));

 switch (VAR_14) {
 case 128:

  if (VAR_7 != VAR_6->last_trb ||
      FUNC_0(FUNC_6(VAR_8->transfer_len)) != 0) {
   FUNC_11(VAR_5, "WARN Successful completion "
     "on short TX\n");
   if (VAR_6->urb->transfer_flags & VAR_3)
    *VAR_10 = -VAR_2;
   else
    *VAR_10 = 0;
   if ((VAR_5->quirks & VAR_4))
    VAR_14 = 129;
  } else {
   *VAR_10 = 0;
  }
  break;
 case 129:
  if (VAR_6->urb->transfer_flags & VAR_3)
   *VAR_10 = -VAR_2;
  else
   *VAR_10 = 0;
  break;
 default:

  break;
 }
 if (VAR_14 == 129)
  FUNC_9(VAR_5, "ep %#x - asked for %d bytes, "
    "%d bytes untransferred\n",
    VAR_6->urb->ep->desc.bEndpointAddress,
    VAR_6->urb->transfer_buffer_length,
    FUNC_0(FUNC_6(VAR_8->transfer_len)));

 if (VAR_7 == VAR_6->last_trb) {
  if (FUNC_0(FUNC_6(VAR_8->transfer_len)) != 0) {
   VAR_6->urb->actual_length =
    VAR_6->urb->transfer_buffer_length -
    FUNC_0(FUNC_6(VAR_8->transfer_len));
   if (VAR_6->urb->transfer_buffer_length <
     VAR_6->urb->actual_length) {
    FUNC_11(VAR_5, "HC gave bad length "
      "of %d bytes left\n",
       FUNC_0(FUNC_6(VAR_8->transfer_len)));
    VAR_6->urb->actual_length = 0;
    if (VAR_6->urb->transfer_flags & VAR_3)
     *VAR_10 = -VAR_2;
    else
     *VAR_10 = 0;
   }

   if (*VAR_10 == -VAR_1) {
    if (VAR_6->urb->transfer_flags & VAR_3)
     *VAR_10 = -VAR_2;
    else
     *VAR_10 = 0;
   }
  } else {
   VAR_6->urb->actual_length =
    VAR_6->urb->transfer_buffer_length;



   if (*VAR_10 == -VAR_2)
    *VAR_10 = 0;
  }
 } else {



  VAR_6->urb->actual_length = 0;
  for (VAR_12 = VAR_11->dequeue, VAR_13 = VAR_11->deq_seg;
    VAR_12 != VAR_7;
    FUNC_8(VAR_5, VAR_11, &VAR_13, &VAR_12)) {
   if (!FUNC_4(VAR_12->generic.field[3]) &&
       !FUNC_3(VAR_12->generic.field[3]))
    VAR_6->urb->actual_length +=
     FUNC_2(FUNC_6(VAR_12->generic.field[2]));
  }



  if (VAR_14 != VAR_0)
   VAR_6->urb->actual_length +=
    FUNC_2(FUNC_6(VAR_12->generic.field[2])) -
    FUNC_0(FUNC_6(VAR_8->transfer_len));
 }

 return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 0);
}
