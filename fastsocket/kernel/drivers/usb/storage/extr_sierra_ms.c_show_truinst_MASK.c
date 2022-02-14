
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct swoc_info {int rev; int LinuxSKU; int LinuxVer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct swoc_info*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct swoc_info*) ;
 struct swoc_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*,struct swoc_info*) ;
 int FUNC_6 (char*,int ,char*,...) ;
 scalar_t__ VAR_5 ;
 struct usb_interface* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6, struct device_attribute *VAR_7,
   char *VAR_8)
{
 struct swoc_info *VAR_9;
 struct usb_interface *VAR_10 = FUNC_7(VAR_6);
 struct usb_device *VAR_11 = FUNC_2(VAR_10);
 int VAR_12;
 if (VAR_5 == VAR_4) {
  VAR_12 = FUNC_6(VAR_8, VAR_3, "Forced Mass Storage\n");
 } else {
  VAR_9 = FUNC_4(sizeof(struct swoc_info), VAR_2);
  if (!VAR_9) {
   FUNC_0("SWIMS: Allocation failure\n");
   FUNC_6(VAR_8, VAR_3, "Error\n");
   return -VAR_1;
  }
  VAR_12 = FUNC_5(VAR_11, VAR_9);
  if (VAR_12 < 0) {
   FUNC_0("SWIMS: failed SWoC query\n");
   FUNC_3(VAR_9);
   FUNC_6(VAR_8, VAR_3, "Error\n");
   return -VAR_0;
  }
  FUNC_1(VAR_9);
  VAR_12 = FUNC_6(VAR_8, VAR_3,
   "REV=%02d SKU=%04X VER=%04X\n",
   VAR_9->rev,
   VAR_9->LinuxSKU,
   VAR_9->LinuxVer);
  FUNC_3(VAR_9);
 }
 return VAR_12;
}
