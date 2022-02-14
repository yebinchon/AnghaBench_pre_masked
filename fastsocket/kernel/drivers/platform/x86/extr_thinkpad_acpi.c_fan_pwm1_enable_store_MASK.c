
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_2(VAR_8, 2, &VAR_10))
  return -VAR_0;

 FUNC_3("hwmon pwm1_enable",
   "set fan mode to %lu\n", VAR_10);

 switch (VAR_10) {
 case 0:
  VAR_12 = VAR_5;
  break;
 case 1:
  VAR_12 = VAR_3;
  break;
 case 2:
  VAR_12 = VAR_4;
  break;
 case 3:

  return -VAR_1;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_0(VAR_12);
 if (VAR_11 == -VAR_2)
  return -VAR_0;
 else if (VAR_11 < 0)
  return VAR_11;

 FUNC_1();

 return VAR_9;
}
