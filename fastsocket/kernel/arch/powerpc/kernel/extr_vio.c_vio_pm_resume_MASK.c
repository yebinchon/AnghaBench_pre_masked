
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct dev_pm_ops {int (* resume ) (struct device*) ;} ;
struct TYPE_2__ {struct dev_pm_ops* pm; } ;


 int FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 const struct dev_pm_ops *VAR_1 = VAR_0->driver ? VAR_0->driver->pm : ((void*)0);

 if (VAR_1 && VAR_1->resume)
  return VAR_1->resume(VAR_0);
 return 0;
}
