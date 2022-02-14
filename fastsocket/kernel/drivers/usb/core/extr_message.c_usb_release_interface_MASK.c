
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_cache {int ref; } ;
struct usb_interface {int altsetting; } ;
struct device {int dummy; } ;


 struct usb_interface_cache* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int *,int ) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct usb_interface *VAR_2 = FUNC_3(VAR_1);
 struct usb_interface_cache *VAR_3 =
   FUNC_0(VAR_2->altsetting);

 FUNC_2(&VAR_3->ref, VAR_0);
 FUNC_1(VAR_2);
}
