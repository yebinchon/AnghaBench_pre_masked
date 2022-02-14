
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct gendisk {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {struct kobject kobj; } ;


 TYPE_1__* FUNC_0 (struct gendisk*) ;

__attribute__((used)) static struct kobject *FUNC_1(dev_t VAR_0, int *VAR_1, void *VAR_2)
{
 struct gendisk *VAR_3 = VAR_2;

 return &FUNC_0(VAR_3)->kobj;
}
