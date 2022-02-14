
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int udev; } ;
struct usb_ctrlrequest {int bRequestType; scalar_t__ wLength; scalar_t__ wIndex; int wValue; int bRequest; } ;
struct urb {int dummy; } ;
struct net_device {int flags; scalar_t__ mc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usbnet*,char*) ;
 int FUNC_2 (struct usbnet*,char*) ;
 int FUNC_3 (struct usbnet*,char*,...) ;
 int VAR_11 ;
 int FUNC_4 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_5 (int,int ) ;
 struct usbnet* FUNC_6 (struct net_device*) ;
 struct urb* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ,int ,void*,int *,int ,int ,void*) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_12)
{
 struct usb_ctrlrequest *VAR_13;
 int VAR_14;
 struct urb *VAR_15;
 struct usbnet *VAR_16 = FUNC_6(VAR_12);
 u16 VAR_17 = VAR_5 | VAR_4;

 if (VAR_12->flags & VAR_2) {

  VAR_17 |= VAR_6;
  FUNC_2(VAR_16, "promiscuous mode enabled");
 } else if (VAR_12->mc_count ||
    (VAR_12->flags & VAR_1)) {
  VAR_17 |= VAR_3;
  FUNC_1(VAR_16, "receive all multicast enabled");
 } else {

  FUNC_1(VAR_16, "receive own packets only");
 }

 VAR_15 = FUNC_7(0, VAR_0);
 if (!VAR_15) {
  FUNC_3(VAR_16, "Error allocating URB");
  return;
 }

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_0);
 if (!VAR_13) {
  FUNC_3(VAR_16, "Error allocating control msg");
  goto out;
 }

 VAR_13->bRequestType = VAR_8 | VAR_10 | VAR_9;
 VAR_13->bRequest = VAR_7;
 VAR_13->wValue = FUNC_0(VAR_17);
 VAR_13->wIndex = 0;
 VAR_13->wLength = 0;

 FUNC_8(VAR_15, VAR_16->udev, FUNC_10(VAR_16->udev, 0),
  (void *)VAR_13, ((void*)0), 0,
  VAR_11,
  (void *)VAR_13);

 VAR_14 = FUNC_11(VAR_15, VAR_0);
 if (VAR_14 < 0) {
  FUNC_3(VAR_16, "Error submitting control msg, sts=%d", VAR_14);
  goto out1;
 }
 return;
out1:
 FUNC_4(VAR_13);
out:
 FUNC_9(VAR_15);
}
