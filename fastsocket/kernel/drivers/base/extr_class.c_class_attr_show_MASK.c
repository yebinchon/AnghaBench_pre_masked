
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct class_private {int class; } ;
struct class_attribute {int (* show ) (int ,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct class_private* FUNC_1 (struct kobject*) ;
 struct class_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
          char *VAR_3)
{
 struct class_attribute *VAR_4 = FUNC_2(VAR_2);
 struct class_private *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_4->show)
  VAR_6 = VAR_4->show(VAR_5->class, VAR_3);
 return VAR_6;
}
