
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_config {char* string; } ;
struct usb_device {struct usb_host_config* actconfig; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_device *VAR_3;
 struct usb_host_config *VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = VAR_3->actconfig;
 if ((!VAR_4) || (!VAR_4->string))
  return 0;
 return FUNC_0(VAR_2, "%s\n", VAR_4->string);
}
