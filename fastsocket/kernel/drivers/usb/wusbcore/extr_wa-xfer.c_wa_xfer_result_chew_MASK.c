
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct wahc {int dti_edc; TYPE_4__* buf_in_urb; struct wa_xfer_result* xfer_result; TYPE_1__* usb_iface; } ;
struct wa_xfer_result {int bTransferSegment; size_t bTransferStatus; int dwTransferLength; } ;
struct wa_xfer {size_t segs; size_t seg_size; int lock; TYPE_3__* urb; int segs_done; scalar_t__ is_dma; scalar_t__ is_inbound; TYPE_2__* ep; struct wa_seg** seg; } ;
struct wa_seg {scalar_t__ status; int result; int index; } ;
struct wa_rpipe {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct wa_seg* context; void* transfer_buffer_length; int transfer_flags; scalar_t__ transfer_buffer; scalar_t__ transfer_dma; int status; } ;
struct TYPE_7__ {scalar_t__ transfer_buffer; scalar_t__ transfer_dma; } ;
struct TYPE_6__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct wa_xfer*) ;
 size_t FUNC_2 (struct wa_xfer*) ;
 int FUNC_3 (struct device*,char*,struct wa_xfer*,size_t,size_t,scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 void* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 unsigned int FUNC_8 (struct wa_rpipe*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (struct wahc*) ;
 int FUNC_14 (struct wahc*,TYPE_3__*) ;
 int FUNC_15 (struct wa_xfer*) ;
 int FUNC_16 (struct wa_rpipe*) ;
 int FUNC_17 (size_t) ;

__attribute__((used)) static void FUNC_18(struct wahc *VAR_11, struct wa_xfer *VAR_12)
{
 int VAR_13;
 struct device *VAR_14 = &VAR_11->usb_iface->dev;
 unsigned long VAR_15;
 u8 VAR_16;
 struct wa_seg *VAR_17;
 struct wa_rpipe *VAR_18;
 struct wa_xfer_result *VAR_19 = VAR_11->xfer_result;
 u8 VAR_20 = 0;
 u8 VAR_21;
 unsigned VAR_22 = 0;

 FUNC_9(&VAR_12->lock, VAR_15);
 VAR_16 = VAR_19->bTransferSegment & 0x7f;
 if (FUNC_11(VAR_16 >= VAR_12->segs))
  goto error_bad_seg;
 VAR_17 = VAR_12->seg[VAR_16];
 VAR_18 = VAR_12->ep->hcpriv;
 VAR_21 = VAR_19->bTransferStatus;
 FUNC_3(VAR_14, "xfer %p#%u: bTransferStatus 0x%02x (seg %u)\n",
  VAR_12, VAR_16, VAR_21, VAR_17->status);
 if (VAR_17->status == VAR_5
     || VAR_17->status == VAR_8)
  goto segment_aborted;
 if (VAR_17->status == VAR_10)
  VAR_17->status = VAR_9;
 if (VAR_17->status != VAR_9) {
  if (FUNC_7())
   FUNC_4(VAR_14, "xfer %p#%u: Bad segment state %u\n",
    VAR_12, VAR_16, VAR_17->status);
  VAR_17->status = VAR_9;
 }
 if (VAR_21 & 0x80) {
  VAR_17->result = FUNC_17(VAR_21);
  FUNC_4(VAR_14, "DTI: xfer %p#%u failed (0x%02x)\n",
   VAR_12, VAR_17->index, VAR_21);
  goto error_complete;
 }

 if (VAR_21 & 0x40)
  VAR_21 = 0;
 if (VAR_12->is_inbound) {
  VAR_17->status = VAR_7;
  FUNC_0(VAR_11->buf_in_urb->status == -VAR_2);
  if (VAR_12->is_dma) {
   VAR_11->buf_in_urb->transfer_dma =
    VAR_12->urb->transfer_dma
    + VAR_16 * VAR_12->seg_size;
   VAR_11->buf_in_urb->transfer_flags
    |= VAR_4;
  } else {
   VAR_11->buf_in_urb->transfer_buffer =
    VAR_12->urb->transfer_buffer
    + VAR_16 * VAR_12->seg_size;
   VAR_11->buf_in_urb->transfer_flags
    &= ~VAR_4;
  }
  VAR_11->buf_in_urb->transfer_buffer_length =
   FUNC_6(VAR_19->dwTransferLength);
  VAR_11->buf_in_urb->context = VAR_17;
  VAR_13 = FUNC_12(VAR_11->buf_in_urb, VAR_3);
  if (VAR_13 < 0)
   goto error_submit_buf_in;
 } else {

  VAR_17->status = VAR_6;
  VAR_17->result = FUNC_6(VAR_19->dwTransferLength);
  VAR_12->segs_done++;
  VAR_22 = FUNC_8(VAR_18);
  VAR_20 = FUNC_2(VAR_12);
 }
 FUNC_10(&VAR_12->lock, VAR_15);
 if (VAR_20)
  FUNC_15(VAR_12);
 if (VAR_22)
  FUNC_16(VAR_18);
 return;

error_submit_buf_in:
 if (FUNC_5(&VAR_11->dti_edc, VAR_1, VAR_0)) {
  FUNC_4(VAR_14, "DTI: URB max acceptable errors "
   "exceeded, resetting device\n");
  FUNC_13(VAR_11);
 }
 if (FUNC_7())
  FUNC_4(VAR_14, "xfer %p#%u: can't submit DTI data phase: %d\n",
   VAR_12, VAR_16, VAR_13);
 VAR_17->result = VAR_13;
error_complete:
 VAR_17->status = VAR_8;
 VAR_12->segs_done++;
 VAR_22 = FUNC_8(VAR_18);
 FUNC_1(VAR_12);
 VAR_20 = FUNC_2(VAR_12);
 FUNC_10(&VAR_12->lock, VAR_15);
 if (VAR_20)
  FUNC_15(VAR_12);
 if (VAR_22)
  FUNC_16(VAR_18);
 return;

error_bad_seg:
 FUNC_10(&VAR_12->lock, VAR_15);
 FUNC_14(VAR_11, VAR_12->urb);
 if (FUNC_7())
  FUNC_4(VAR_14, "xfer %p#%u: bad segment\n", VAR_12, VAR_16);
 if (FUNC_5(&VAR_11->dti_edc, VAR_1, VAR_0)) {
  FUNC_4(VAR_14, "DTI: URB max acceptable errors "
   "exceeded, resetting device\n");
  FUNC_13(VAR_11);
 }
 return;

segment_aborted:

 FUNC_10(&VAR_12->lock, VAR_15);
}
