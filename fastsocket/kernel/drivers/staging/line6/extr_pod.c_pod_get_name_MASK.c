
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ header; } ;
struct usb_line6_pod {TYPE_1__ prog_data; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_line6_pod*,scalar_t__,char*) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct usb_line6_pod* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_1(VAR_1);
 struct usb_line6_pod *VAR_5 = FUNC_2(VAR_4);
 return FUNC_0(VAR_5, VAR_5->prog_data.header + VAR_0, VAR_3);
}
