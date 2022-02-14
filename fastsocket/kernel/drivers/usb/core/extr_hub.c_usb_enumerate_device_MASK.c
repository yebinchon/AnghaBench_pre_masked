
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iSerialNumber; int iManufacturer; int iProduct; } ;
struct usb_device {int wusb; scalar_t__ authorized; TYPE_1__ descriptor; void* serial; void* manufacturer; void* product; int dev; int * config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (char*,int ) ;
 void* FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->config == ((void*)0)) {
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->dev, "can't read configurations, error %d\n",
    VAR_2);
   goto fail;
  }
 }
 if (VAR_1->wusb == 1 && VAR_1->authorized == 0) {
  VAR_1->product = FUNC_1("n/a (unauthorized)", VAR_0);
  VAR_1->manufacturer = FUNC_1("n/a (unauthorized)", VAR_0);
  VAR_1->serial = FUNC_1("n/a (unauthorized)", VAR_0);
 }
 else {

  VAR_1->product = FUNC_2(VAR_1, VAR_1->descriptor.iProduct);
  VAR_1->manufacturer = FUNC_2(VAR_1,
            VAR_1->descriptor.iManufacturer);
  VAR_1->serial = FUNC_2(VAR_1, VAR_1->descriptor.iSerialNumber);
 }
 VAR_2 = FUNC_3(VAR_1);
fail:
 return VAR_2;
}
