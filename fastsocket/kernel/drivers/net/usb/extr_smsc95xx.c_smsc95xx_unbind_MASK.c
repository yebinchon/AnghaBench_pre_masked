
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct smsc95xx_priv {int dummy; } ;


 int FUNC_0 (struct usbnet*,char*) ;
 int FUNC_1 (struct smsc95xx_priv*) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct smsc95xx_priv *VAR_2 = (struct smsc95xx_priv *)(VAR_0->data[0]);
 if (VAR_2) {
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_0, "free pdata");
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
  VAR_0->data[0] = 0;
 }
}
