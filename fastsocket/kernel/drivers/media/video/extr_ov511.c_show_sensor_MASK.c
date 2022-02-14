
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int sensor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct usb_ov511* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_ov511 *VAR_4 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, "%s\n", FUNC_2(VAR_0, VAR_4->sensor));
}
