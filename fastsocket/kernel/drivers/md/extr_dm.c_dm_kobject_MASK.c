
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct mapped_device {struct kobject kobj; } ;



struct kobject *FUNC_0(struct mapped_device *VAR_0)
{
 return &VAR_0->kobj;
}
