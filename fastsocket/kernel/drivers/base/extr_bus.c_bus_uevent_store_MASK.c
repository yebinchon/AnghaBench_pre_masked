
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bus_type {TYPE_2__* p; } ;
typedef size_t ssize_t ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ subsys; } ;


 scalar_t__ FUNC_0 (char const*,size_t,int*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct bus_type *VAR_0,
    const char *VAR_1, size_t VAR_2)
{
 enum kobject_action VAR_3;

 if (FUNC_0(VAR_1, VAR_2, &VAR_3) == 0)
  FUNC_1(&VAR_0->p->subsys.kobj, VAR_3);
 return VAR_2;
}
