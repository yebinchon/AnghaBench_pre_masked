
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {scalar_t__ enabled; } ;
struct usb_device {struct usb_host_endpoint** ep_in; struct usb_host_endpoint** ep_out; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_2 (struct usb_device*,struct usb_host_endpoint*) ;

void FUNC_3(struct usb_device *VAR_1, unsigned int VAR_2,
  bool VAR_3)
{
 unsigned int VAR_4 = VAR_2 & VAR_0;
 struct usb_host_endpoint *VAR_5;

 if (!VAR_1)
  return;

 if (FUNC_0(VAR_2)) {
  VAR_5 = VAR_1->ep_out[VAR_4];
  if (VAR_3)
   VAR_1->ep_out[VAR_4] = ((void*)0);
 } else {
  VAR_5 = VAR_1->ep_in[VAR_4];
  if (VAR_3)
   VAR_1->ep_in[VAR_4] = ((void*)0);
 }
 if (VAR_5) {
  VAR_5->enabled = 0;
  FUNC_2(VAR_1, VAR_5);
  if (VAR_3)
   FUNC_1(VAR_1, VAR_5);
 }
}
