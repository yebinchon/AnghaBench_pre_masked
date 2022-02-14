
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
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct usbnet*,char*,...) ;
 int FUNC_3 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_4 (int,int ) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ,int ,void*,void*,int ,int ,struct usb_ctrlrequest*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void
FUNC_10(struct usbnet *VAR_5, u8 VAR_6, u16 VAR_7, u16 VAR_8,
        u16 VAR_9, void *VAR_10)
{
 struct usb_ctrlrequest *VAR_11;
 int VAR_12;
 struct urb *VAR_13;

 FUNC_1(VAR_5,"asix_write_cmd_async() cmd=0x%02x value=0x%04x index=0x%04x size=%d",
  VAR_6, VAR_7, VAR_8, VAR_9);
 if ((VAR_13 = FUNC_5(0, VAR_0)) == ((void*)0)) {
  FUNC_2(VAR_5, "Error allocating URB in write_cmd_async!");
  return;
 }

 if ((VAR_11 = FUNC_4(sizeof(struct usb_ctrlrequest), VAR_0)) == ((void*)0)) {
  FUNC_2(VAR_5, "Failed to allocate memory for control request");
  FUNC_7(VAR_13);
  return;
 }

 VAR_11->bRequestType = VAR_1 | VAR_3 | VAR_2;
 VAR_11->bRequest = VAR_6;
 VAR_11->wValue = FUNC_0(VAR_7);
 VAR_11->wIndex = FUNC_0(VAR_8);
 VAR_11->wLength = FUNC_0(VAR_9);

 FUNC_6(VAR_13, VAR_5->udev,
        FUNC_8(VAR_5->udev, 0),
        (void *)VAR_11, VAR_10, VAR_9,
        VAR_4, VAR_11);

 if((VAR_12 = FUNC_9(VAR_13, VAR_0)) < 0) {
  FUNC_2(VAR_5, "Error submitting the control message: status=%d",
    VAR_12);
  FUNC_3(VAR_11);
  FUNC_7(VAR_13);
 }
}
