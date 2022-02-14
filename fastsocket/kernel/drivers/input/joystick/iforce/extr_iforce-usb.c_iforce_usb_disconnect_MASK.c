
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct iforce {int dev; int * usbdev; } ;


 int FUNC_0 (struct iforce*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iforce*) ;
 struct iforce* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct iforce *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;

 FUNC_4(VAR_0, ((void*)0));
 if (VAR_1) {
  VAR_1->usbdev = ((void*)0);
  FUNC_1(VAR_1->dev);

  if (!VAR_2) {
   FUNC_0(VAR_1);
   FUNC_2(VAR_1);
  }
 }
}
