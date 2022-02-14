
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char const*,size_t) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(FUNC_2(VAR_4), VAR_2, VAR_3);
}
