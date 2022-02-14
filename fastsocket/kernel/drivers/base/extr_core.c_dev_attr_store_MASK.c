
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device_attribute {int (* store ) (struct device*,struct device_attribute*,char const*,size_t) ;} ;
struct device {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*,char const*,size_t) ;
 struct device* FUNC_1 (struct kobject*) ;
 struct device_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct device_attribute *VAR_5 = FUNC_2(VAR_2);
 struct device *VAR_6 = FUNC_1(VAR_1);
 ssize_t VAR_7 = -VAR_0;

 if (VAR_5->store)
  VAR_7 = VAR_5->store(VAR_6, VAR_5, VAR_3, VAR_4);
 return VAR_7;
}
