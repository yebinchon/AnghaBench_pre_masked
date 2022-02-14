
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_transfer_event {int transfer_len; int buffer; } ;
struct xhci_td {TYPE_2__* urb; } ;
struct xhci_segment {int dummy; } ;
struct xhci_ring {struct xhci_segment* deq_seg; union xhci_trb* dequeue; } ;
struct xhci_hcd {int quirks; } ;
struct usb_iso_packet_descriptor {int status; int actual_length; int length; } ;
struct urb_priv {int td_cnt; } ;
struct TYPE_4__ {int transfer_flags; int actual_length; struct usb_iso_packet_descriptor* iso_frame_desc; struct urb_priv* hcpriv; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct xhci_hcd*,struct xhci_td*,union xhci_trb*,struct xhci_transfer_event*,struct xhci_virt_ep*,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment**,union xhci_trb**) ;
 struct xhci_ring* FUNC_9 (struct xhci_virt_ep*,int ) ;

__attribute__((used)) static int FUNC_10(struct xhci_hcd *VAR_6, struct xhci_td *VAR_7,
 union xhci_trb *VAR_8, struct xhci_transfer_event *VAR_9,
 struct xhci_virt_ep *VAR_10, int *VAR_11)
{
 struct xhci_ring *VAR_12;
 struct urb_priv *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 union xhci_trb *VAR_16;
 struct xhci_segment *VAR_17;
 struct usb_iso_packet_descriptor *VAR_18;
 u32 VAR_19;
 bool VAR_20 = 0;

 VAR_12 = FUNC_9(VAR_10, FUNC_7(VAR_9->buffer));
 VAR_19 = FUNC_1(FUNC_6(VAR_9->transfer_len));
 VAR_13 = VAR_7->urb->hcpriv;
 VAR_14 = VAR_13->td_cnt;
 VAR_18 = &VAR_7->urb->iso_frame_desc[VAR_14];


 switch (VAR_19) {
 case 129:
  if (FUNC_0(FUNC_6(VAR_9->transfer_len)) == 0) {
   VAR_18->status = 0;
   break;
  }
  if ((VAR_6->quirks & VAR_5))
   VAR_19 = 133;
 case 133:
  VAR_18->status = VAR_7->urb->transfer_flags & VAR_4 ?
    -VAR_3 : 0;
  break;
 case 135:
  VAR_18->status = -VAR_0;
  VAR_20 = 1;
  break;
 case 136:
 case 137:
  VAR_18->status = -VAR_1;
  VAR_20 = 1;
  break;
 case 134:
 case 132:
 case 128:
  VAR_18->status = -VAR_2;
  VAR_20 = 1;
  break;
 case 131:
 case 130:
  break;
 default:
  VAR_18->status = -1;
  break;
 }

 if (VAR_19 == 129 || VAR_20) {
  VAR_18->actual_length = VAR_18->length;
  VAR_7->urb->actual_length += VAR_18->length;
 } else {
  for (VAR_16 = VAR_12->dequeue,
       VAR_17 = VAR_12->deq_seg; VAR_16 != VAR_8;
       FUNC_8(VAR_6, VAR_12, &VAR_17, &VAR_16)) {
   if (!FUNC_4(VAR_16->generic.field[3]) &&
       !FUNC_3(VAR_16->generic.field[3]))
    VAR_15 += FUNC_2(FUNC_6(VAR_16->generic.field[2]));
  }
  VAR_15 += FUNC_2(FUNC_6(VAR_16->generic.field[2])) -
   FUNC_0(FUNC_6(VAR_9->transfer_len));

  if (VAR_19 != 130) {
   VAR_18->actual_length = VAR_15;
   VAR_7->urb->actual_length += VAR_15;
  }
 }

 return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, 0);
}
