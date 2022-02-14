
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int devt; } ;
struct usb_device {int devnum; int ep0; TYPE_2__ dev; TYPE_1__* bus; scalar_t__ parent; } ;
struct TYPE_8__ {int busnum; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int,int) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int *,struct usb_device*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*) ;

int FUNC_13(struct usb_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->parent) {

  FUNC_7(VAR_2->parent);





  FUNC_5(&VAR_2->dev, 0);
  FUNC_6(&VAR_2->dev, 1);
 }

 FUNC_9(VAR_2);
 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3 < 0)
  goto fail;
 FUNC_2(&VAR_2->dev, "udev %d, busnum %d, minor = %d\n",
   VAR_2->devnum, VAR_2->bus->busnum,
   (((VAR_2->bus->busnum-1) * 128) + (VAR_2->devnum-1)));

 VAR_2->dev.devt = FUNC_0(VAR_0,
   (((VAR_2->bus->busnum-1) * 128) + (VAR_2->devnum-1)));


 FUNC_1(VAR_2);





 VAR_3 = FUNC_4(&VAR_2->dev);
 if (VAR_3) {
  FUNC_3(&VAR_2->dev, "can't device_add, error %d\n", VAR_3);
  goto fail;
 }

 (void) FUNC_8(&VAR_2->dev, &VAR_2->ep0, VAR_2);
 return VAR_3;

fail:
 FUNC_11(VAR_2, VAR_1);
 FUNC_12(VAR_2);
 return VAR_3;
}
