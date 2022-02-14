
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {int usb_dev; } ;
struct kref {int dummy; } ;


 int FUNC_0 (struct usbtmc_device_data*) ;
 struct usbtmc_device_data* FUNC_1 (struct kref*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kref *VAR_0)
{
 struct usbtmc_device_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->usb_dev);
 FUNC_0(VAR_1);
}
