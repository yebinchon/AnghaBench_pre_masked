
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* action; } ;
struct TYPE_3__ {char* name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
          struct kobj_attribute *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%s\n", VAR_0.action->name);
}
