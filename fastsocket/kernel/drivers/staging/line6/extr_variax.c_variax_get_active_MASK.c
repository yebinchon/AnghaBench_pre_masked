
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_variax {int* buffer_activate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct device*) ;
 struct usb_line6_variax* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_line6_variax *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 return FUNC_0(VAR_3, "%d\n", VAR_4->buffer_activate[VAR_0]);
}
