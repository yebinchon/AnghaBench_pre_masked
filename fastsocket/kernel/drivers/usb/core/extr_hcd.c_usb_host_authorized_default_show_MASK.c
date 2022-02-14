
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int authorized_default; } ;
struct usb_device {struct usb_bus* bus; } ;
struct usb_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct usb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_2(VAR_2);
 struct usb_bus *VAR_6 = VAR_5->bus;
 struct usb_hcd *VAR_7;

 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6);
 return FUNC_1(VAR_4, VAR_1, "%u\n", VAR_7->authorized_default);
}
