
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__ driver_priv; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 if (VAR_0->driver_priv)
  FUNC_0(VAR_0->driver_priv);
}
