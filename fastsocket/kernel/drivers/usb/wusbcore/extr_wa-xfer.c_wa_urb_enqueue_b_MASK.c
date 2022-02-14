
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int mutex; } ;
struct wusb_dev {int dummy; } ;
struct wahc {struct wusbhc* wusb; } ;
struct wa_xfer {int result; int lock; TYPE_1__* ep; struct wusb_dev* wusb_dev; int gfp; struct wahc* wa; struct urb* urb; } ;
struct urb {int status; int * dev; } ;
struct TYPE_2__ {int hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct wa_xfer*) ;
 int FUNC_1 (struct wa_xfer*,struct urb*) ;
 int FUNC_2 (struct wa_xfer*) ;
 struct wusb_dev* FUNC_3 (struct wusbhc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wahc*,TYPE_1__*,struct urb*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct wa_xfer*) ;
 int FUNC_11 (struct wa_xfer*) ;
 int FUNC_12 (struct wusb_dev*) ;

__attribute__((used)) static void FUNC_13(struct wa_xfer *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 struct urb *VAR_5 = VAR_2->urb;
 struct wahc *VAR_6 = VAR_2->wa;
 struct wusbhc *VAR_7 = VAR_6->wusb;
 struct wusb_dev *VAR_8;
 unsigned VAR_9;

 VAR_3 = FUNC_6(VAR_6, VAR_2->ep, VAR_5, VAR_2->gfp);
 if (VAR_3 < 0)
  goto error_rpipe_get;
 VAR_3 = -VAR_1;

 FUNC_4(&VAR_7->mutex);
 if (VAR_5->dev == ((void*)0)) {
  FUNC_5(&VAR_7->mutex);
  goto error_dev_gone;
 }
 VAR_8 = FUNC_3(VAR_7, VAR_5->dev);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(&VAR_7->mutex);
  goto error_dev_gone;
 }
 FUNC_5(&VAR_7->mutex);

 FUNC_8(&VAR_2->lock, VAR_4);
 VAR_2->wusb_dev = VAR_8;
 VAR_3 = VAR_5->status;
 if (VAR_5->status != -VAR_0)
  goto error_dequeued;

 VAR_3 = FUNC_1(VAR_2, VAR_5);
 if (VAR_3 < 0)
  goto error_xfer_setup;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  goto error_xfer_submit;
 FUNC_9(&VAR_2->lock, VAR_4);
 return;





error_xfer_setup:
error_dequeued:
 FUNC_9(&VAR_2->lock, VAR_4);

 if (VAR_8)
  FUNC_12(VAR_8);
error_dev_gone:
 FUNC_7(VAR_2->ep->hcpriv);
error_rpipe_get:
 VAR_2->result = VAR_3;
 FUNC_11(VAR_2);
 return;

error_xfer_submit:
 VAR_9 = FUNC_0(VAR_2);
 VAR_2->result = VAR_3;
 FUNC_9(&VAR_2->lock, VAR_4);
 if (VAR_9)
  FUNC_10(VAR_2);
}
