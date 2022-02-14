
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int udev; } ;
struct usb_ctrlrequest {int bRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_3 (int,int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int ,int ,void*,void*,int ,int ,struct usb_ctrlrequest*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_9(struct usbnet *VAR_7, u8 VAR_8, u8 VAR_9,
      u16 VAR_10, void *VAR_11)
{
 struct usb_ctrlrequest *VAR_12;
 struct urb *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(0, VAR_2);
 if (!VAR_13) {
  FUNC_1(VAR_7, "Error allocating URB in dm_write_async_helper!");
  return;
 }

 VAR_12 = FUNC_3(sizeof(struct usb_ctrlrequest), VAR_2);
 if (!VAR_12) {
  FUNC_1(VAR_7, "Failed to allocate memory for control request");
  FUNC_6(VAR_13);
  return;
 }

 VAR_12->bRequestType = VAR_3 | VAR_5 | VAR_4;
 VAR_12->bRequest = VAR_10 ? VAR_1 : VAR_0;
 VAR_12->wValue = FUNC_0(VAR_9);
 VAR_12->wIndex = FUNC_0(VAR_8);
 VAR_12->wLength = FUNC_0(VAR_10);

 FUNC_5(VAR_13, VAR_7->udev,
        FUNC_7(VAR_7->udev, 0),
        (void *)VAR_12, VAR_11, VAR_10,
        VAR_6, VAR_12);

 VAR_14 = FUNC_8(VAR_13, VAR_2);
 if (VAR_14 < 0) {
  FUNC_1(VAR_7, "Error submitting the control message: status=%d",
         VAR_14);
  FUNC_2(VAR_12);
  FUNC_6(VAR_13);
 }
}
