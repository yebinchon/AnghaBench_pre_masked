
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_oled_dev {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct asus_oled_dev*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 return FUNC_1((struct asus_oled_dev *)
    FUNC_0(VAR_0), VAR_2, VAR_3);
}
