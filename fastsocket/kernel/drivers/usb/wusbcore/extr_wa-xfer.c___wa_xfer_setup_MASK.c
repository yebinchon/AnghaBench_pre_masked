
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wa_xfer_hdr {size_t dwTransferLength; size_t bTransferSegment; } ;
struct wa_xfer {size_t segs; size_t seg_size; TYPE_3__** seg; TYPE_2__* wa; } ;
struct urb {size_t transfer_buffer_length; } ;
struct device {int dummy; } ;
typedef enum wa_xfer_type { ____Placeholder_wa_xfer_type } wa_xfer_type ;
struct TYPE_6__ {int status; struct wa_xfer_hdr xfer_hdr; } ;
struct TYPE_5__ {TYPE_1__* usb_iface; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct wa_xfer*,struct wa_xfer_hdr*,int,size_t) ;
 int FUNC_1 (struct wa_xfer*,size_t) ;
 int FUNC_2 (struct wa_xfer*,int*) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct device*,char*,struct wa_xfer*,size_t,int) ;
 int FUNC_5 (struct wa_xfer_hdr*,struct wa_xfer_hdr*,size_t) ;
 int FUNC_6 (struct wa_xfer*) ;

__attribute__((used)) static int FUNC_7(struct wa_xfer *VAR_1, struct urb *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = &VAR_1->wa->usb_iface->dev;
 enum wa_xfer_type VAR_5 = 0;
 size_t VAR_6, VAR_7, VAR_8;
 struct wa_xfer_hdr *VAR_9, *VAR_10;

 VAR_3 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_3 < 0)
  goto error_setup_sizes;
 VAR_6 = VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_6);
 if (VAR_3 < 0) {
  FUNC_4(VAR_4, "xfer %p: Failed to allocate %d segments: %d\n",
   VAR_1, VAR_1->segs, VAR_3);
  goto error_setup_segs;
 }

 VAR_9 = &VAR_1->seg[0]->xfer_hdr;
 FUNC_6(VAR_1);
 FUNC_0(VAR_1, VAR_9, VAR_5, VAR_6);


 VAR_10 = VAR_9;
 VAR_8 = VAR_2->transfer_buffer_length;
 VAR_9->dwTransferLength = VAR_8 > VAR_1->seg_size ?
  VAR_1->seg_size : VAR_8;
 VAR_8 -= VAR_1->seg_size;
 for (VAR_7 = 1; VAR_7 < VAR_1->segs; VAR_7++) {
  VAR_10 = &VAR_1->seg[VAR_7]->xfer_hdr;
  FUNC_5(VAR_10, VAR_9, VAR_6);
  VAR_10->bTransferSegment = VAR_7;
  VAR_10->dwTransferLength = VAR_8 > VAR_1->seg_size ?
   FUNC_3(VAR_1->seg_size)
   : FUNC_3(VAR_8);
  VAR_1->seg[VAR_7]->status = VAR_0;
  VAR_8 -= VAR_1->seg_size;
 }
 VAR_10->bTransferSegment |= 0x80;
 VAR_3 = 0;
error_setup_segs:
error_setup_sizes:
 return VAR_3;
}
