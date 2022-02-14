
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 int FUNC_0 (char*,char*,char*) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_device *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_0);

 switch (VAR_3->speed) {
 case 131:
  VAR_4 = "1.5";
  break;
 case 129:
 case 133:
  VAR_4 = "12";
  break;
 case 132:
  VAR_4 = "480";
  break;
 case 128:
  VAR_4 = "480";
  break;
 case 130:
  VAR_4 = "5000";
  break;
 default:
  VAR_4 = "unknown";
 }
 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
