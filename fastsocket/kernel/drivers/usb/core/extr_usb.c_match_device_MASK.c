
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {int maxchild; struct usb_device** children; int dev; TYPE_1__ descriptor; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static struct usb_device *FUNC_5(struct usb_device *VAR_0,
           u16 VAR_1, u16 VAR_2)
{
 struct usb_device *VAR_3 = ((void*)0);
 int VAR_4;

 FUNC_0(&VAR_0->dev, "check for vendor %04x, product %04x ...\n",
     FUNC_1(VAR_0->descriptor.idVendor),
     FUNC_1(VAR_0->descriptor.idProduct));


 if ((VAR_1 == FUNC_1(VAR_0->descriptor.idVendor)) &&
     (VAR_2 == FUNC_1(VAR_0->descriptor.idProduct))) {
  FUNC_0(&VAR_0->dev, "matched this device!\n");
  VAR_3 = FUNC_2(VAR_0);
  goto exit;
 }


 for (VAR_4 = 0; VAR_4 < VAR_0->maxchild; ++VAR_4) {
  if (VAR_0->children[VAR_4]) {
   FUNC_3(VAR_0->children[VAR_4]);
   VAR_3 = FUNC_5(VAR_0->children[VAR_4],
            VAR_1, VAR_2);
   FUNC_4(VAR_0->children[VAR_4]);
   if (VAR_3)
    goto exit;
  }
 }
exit:
 return VAR_3;
}
