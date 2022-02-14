
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;
struct usb_device {struct usb_host_endpoint** ep_in; struct usb_host_endpoint** ep_out; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct usb_device*,struct usb_host_endpoint*) ;

void FUNC_2(struct usb_device *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2 & VAR_0;
 struct usb_host_endpoint *VAR_4;

 if (FUNC_0(VAR_2))
  VAR_4 = VAR_1->ep_out[VAR_3];
 else
  VAR_4 = VAR_1->ep_in[VAR_3];
 if (VAR_4)
  FUNC_1(VAR_1, VAR_4);
}
