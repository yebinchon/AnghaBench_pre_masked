
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int cur_altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,struct usb_interface*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,struct usb_interface*) ;
 int FUNC_3 (struct usbnet*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1, struct usb_interface *VAR_2)
{
 int VAR_3;


 FUNC_2(VAR_1, VAR_2);
 if (FUNC_1(VAR_2->cur_altsetting))
  return -VAR_0;


 VAR_3 = FUNC_0(VAR_1, VAR_2, 1);







 FUNC_3(VAR_1, 0, 0);
 return VAR_3;
}
