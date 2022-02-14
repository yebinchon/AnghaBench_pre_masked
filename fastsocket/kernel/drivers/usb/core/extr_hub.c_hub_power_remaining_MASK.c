
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_hub {int mA_per_port; int intfdev; TYPE_1__* descriptor; int limited_power; struct usb_device* hdev; } ;
struct usb_device {int bus_mA; int maxchild; int dev; scalar_t__ parent; TYPE_4__* bus; TYPE_3__* actconfig; struct usb_device** children; } ;
struct TYPE_8__ {int otg_port; } ;
struct TYPE_6__ {int bMaxPower; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;
struct TYPE_5__ {int bHubContrCurrent; } ;


 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static unsigned
FUNC_1 (struct usb_hub *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->hdev;
 int VAR_2;
 int VAR_3;

 if (!VAR_0->limited_power)
  return 0;

 VAR_2 = VAR_1->bus_mA - VAR_0->descriptor->bHubContrCurrent;
 for (VAR_3 = 1; VAR_3 <= VAR_1->maxchild; ++VAR_3) {
  struct usb_device *VAR_4 = VAR_1->children[VAR_3 - 1];
  int VAR_5;

  if (!VAR_4)
   continue;



  if (VAR_4->actconfig)
   VAR_5 = VAR_4->actconfig->desc.bMaxPower * 2;
  else if (VAR_3 != VAR_4->bus->otg_port || VAR_1->parent)
   VAR_5 = 100;
  else
   VAR_5 = 8;
  if (VAR_5 > VAR_0->mA_per_port)
   FUNC_0(VAR_4->dev,
     "%dmA is over %umA budget for port %d!\n",
     VAR_5, VAR_0->mA_per_port, VAR_3);
  VAR_2 -= VAR_5;
 }
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->intfdev, "%dmA over power budget!\n",
   - VAR_2);
  VAR_2 = 0;
 }
 return VAR_2;
}
