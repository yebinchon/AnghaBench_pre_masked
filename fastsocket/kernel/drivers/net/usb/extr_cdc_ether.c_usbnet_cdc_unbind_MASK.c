
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct cdc_state {struct usb_interface* control; struct usb_interface* data; } ;


 struct usb_driver* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_driver*,struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,int *) ;

void FUNC_3(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct cdc_state *VAR_2 = (void *) &VAR_0->data;
 struct usb_driver *VAR_3 = FUNC_0(VAR_1);


 if (VAR_1 == VAR_2->control && VAR_2->data) {

  FUNC_2(VAR_2->data, ((void*)0));
  FUNC_1(VAR_3, VAR_2->data);
  VAR_2->data = ((void*)0);
 }


 else if (VAR_1 == VAR_2->data && VAR_2->control) {

  FUNC_2(VAR_2->control, ((void*)0));
  FUNC_1(VAR_3, VAR_2->control);
  VAR_2->control = ((void*)0);
 }
}
