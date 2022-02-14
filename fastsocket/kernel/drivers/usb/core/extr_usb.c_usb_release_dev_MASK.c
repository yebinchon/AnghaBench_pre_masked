
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct usb_device {struct usb_device* serial; struct usb_device* manufacturer; struct usb_device* product; int bus; } ;
struct device {int dummy; } ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*) ;
 struct usb_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct usb_device *VAR_1;
 struct usb_hcd *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_1->bus);

 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_2);
 FUNC_1(VAR_1->product);
 FUNC_1(VAR_1->manufacturer);
 FUNC_1(VAR_1->serial);
 FUNC_1(VAR_1);
}
