
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct usb_interface {int dummy; } ;
struct hwarc {int usb_dev; int usb_iface; struct uwb_rc* uwb_rc; } ;


 int FUNC_0 (struct hwarc*) ;
 struct hwarc* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct uwb_rc*) ;
 int FUNC_6 (struct uwb_rc*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct hwarc *VAR_1 = FUNC_1(VAR_0);
 struct uwb_rc *VAR_2 = VAR_1->uwb_rc;

 FUNC_4(VAR_1->usb_iface, ((void*)0));
 FUNC_6(VAR_2);
 FUNC_3(VAR_1->usb_iface);
 FUNC_2(VAR_1->usb_dev);
 FUNC_0(VAR_1);
 FUNC_5(VAR_2);
}
