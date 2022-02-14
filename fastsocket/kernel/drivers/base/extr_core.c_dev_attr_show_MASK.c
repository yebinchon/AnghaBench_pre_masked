
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device_attribute {scalar_t__ (* show ) (struct device*,struct device_attribute*,char*) ;} ;
struct device {int dummy; } ;
struct attribute {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;
 scalar_t__ FUNC_1 (struct device*,struct device_attribute*,char*) ;
 struct device* FUNC_2 (struct kobject*) ;
 struct device_attribute* FUNC_3 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_2, struct attribute *VAR_3,
        char *VAR_4)
{
 struct device_attribute *VAR_5 = FUNC_3(VAR_3);
 struct device *VAR_6 = FUNC_2(VAR_2);
 ssize_t VAR_7 = -VAR_0;

 if (VAR_5->show)
  VAR_7 = VAR_5->show(VAR_6, VAR_5, VAR_4);
 if (VAR_7 >= (ssize_t)VAR_1) {
  FUNC_0("dev_attr_show: %s returned bad count\n",
    (unsigned long)VAR_5->show);
 }
 return VAR_7;
}
