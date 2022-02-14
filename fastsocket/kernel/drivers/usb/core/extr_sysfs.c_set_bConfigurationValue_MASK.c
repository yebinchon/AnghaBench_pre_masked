
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct usb_device *VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_3, "%d", &VAR_6) != 1 || VAR_6 < -1 || VAR_6 > 255)
  return -VAR_0;
 FUNC_2(VAR_5);
 VAR_7 = FUNC_3(VAR_5, VAR_6);
 FUNC_4(VAR_5);
 return (VAR_7 < 0) ? VAR_7 : VAR_4;
}
