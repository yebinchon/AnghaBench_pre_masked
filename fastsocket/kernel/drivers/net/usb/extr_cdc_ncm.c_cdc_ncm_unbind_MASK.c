
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct cdc_ncm_ctx {struct usb_interface* intf; struct usb_interface* control; struct usb_interface* data; int bh; int tx_timer; int stop; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct cdc_ncm_ctx*) ;
 struct usb_driver* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_driver*,struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

void FUNC_8(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct cdc_ncm_ctx *VAR_2 = (struct cdc_ncm_ctx *)VAR_0->data[0];
 struct usb_driver *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(&VAR_2->stop, 1);

 if (FUNC_3(&VAR_2->tx_timer))
  FUNC_4(&VAR_2->tx_timer);

 FUNC_5(&VAR_2->bh);


 if (VAR_2->control == VAR_2->data)
  VAR_2->data = ((void*)0);


 if (VAR_1 == VAR_2->control && VAR_2->data) {
  FUNC_7(VAR_2->data, ((void*)0));
  FUNC_6(VAR_3, VAR_2->data);
  VAR_2->data = ((void*)0);

 } else if (VAR_1 == VAR_2->data && VAR_2->control) {
  FUNC_7(VAR_2->control, ((void*)0));
  FUNC_6(VAR_3, VAR_2->control);
  VAR_2->control = ((void*)0);
 }

 FUNC_7(VAR_2->intf, ((void*)0));
 FUNC_1(VAR_2);
}
