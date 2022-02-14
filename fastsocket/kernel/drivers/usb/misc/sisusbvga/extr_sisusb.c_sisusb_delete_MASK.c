
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {struct sisusb_usb_data* SiS_Pr; int * sisusb_dev; } ;
struct kref {int dummy; } ;


 int FUNC_0 (struct sisusb_usb_data*) ;
 int FUNC_1 (struct sisusb_usb_data*) ;
 int FUNC_2 (struct sisusb_usb_data*) ;
 struct sisusb_usb_data* FUNC_3 (struct kref*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct kref *VAR_0)
{
 struct sisusb_usb_data *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->sisusb_dev)
  FUNC_4(VAR_1->sisusb_dev);

 VAR_1->sisusb_dev = ((void*)0);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);



 FUNC_0(VAR_1);
}
