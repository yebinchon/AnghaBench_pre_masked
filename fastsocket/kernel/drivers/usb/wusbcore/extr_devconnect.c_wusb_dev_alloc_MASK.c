
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bLength; } ;
struct TYPE_4__ {TYPE_1__ descr; } ;
struct wusbhc {int gtk_index; TYPE_2__ gtk; } ;
struct wusb_dev {struct usb_ctrlrequest* set_gtk_req; struct urb* set_gtk_urb; int devconnect_acked_work; struct wusbhc* wusbhc; } ;
struct usb_ctrlrequest {int bRequestType; void* wLength; scalar_t__ wIndex; void* wValue; int bRequest; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 struct usb_ctrlrequest* FUNC_2 (int,int ) ;
 struct wusb_dev* FUNC_3 (int,int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wusb_dev*) ;
 int VAR_6 ;

__attribute__((used)) static struct wusb_dev *FUNC_6(struct wusbhc *VAR_7)
{
 struct wusb_dev *VAR_8;
 struct urb *VAR_9;
 struct usb_ctrlrequest *VAR_10;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);
 if (VAR_8 == ((void*)0))
  goto err;

 VAR_8->wusbhc = VAR_7;

 FUNC_0(&VAR_8->devconnect_acked_work, VAR_6);

 VAR_9 = FUNC_4(0, VAR_0);
 if (VAR_9 == ((void*)0))
  goto err;

 VAR_10 = FUNC_2(sizeof(struct usb_ctrlrequest), VAR_0);
 if (VAR_10 == ((void*)0))
  goto err;

 VAR_10->bRequestType = VAR_1 | VAR_5 | VAR_3;
 VAR_10->bRequest = VAR_4;
 VAR_10->wValue = FUNC_1(VAR_2 << 8 | VAR_7->gtk_index);
 VAR_10->wIndex = 0;
 VAR_10->wLength = FUNC_1(VAR_7->gtk.descr.bLength);

 VAR_8->set_gtk_urb = VAR_9;
 VAR_8->set_gtk_req = VAR_10;

 return VAR_8;
err:
 FUNC_5(VAR_8);
 return ((void*)0);
}
