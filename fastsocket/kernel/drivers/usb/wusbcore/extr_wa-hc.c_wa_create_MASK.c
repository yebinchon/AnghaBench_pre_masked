
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wahc {int * xfer_result; int xfer_result_size; TYPE_3__* dti_epd; TYPE_3__* dto_epd; } ;
struct device {int dummy; } ;
struct usb_interface {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_6__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__* endpoint; } ;
struct TYPE_4__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wahc*,struct usb_interface*) ;
 int FUNC_5 (struct wahc*) ;
 int FUNC_6 (struct wahc*) ;

int FUNC_7(struct wahc *VAR_1, struct usb_interface *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = &VAR_2->dev;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 < 0)
  goto error_rpipes_create;

 VAR_1->dti_epd = &VAR_2->cur_altsetting->endpoint[1].desc;
 VAR_1->dto_epd = &VAR_2->cur_altsetting->endpoint[2].desc;
 VAR_1->xfer_result_size = FUNC_3(VAR_1->dti_epd->wMaxPacketSize);
 VAR_1->xfer_result = FUNC_2(VAR_1->xfer_result_size, VAR_0);
 if (VAR_1->xfer_result == ((void*)0))
  goto error_xfer_result_alloc;
 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_4, "WA-CDS: can't initialize notif endpoint: %d\n",
   VAR_3);
  goto error_nep_create;
 }
 return 0;

error_nep_create:
 FUNC_1(VAR_1->xfer_result);
error_xfer_result_alloc:
 FUNC_6(VAR_1);
error_rpipes_create:
 return VAR_3;
}
