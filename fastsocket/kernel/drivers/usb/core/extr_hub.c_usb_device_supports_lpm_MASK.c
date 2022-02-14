
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {scalar_t__ speed; int dev; TYPE_1__* parent; TYPE_3__* bos; } ;
struct TYPE_6__ {int ss_cap; TYPE_2__* ext_cap; } ;
struct TYPE_5__ {int bmAttributes; } ;
struct TYPE_4__ {scalar_t__ lpm_capable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_2)
{



 if (VAR_2->speed == VAR_1) {
  if (VAR_2->bos->ext_cap &&
   (VAR_0 &
    FUNC_1(VAR_2->bos->ext_cap->bmAttributes)))
   return 1;
  return 0;
 }




 if (!VAR_2->bos->ss_cap) {
  FUNC_0(&VAR_2->dev, "No LPM exit latency info found.  "
    "Power management will be impacted.\n");
  return 0;
 }
 if (VAR_2->parent->lpm_capable)
  return 1;

 FUNC_0(&VAR_2->dev, "Parent hub missing LPM exit latency info.  "
   "Power management will be impacted.\n");
 return 0;
}
