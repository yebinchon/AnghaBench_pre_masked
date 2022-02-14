
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct smsusb_device_t {scalar_t__ coredev; } ;


 int FUNC_0 (struct smsusb_device_t*) ;
 int FUNC_1 (char*,struct smsusb_device_t*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct smsusb_device_t*) ;
 struct smsusb_device_t* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct smsusb_device_t *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1) {
  FUNC_3(VAR_1);


  if (VAR_1->coredev)
   FUNC_2(VAR_1->coredev);

  FUNC_0(VAR_1);

  FUNC_1("device %p destroyed", VAR_1);
 }

 FUNC_5(VAR_0, ((void*)0));
}
