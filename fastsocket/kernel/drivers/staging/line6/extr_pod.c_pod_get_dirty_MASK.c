
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {scalar_t__ dirty; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct usb_interface* FUNC_0 (struct device*) ;
 struct usb_line6_pod* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_0(VAR_0);
 struct usb_line6_pod *VAR_4 = FUNC_1(VAR_3);
 VAR_2[0] = VAR_4->dirty ? '1' : '0';
 VAR_2[1] = '\n';
 return 2;
}
