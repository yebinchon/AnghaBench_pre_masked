
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {char TermChar; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct usb_interface* FUNC_0 (struct device*) ;
 struct usbtmc_device_data* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_0(VAR_1);
 struct usbtmc_device_data *VAR_6 = FUNC_1(VAR_5);

 if (VAR_4 < 1)
  return -VAR_0;
 VAR_6->TermChar = VAR_3[0];
 return VAR_4;
}
