
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct usb_ov511* FUNC_0 (struct device*) ;
 int FUNC_1 (struct usb_ov511*,unsigned char*) ;
 int FUNC_2 (char*,char*,unsigned char) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_ov511 *VAR_4 = FUNC_0(VAR_1);
 unsigned char VAR_5 = 0;

 if (!VAR_4->dev)
  return -VAR_0;
 FUNC_1(VAR_4, &VAR_5);
 return FUNC_2(VAR_3, "%d\n", VAR_5);
}
