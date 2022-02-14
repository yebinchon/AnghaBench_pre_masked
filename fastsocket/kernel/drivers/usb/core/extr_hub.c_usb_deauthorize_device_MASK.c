
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bNumConfigurations; } ;
struct usb_device {scalar_t__ authorized; TYPE_1__ descriptor; void* serial; void* manufacturer; void* product; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*) ;

int FUNC_6(struct usb_device *VAR_1)
{
 FUNC_3(VAR_1);
 if (VAR_1->authorized == 0)
  goto out_unauthorized;

 VAR_1->authorized = 0;
 FUNC_4(VAR_1, -1);

 FUNC_0(VAR_1->product);
 VAR_1->product = FUNC_1("n/a (unauthorized)", VAR_0);
 FUNC_0(VAR_1->manufacturer);
 VAR_1->manufacturer = FUNC_1("n/a (unauthorized)", VAR_0);
 FUNC_0(VAR_1->serial);
 VAR_1->serial = FUNC_1("n/a (unauthorized)", VAR_0);

 FUNC_2(VAR_1);
 VAR_1->descriptor.bNumConfigurations = 0;

out_unauthorized:
 FUNC_5(VAR_1);
 return 0;
}
