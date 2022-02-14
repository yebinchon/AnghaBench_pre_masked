
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {scalar_t__ linkstat; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct twl4030_usb* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct twl4030_usb *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_1(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_3(VAR_4, "%s\n",
   (VAR_5->linkstat == VAR_1) ? "on" : "off");
 FUNC_2(&VAR_5->lock, VAR_6);

 return VAR_7;
}
