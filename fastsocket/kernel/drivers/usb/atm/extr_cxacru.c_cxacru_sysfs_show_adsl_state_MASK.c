
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbatm_data {struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxacru_data {int* card_info; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char*,...) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int) ;
 struct usbatm_data* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_2(VAR_2);
 struct usbatm_data *VAR_6 = FUNC_4(VAR_5);
 struct cxacru_data *VAR_7 = VAR_6->driver_data;
 u32 VAR_8 = VAR_7->card_info[VAR_0];

 static char *VAR_9[] = { "running", "stopped" };
 if (FUNC_3(VAR_8 >= FUNC_0(VAR_9)))
  return FUNC_1(VAR_4, VAR_1, "%u\n", VAR_8);
 return FUNC_1(VAR_4, VAR_1, "%s\n", VAR_9[VAR_8]);
}
