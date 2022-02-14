
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int textmode; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_sevsegdev*,int ) ;
 struct usb_sevsegdev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
 struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct usb_interface *VAR_7 = FUNC_1(VAR_3);
 struct usb_sevsegdev *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 for (VAR_9 = 0; VAR_2[VAR_9]; VAR_9++) {
  if (FUNC_0(VAR_2[VAR_9], VAR_5)) {
   VAR_8->textmode = VAR_9;
   FUNC_2(VAR_8, VAR_1);
   return VAR_6;
  }
 }

 return -VAR_0;
}
