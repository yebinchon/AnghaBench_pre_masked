
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ati_remote2 {int mode_mask; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct usb_device* FUNC_1 (struct device*) ;
 struct ati_remote2* FUNC_2 (struct usb_interface*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_1(VAR_0);
 struct usb_interface *VAR_4 = FUNC_3(VAR_3, 0);
 struct ati_remote2 *VAR_5 = FUNC_2(VAR_4);

 return FUNC_0(VAR_2, "0x%02x\n", VAR_5->mode_mask);
}
