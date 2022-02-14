
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {TYPE_1__* p; } ;
typedef size_t ssize_t ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;
struct TYPE_2__ {int kobj; } ;


 scalar_t__ FUNC_0 (char const*,size_t,int*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0,
       const char *VAR_1, size_t VAR_2)
{
 enum kobject_action VAR_3;

 if (FUNC_0(VAR_1, VAR_2, &VAR_3) == 0)
  FUNC_1(&VAR_0->p->kobj, VAR_3);
 return VAR_2;
}
