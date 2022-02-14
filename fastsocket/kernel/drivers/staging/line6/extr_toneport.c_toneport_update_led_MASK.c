
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int usbdev; } ;
struct usb_line6_toneport {struct usb_line6 line6; } ;
struct usb_interface {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_interface* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int,int ) ;
 struct usb_line6_toneport* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_0(VAR_2);
 struct usb_line6_toneport *VAR_4 = FUNC_2(VAR_3);
 struct usb_line6 *VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->line6;
 if (VAR_5)
  FUNC_1(VAR_5->usbdev, (VAR_1 << 8) | 0x0002,
      VAR_0);
}
