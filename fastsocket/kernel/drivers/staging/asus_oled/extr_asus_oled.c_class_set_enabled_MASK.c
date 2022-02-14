
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_oled_dev {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct asus_oled_dev*,int) ;
 int FUNC_2 (char const*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct asus_oled_dev *VAR_4 =
  (struct asus_oled_dev *) FUNC_0(VAR_0);

 int VAR_5 = FUNC_2(VAR_2, 10, ((void*)0));

 FUNC_1(VAR_4, VAR_5);

 return VAR_3;
}
