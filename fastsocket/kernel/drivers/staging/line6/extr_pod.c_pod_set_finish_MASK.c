
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int line6; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (struct usb_line6_pod*,int ,int) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct usb_line6_pod* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_3(VAR_1);
 struct usb_line6_pod *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = 0;
 char *VAR_8 = FUNC_2(VAR_6, VAR_0, VAR_7);
 if (!VAR_8)
  return 0;
 FUNC_1(&VAR_6->line6, VAR_8, VAR_7);
 FUNC_0(VAR_8);
 return VAR_4;
}
