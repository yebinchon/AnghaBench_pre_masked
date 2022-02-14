
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int driver; } ;
struct ccwgroup_driver {int owner; } ;
struct ccwgroup_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;
 struct ccwgroup_device* FUNC_4 (struct device*) ;
 struct ccwgroup_driver* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t
FUNC_7 (struct device *VAR_2, struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct ccwgroup_device *VAR_6;
 struct ccwgroup_driver *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_2->driver)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_5(VAR_2->driver);

 if (!FUNC_6(VAR_7->owner))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_4, 0, &VAR_8);
 if (VAR_9)
  goto out;

 if (VAR_8 == 1)
  VAR_9 = FUNC_1(VAR_6);
 else if (VAR_8 == 0)
  VAR_9 = FUNC_0(VAR_6);
 else
  VAR_9 = -VAR_0;
out:
 FUNC_2(VAR_7->owner);
 return (VAR_9 == 0) ? VAR_5 : VAR_9;
}
