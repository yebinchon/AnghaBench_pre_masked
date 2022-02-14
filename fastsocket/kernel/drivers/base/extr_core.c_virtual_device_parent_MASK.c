
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 TYPE_1__* VAR_0 ;
 struct kobject* FUNC_0 (char*,int *) ;

__attribute__((used)) static struct kobject *FUNC_1(struct device *VAR_1)
{
 static struct kobject *VAR_2 = ((void*)0);

 if (!VAR_2)
  VAR_2 = FUNC_0("virtual",
           &VAR_0->kobj);

 return VAR_2;
}
