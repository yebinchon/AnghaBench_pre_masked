
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {scalar_t__ bRequest; scalar_t__ bRequestType; int wIndex; int wValue; } ;
struct urb {scalar_t__ setup_packet; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct urb *VAR_3)
{
 struct usb_ctrlrequest *VAR_4;
 __u16 VAR_5;
 __u16 VAR_6;

 VAR_4 = (struct usb_ctrlrequest *) VAR_3->setup_packet;
 VAR_5 = FUNC_0(VAR_4->wValue);
 VAR_6 = FUNC_0(VAR_4->wIndex);

 if ((VAR_4->bRequest == VAR_1) &&
   (VAR_4->bRequestType == VAR_2) &&
   (VAR_5 == VAR_0)) {
  FUNC_1("reset_device_cmd, port %u\n", VAR_6);
  return 1;
 } else
  return 0;
}
