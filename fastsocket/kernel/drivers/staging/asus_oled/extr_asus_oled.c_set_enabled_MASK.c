
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_oled_dev {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct asus_oled_dev*,int) ;
 int FUNC_1 (char const*,int,int *) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct asus_oled_dev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_2(VAR_0);
 struct asus_oled_dev *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_1(VAR_2, 10, ((void*)0));

 FUNC_0(VAR_5, VAR_6);

 return VAR_3;
}
