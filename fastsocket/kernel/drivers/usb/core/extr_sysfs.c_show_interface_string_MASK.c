
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {TYPE_1__* cur_altsetting; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,char*) ;
 struct usb_interface* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = VAR_3->cur_altsetting->string;
 FUNC_0();

 if (!VAR_4)
  return 0;
 return FUNC_1(VAR_2, "%s\n", VAR_4);
}
