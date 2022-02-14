
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_class_attribute {int (* show ) (struct sysdev_class*,char*) ;} ;
struct sysdev_class {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct sysdev_class*,char*) ;
 struct sysdev_class* FUNC_1 (struct kobject*) ;
 struct sysdev_class_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
     char *VAR_3)
{
 struct sysdev_class *VAR_4 = FUNC_1(VAR_1);
 struct sysdev_class_attribute *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->show)
  return VAR_5->show(VAR_4, VAR_3);
 return -VAR_0;
}
