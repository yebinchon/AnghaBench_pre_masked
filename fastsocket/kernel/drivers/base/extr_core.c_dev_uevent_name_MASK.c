
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kset {int dummy; } ;
struct kobject {int dummy; } ;
struct device {TYPE_2__* class; TYPE_1__* bus; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* name; } ;


 struct device* FUNC_0 (struct kobject*) ;

__attribute__((used)) static const char *FUNC_1(struct kset *VAR_0, struct kobject *VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->bus)
  return VAR_2->bus->name;
 if (VAR_2->class)
  return VAR_2->class->name;
 return ((void*)0);
}
