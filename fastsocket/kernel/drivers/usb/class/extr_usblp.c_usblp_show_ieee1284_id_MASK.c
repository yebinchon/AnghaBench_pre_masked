
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {scalar_t__* device_id_string; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,scalar_t__*) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct usblp* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_1(VAR_0);
 struct usblp *VAR_4 = FUNC_2 (VAR_3);

 if (VAR_4->device_id_string[0] == 0 &&
     VAR_4->device_id_string[1] == 0)
  return 0;

 return FUNC_0(VAR_2, "%s", VAR_4->device_id_string+2);
}
