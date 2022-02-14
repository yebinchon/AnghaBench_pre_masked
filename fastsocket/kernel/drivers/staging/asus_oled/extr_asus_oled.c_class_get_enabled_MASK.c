
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_oled_dev {int enabled; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct asus_oled_dev *VAR_3 =
  (struct asus_oled_dev *) FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d\n", VAR_3->enabled);
}
