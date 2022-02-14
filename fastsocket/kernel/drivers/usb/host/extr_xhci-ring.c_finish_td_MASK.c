
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
typedef scalar_t__ u32 ;
struct xhci_virt_ep {int stopped_stream; union xhci_trb* stopped_trb; struct xhci_td* stopped_td; } ;
struct xhci_virt_device {int out_ctx; } ;
struct xhci_transfer_event {int transfer_len; int buffer; int flags; } ;
struct xhci_td {scalar_t__ last_trb; int cancelled_td_list; int td_list; struct urb* urb; } ;
struct xhci_ring {scalar_t__ dequeue; int stream_id; } ;
struct xhci_hcd {int quirks; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct urb_priv {scalar_t__ td_cnt; scalar_t__ length; } ;
struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int pipe; struct urb_priv* hcpriv; } ;
struct TYPE_3__ {scalar_t__ bandwidth_isoc_reqs; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_ring*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct xhci_hcd*,unsigned int,int,int ,struct xhci_td*,union xhci_trb*) ;
 struct xhci_ring* FUNC_11 (struct xhci_virt_ep*,int ) ;
 struct xhci_ep_ctx* FUNC_12 (struct xhci_hcd*,int ,int) ;
 scalar_t__ FUNC_13 (struct xhci_hcd*,struct xhci_ep_ctx*,scalar_t__) ;
 TYPE_2__* FUNC_14 (struct xhci_hcd*) ;
 int FUNC_15 (struct xhci_hcd*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct xhci_hcd *VAR_7, struct xhci_td *VAR_8,
 union xhci_trb *VAR_9, struct xhci_transfer_event *VAR_10,
 struct xhci_virt_ep *VAR_11, int *VAR_12, bool VAR_13)
{
 struct xhci_virt_device *VAR_14;
 struct xhci_ring *VAR_15;
 unsigned int VAR_16;
 int VAR_17;
 struct urb *VAR_18 = ((void*)0);
 struct xhci_ep_ctx *VAR_19;
 int VAR_20 = 0;
 struct urb_priv *VAR_21;
 u32 VAR_22;

 VAR_16 = FUNC_2(FUNC_4(VAR_10->flags));
 VAR_14 = VAR_7->devs[VAR_16];
 VAR_17 = FUNC_1(FUNC_4(VAR_10->flags)) - 1;
 VAR_15 = FUNC_11(VAR_11, FUNC_5(VAR_10->buffer));
 VAR_19 = FUNC_12(VAR_7, VAR_14->out_ctx, VAR_17);
 VAR_22 = FUNC_0(FUNC_4(VAR_10->transfer_len));

 if (VAR_13)
  goto td_cleanup;

 if (VAR_22 == VAR_2 ||
   VAR_22 == VAR_1) {




  VAR_11->stopped_td = VAR_8;
  VAR_11->stopped_trb = VAR_9;
  return 0;
 } else {
  if (VAR_22 == VAR_0) {







   VAR_11->stopped_td = VAR_8;
   VAR_11->stopped_trb = VAR_9;
   VAR_11->stopped_stream = VAR_15->stream_id;
  } else if (FUNC_13(VAR_7,
     VAR_19, VAR_22)) {





   FUNC_10(VAR_7,
     VAR_16, VAR_17, VAR_15->stream_id,
     VAR_8, VAR_9);
  } else {

   while (VAR_15->dequeue != VAR_8->last_trb)
    FUNC_3(VAR_7, VAR_15);
   FUNC_3(VAR_7, VAR_15);
  }

td_cleanup:

  VAR_18 = VAR_8->urb;
  VAR_21 = VAR_18->hcpriv;







  if (VAR_18->actual_length > VAR_18->transfer_buffer_length) {
   FUNC_15(VAR_7, "URB transfer length is wrong, "
     "xHC issue? req. len = %u, "
     "act. len = %u\n",
     VAR_18->transfer_buffer_length,
     VAR_18->actual_length);
   VAR_18->actual_length = 0;
   if (VAR_8->urb->transfer_flags & VAR_5)
    *VAR_12 = -VAR_3;
   else
    *VAR_12 = 0;
  }
  FUNC_6(&VAR_8->td_list);

  if (!FUNC_7(&VAR_8->cancelled_td_list))
   FUNC_6(&VAR_8->cancelled_td_list);

  VAR_21->td_cnt++;

  if (VAR_21->td_cnt == VAR_21->length) {
   VAR_20 = 1;
   if (FUNC_9(VAR_18->pipe) == VAR_4) {
    FUNC_14(VAR_7)->self.bandwidth_isoc_reqs--;
    if (FUNC_14(VAR_7)->self.bandwidth_isoc_reqs
     == 0) {
     if (VAR_7->quirks & VAR_6)
      FUNC_8();
    }
   }
  }
 }

 return VAR_20;
}
