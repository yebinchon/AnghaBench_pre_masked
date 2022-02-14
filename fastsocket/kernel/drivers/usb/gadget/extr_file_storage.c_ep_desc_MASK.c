
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {scalar_t__ speed; } ;
struct usb_endpoint_descriptor {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static struct usb_endpoint_descriptor *
FUNC_1(struct usb_gadget *VAR_1, struct usb_endpoint_descriptor *VAR_2,
  struct usb_endpoint_descriptor *VAR_3)
{
 if (FUNC_0(VAR_1) && VAR_1->speed == VAR_0)
  return VAR_3;
 return VAR_2;
}
