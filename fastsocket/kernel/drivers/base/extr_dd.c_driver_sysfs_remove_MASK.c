
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {TYPE_1__* p; } ;
struct device {int kobj; struct device_driver* driver; } ;
struct TYPE_2__ {int kobj; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct device_driver *VAR_1 = VAR_0->driver;

 if (VAR_1) {
  FUNC_1(&VAR_1->p->kobj, FUNC_0(&VAR_0->kobj));
  FUNC_1(&VAR_0->kobj, "driver");
 }
}
