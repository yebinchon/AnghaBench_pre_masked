
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcm203x_data {struct bcm203x_data* buffer; struct bcm203x_data* fw_data; int urb; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int FUNC_1 (struct bcm203x_data*) ;
 int FUNC_2 (int ) ;
 struct bcm203x_data* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct bcm203x_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_0("intf %p", VAR_0);

 FUNC_4(VAR_1->urb);

 FUNC_5(VAR_0, ((void*)0));

 FUNC_2(VAR_1->urb);
 FUNC_1(VAR_1->fw_data);
 FUNC_1(VAR_1->buffer);
 FUNC_1(VAR_1);
}
