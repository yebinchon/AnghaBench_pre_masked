
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int* decimals; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct usb_interface* FUNC_0 (struct device*) ;
 struct usb_sevsegdev* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_0(VAR_0);
 struct usb_sevsegdev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4->decimals); VAR_5++) {
  VAR_6 = sizeof(VAR_4->decimals) - 1 - VAR_5;
  if (VAR_4->decimals[VAR_5] == 0)
   VAR_2[VAR_6] = '0';
  else if (VAR_4->decimals[VAR_5] == 1)
   VAR_2[VAR_6] = '1';
  else
   VAR_2[VAR_6] = 'x';
 }

 VAR_2[sizeof(VAR_4->decimals)] = '\n';
 return sizeof(VAR_4->decimals) + 1;
}
