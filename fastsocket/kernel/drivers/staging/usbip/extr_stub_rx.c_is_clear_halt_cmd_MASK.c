
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {scalar_t__ bRequest; scalar_t__ bRequestType; scalar_t__ wValue; } ;
struct urb {scalar_t__ setup_packet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct urb *VAR_3)
{
 struct usb_ctrlrequest *VAR_4;

 VAR_4 = (struct usb_ctrlrequest *) VAR_3->setup_packet;

  return (VAR_4->bRequest == VAR_2) &&
   (VAR_4->bRequestType == VAR_1) &&
   (VAR_4->wValue == VAR_0);
}
