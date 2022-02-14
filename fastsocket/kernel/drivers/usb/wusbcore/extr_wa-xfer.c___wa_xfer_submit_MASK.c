
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wahc {int xfer_list_lock; int xfer_list; TYPE_1__* usb_iface; } ;
struct wa_xfer {unsigned int segs; int segs_submitted; struct wa_seg** seg; int list_node; TYPE_2__* ep; struct wahc* wa; } ;
struct wa_seg {int list_node; int status; } ;
struct TYPE_6__ {int wRequests; } ;
struct wa_rpipe {int seg_lock; int seg_list; int segs_available; TYPE_3__ descr; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct wa_rpipe*,struct wa_xfer*,struct wa_seg*) ;
 int FUNC_2 (struct wa_xfer*) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,struct wa_xfer*,unsigned int,...) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct wa_xfer *VAR_1)
{
 int VAR_2;
 struct wahc *VAR_3 = VAR_1->wa;
 struct device *VAR_4 = &VAR_3->usb_iface->dev;
 unsigned VAR_5;
 struct wa_seg *VAR_6;
 unsigned long VAR_7;
 struct wa_rpipe *VAR_8 = VAR_1->ep->hcpriv;
 size_t VAR_9 = FUNC_5(VAR_8->descr.wRequests);
 u8 VAR_10;
 u8 VAR_11;

 FUNC_8(&VAR_3->xfer_list_lock, VAR_7);
 FUNC_6(&VAR_1->list_node, &VAR_3->xfer_list);
 FUNC_9(&VAR_3->xfer_list_lock, VAR_7);

 FUNC_0(FUNC_3(&VAR_8->segs_available) > VAR_9);
 VAR_2 = 0;
 FUNC_8(&VAR_8->seg_lock, VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_1->segs; VAR_5++) {
  VAR_10 = FUNC_3(&VAR_8->segs_available);
  VAR_11 = FUNC_7(&VAR_8->seg_list);
  VAR_6 = VAR_1->seg[VAR_5];
  FUNC_4(VAR_4, "xfer %p#%u: available %u empty %u (%s)\n",
   VAR_1, VAR_5, VAR_10, VAR_11,
   VAR_10 == 0 || !VAR_11 ? "delayed" : "submitted");
  if (VAR_10 == 0 || !VAR_11) {
   FUNC_4(VAR_4, "xfer %p#%u: delayed\n", VAR_1, VAR_5);
   VAR_6->status = VAR_0;
   FUNC_6(&VAR_6->list_node, &VAR_8->seg_list);
  } else {
   VAR_2 = FUNC_1(VAR_8, VAR_1, VAR_6);
   if (VAR_2 < 0) {
    FUNC_2(VAR_1);
    goto error_seg_submit;
   }
  }
  VAR_1->segs_submitted++;
 }
error_seg_submit:
 FUNC_9(&VAR_8->seg_lock, VAR_7);
 return VAR_2;
}
