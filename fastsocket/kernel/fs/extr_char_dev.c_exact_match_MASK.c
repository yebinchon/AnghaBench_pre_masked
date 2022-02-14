
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cdev {struct kobject kobj; } ;
typedef int dev_t ;



__attribute__((used)) static struct kobject *FUNC_0(dev_t VAR_0, int *VAR_1, void *VAR_2)
{
 struct cdev *VAR_3 = VAR_2;
 return &VAR_3->kobj;
}
