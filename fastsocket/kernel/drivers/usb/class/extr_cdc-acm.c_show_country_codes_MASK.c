
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acm {int country_code_size; int country_codes; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int ) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct acm* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3
(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_1(VAR_0);
 struct acm *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_2, VAR_4->country_codes, VAR_4->country_code_size);
 return VAR_4->country_code_size;
}
