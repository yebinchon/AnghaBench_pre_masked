
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct usb_device *VAR_6 = FUNC_1(VAR_1);
 unsigned VAR_7;
 VAR_5 = FUNC_0(VAR_3, "%u\n", &VAR_7);
 if (VAR_5 != 1)
  VAR_5 = -VAR_0;
 else if (VAR_7 == 0)
  VAR_5 = FUNC_3(VAR_6);
 else
  VAR_5 = FUNC_2(VAR_6);
 return VAR_5 < 0? VAR_5 : VAR_4;
}
