
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 struct ccw_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 struct ccw_device *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_2(VAR_2, 16, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_3(VAR_0);

 switch (VAR_6) {
 case 0:
  VAR_5 = FUNC_0(VAR_4);
  break;
 case 1:
  VAR_5 = FUNC_1(VAR_4);
  break;
 }

 return VAR_3;
}
