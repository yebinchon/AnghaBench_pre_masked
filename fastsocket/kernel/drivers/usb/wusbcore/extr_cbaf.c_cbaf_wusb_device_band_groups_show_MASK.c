
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cbaf {int device_band_groups; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct cbaf* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_1(VAR_1);
 struct cbaf *VAR_5 = FUNC_2(VAR_4);

 return FUNC_0(VAR_3, VAR_0, "0x%04x\n", VAR_5->device_band_groups);
}
