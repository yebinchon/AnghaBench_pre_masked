
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct u132_platform_data {scalar_t__ vendor; scalar_t__ device; } ;
struct u132 {int going; TYPE_3__* platform_dev; int sw_lock; int flags; } ;
struct TYPE_5__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct u132*) ;
 int FUNC_7 (struct u132*) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_7)
{
 struct u132 *VAR_8 = FUNC_1(VAR_7);
 if (VAR_8->going > 1) {
  FUNC_0(&VAR_8->platform_dev->dev, "device has been removed %d\n"
   , VAR_8->going);
  return -VAR_0;
 } else if (VAR_8->going > 0) {
  FUNC_0(&VAR_8->platform_dev->dev, "device is being removed\n");
  return -VAR_1;
 } else if (VAR_7->self.controller) {
  int VAR_9;
  struct platform_device *VAR_10 =
   FUNC_5(VAR_7->self.controller);
  u16 VAR_11 = ((struct u132_platform_data *)
   (VAR_10->dev.platform_data))->vendor;
  u16 VAR_12 = ((struct u132_platform_data *)
   (VAR_10->dev.platform_data))->device;
  FUNC_3(&VAR_8->sw_lock);
  FUNC_2(10);
  if (VAR_11 == VAR_4 && VAR_12 == 0x740c) {
   VAR_8->flags = VAR_2;
  } else if (VAR_11 == VAR_6 && VAR_12 == 0xc861) {
   FUNC_0(&VAR_8->platform_dev->dev, "WARNING: OPTi workar"
    "ounds unavailable\n");
  } else if (VAR_11 == VAR_5 && VAR_12 == 0xa0f8)
   VAR_8->flags |= VAR_3;
  VAR_9 = FUNC_7(VAR_8);
  if (VAR_9) {
   FUNC_6(VAR_8);
   VAR_8->going = 1;
  }
  FUNC_2(100);
  FUNC_4(&VAR_8->sw_lock);
  return VAR_9;
 } else {
  FUNC_0(&VAR_8->platform_dev->dev, "platform_device missing\n");
  return -VAR_0;
 }
}
