
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wa_xfer_ctl {int dummy; } ;
struct wa_xfer_bi {int dummy; } ;
struct wa_xfer {int is_inbound; int is_dma; int seg_size; int segs; TYPE_4__* wa; TYPE_2__* ep; struct urb* urb; } ;
struct TYPE_10__ {int bmAttribute; int wMaxPacketSize; int wBlocks; } ;
struct wa_rpipe {TYPE_5__ descr; } ;
struct urb {int pipe; int transfer_flags; int transfer_buffer_length; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum wa_xfer_type { ____Placeholder_wa_xfer_type } wa_xfer_type ;
struct TYPE_9__ {TYPE_3__* wa_descr; TYPE_1__* usb_iface; } ;
struct TYPE_8__ {int bRPipeBlockSize; } ;
struct TYPE_7__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct wa_xfer *VAR_7,
         enum wa_xfer_type *VAR_8)
{
 ssize_t VAR_9;
 struct device *VAR_10 = &VAR_7->wa->usb_iface->dev;
 size_t VAR_11;
 struct urb *VAR_12 = VAR_7->urb;
 struct wa_rpipe *VAR_13 = VAR_7->ep->hcpriv;

 switch (VAR_13->descr.bmAttribute & 0x3) {
 case 130:
  *VAR_8 = VAR_6;
  VAR_9 = sizeof(struct wa_xfer_ctl);
  break;
 case 129:
 case 131:
  *VAR_8 = VAR_5;
  VAR_9 = sizeof(struct wa_xfer_bi);
  break;
 case 128:
  FUNC_1(VAR_10, "FIXME: ISOC not implemented\n");
  VAR_9 = -VAR_1;
  goto error;
 default:

  FUNC_0();
  VAR_9 = -VAR_0;
 };
 VAR_7->is_inbound = VAR_12->pipe & VAR_3 ? 1 : 0;
 VAR_7->is_dma = VAR_12->transfer_flags & VAR_2 ? 1 : 0;
 VAR_7->seg_size = FUNC_2(VAR_13->descr.wBlocks)
  * 1 << (VAR_7->wa->wa_descr->bRPipeBlockSize - 1);



 VAR_11 = FUNC_2(VAR_13->descr.wMaxPacketSize);
 if (VAR_7->seg_size < VAR_11) {
  FUNC_1(VAR_10, "HW BUG? seg_size %zu smaller than maxpktsize "
   "%zu\n", VAR_7->seg_size, VAR_11);
  VAR_9 = -VAR_0;
  goto error;
 }
 VAR_7->seg_size = (VAR_7->seg_size / VAR_11) * VAR_11;
 VAR_7->segs = (VAR_12->transfer_buffer_length + VAR_7->seg_size - 1)
  / VAR_7->seg_size;
 if (VAR_7->segs >= VAR_4) {
  FUNC_1(VAR_10, "BUG? ops, number of segments %d bigger than %d\n",
   (int)(VAR_12->transfer_buffer_length / VAR_7->seg_size),
   VAR_4);
  VAR_9 = -VAR_0;
  goto error;
 }
 if (VAR_7->segs == 0 && *VAR_8 == VAR_6)
  VAR_7->segs = 1;
error:
 return VAR_9;
}
