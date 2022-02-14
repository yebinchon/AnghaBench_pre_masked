
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int shadow_power; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_sevsegdev*) ;
 int FUNC_1 (struct usb_sevsegdev*,int ) ;
 struct usb_sevsegdev* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct usb_sevsegdev *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->shadow_power = 1;
 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0);

 return 0;
}
