
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_1__* udev; } ;
struct usb_ctrlrequest {void* wLength; void* wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct urb {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_4 (int,int ) ;
 int VAR_3 ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,TYPE_1__*,int ,void*,void*,int ,int ,struct usb_ctrlrequest*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_10(struct usbnet *VAR_4, u16 VAR_5, u16 VAR_6, void *VAR_7)
{
 struct usb_ctrlrequest *VAR_8;
 int VAR_9;
 struct urb *VAR_10;

 VAR_10 = FUNC_5(0, VAR_0);
 if (!VAR_10) {
  FUNC_1(&VAR_4->udev->dev,
   "Error allocating URB in write_cmd_async!\n");
  return;
 }

 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_0);
 if (!VAR_8) {
  FUNC_2(&VAR_4->udev->dev,
   "Failed to allocate memory for control request\n");
  goto out;
 }
 VAR_8->bRequestType = VAR_1;
 VAR_8->bRequest = VAR_2;
 VAR_8->wValue = 0;
 VAR_8->wIndex = FUNC_0(VAR_5);
 VAR_8->wLength = FUNC_0(VAR_6);

 FUNC_6(VAR_10, VAR_4->udev,
        FUNC_8(VAR_4->udev, 0),
        (void *)VAR_8, VAR_7, VAR_6,
        VAR_3, VAR_8);

 VAR_9 = FUNC_9(VAR_10, VAR_0);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_4->udev->dev,
   "Error submitting the control message: ret=%d\n", VAR_9);
  goto out;
 }
 return;
out:
 FUNC_3(VAR_8);
 FUNC_7(VAR_10);
}
