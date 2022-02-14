
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct led_classdev*,unsigned long) ;
 int FUNC_3 (struct led_classdev*) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_0(VAR_2);
 ssize_t VAR_7 = -VAR_0;
 char *VAR_8;
 unsigned long VAR_9 = FUNC_4(VAR_4, &VAR_8, 10);
 size_t VAR_10 = VAR_8 - VAR_4;

 if (FUNC_1(*VAR_8))
  VAR_10++;

 if (VAR_10 == VAR_5) {
  VAR_7 = VAR_10;

  if (VAR_9 == VAR_1)
   FUNC_3(VAR_6);
  FUNC_2(VAR_6, VAR_9);
 }

 return VAR_7;
}
