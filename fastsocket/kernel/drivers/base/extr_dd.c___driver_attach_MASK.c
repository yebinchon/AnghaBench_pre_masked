
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {TYPE_1__* parent; int sem; int driver; } ;
struct TYPE_2__ {int sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device_driver*,struct device*) ;
 int FUNC_2 (struct device_driver*,struct device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct device_driver *VAR_2 = VAR_1;
 if (!FUNC_1(VAR_2, VAR_0))
  return 0;

 if (VAR_0->parent)
  FUNC_0(&VAR_0->parent->sem);
 FUNC_0(&VAR_0->sem);
 if (!VAR_0->driver)
  FUNC_2(VAR_2, VAR_0);
 FUNC_3(&VAR_0->sem);
 if (VAR_0->parent)
  FUNC_3(&VAR_0->parent->sem);

 return 0;
}
