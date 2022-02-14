
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct urb {int transfer_buffer_length; int dev; } ;
struct mceusb_dev {int usbdev; int send_flags; struct urb* urb_in; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 unsigned char* FUNC_2 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ,int ,unsigned char*,int,int ,struct mceusb_dev*,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_10(struct mceusb_dev *VAR_6,
          struct usb_endpoint_descriptor *VAR_7,
          unsigned char *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 struct urb *VAR_12;
 struct device *VAR_13 = VAR_6->dev;
 unsigned char *VAR_14;

 if (VAR_10 == VAR_3) {
  VAR_12 = FUNC_5(0, VAR_1);
  if (FUNC_4(!VAR_12)) {
   FUNC_1(VAR_13, "Error, couldn't allocate urb!\n");
   return;
  }

  VAR_14 = FUNC_2(VAR_9, VAR_1);
  if (!VAR_14) {
   FUNC_1(VAR_13, "Error, couldn't allocate buf!\n");
   FUNC_7(VAR_12);
   return;
  }


  FUNC_6(VAR_12, VAR_6->usbdev,
   FUNC_8(VAR_6->usbdev, VAR_7->bEndpointAddress),
   VAR_14, VAR_9, (usb_complete_t)VAR_5,
   VAR_6, VAR_7->bInterval);
  FUNC_3(VAR_14, VAR_8, VAR_9);

 } else if (VAR_10 == VAR_2) {

  VAR_12 = VAR_6->urb_in;
  VAR_6->send_flags = VAR_4;

 } else {
  FUNC_1(VAR_13, "Error! Unknown urb type %d\n", VAR_10);
  return;
 }

 FUNC_0(VAR_13, "receive request called (size=%#x)\n", VAR_9);

 VAR_12->transfer_buffer_length = VAR_9;
 VAR_12->dev = VAR_6->usbdev;

 VAR_11 = FUNC_9(VAR_12, VAR_0);
 if (VAR_11) {
  FUNC_0(VAR_13, "receive request FAILED! (res=%d)\n", VAR_11);
  return;
 }
 FUNC_0(VAR_13, "receive request complete (res=%d)\n", VAR_11);
}
