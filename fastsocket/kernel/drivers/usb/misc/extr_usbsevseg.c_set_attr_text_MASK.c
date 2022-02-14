
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {size_t textlength; int text; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 size_t FUNC_2 (char const*,size_t) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 int FUNC_4 (struct usb_sevsegdev*,int ) ;
 struct usb_sevsegdev* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_3(VAR_2);
 struct usb_sevsegdev *VAR_7 = FUNC_5(VAR_6);
 size_t VAR_8 = FUNC_2(VAR_4, VAR_5);

 if (VAR_8 > sizeof(VAR_7->text))
  return -VAR_0;

 FUNC_1(VAR_7->text, 0, sizeof(VAR_7->text));
 VAR_7->textlength = VAR_8;

 if (VAR_8 > 0)
  FUNC_0(VAR_7->text, VAR_4, VAR_8);

 FUNC_4(VAR_7, VAR_1);
 return VAR_5;
}
