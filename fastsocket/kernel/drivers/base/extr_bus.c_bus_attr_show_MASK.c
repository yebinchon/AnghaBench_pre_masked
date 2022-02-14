
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct bus_type_private {int bus; } ;
struct bus_attribute {int (* show ) (int ,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 struct bus_type_private* FUNC_1 (struct kobject*) ;
 struct bus_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct attribute *VAR_1,
        char *VAR_2)
{
 struct bus_attribute *VAR_3 = FUNC_2(VAR_1);
 struct bus_type_private *VAR_4 = FUNC_1(VAR_0);
 ssize_t VAR_5 = 0;

 if (VAR_3->show)
  VAR_5 = VAR_3->show(VAR_4->bus, VAR_2);
 return VAR_5;
}
