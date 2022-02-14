
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_driver {int (* remove ) (struct device*) ;} ;
struct device {TYPE_3__* bus; TYPE_1__* p; struct device_driver* driver; } ;
struct TYPE_6__ {TYPE_2__* p; int (* remove ) (struct device*) ;} ;
struct TYPE_5__ {int bus_notifier; } ;
struct TYPE_4__ {int knode_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2)
{
 struct device_driver *VAR_3;

 VAR_3 = VAR_2->driver;
 if (VAR_3) {
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);

  FUNC_2(VAR_2);

  if (VAR_2->bus)
   FUNC_0(&VAR_2->bus->p->bus_notifier,
           VAR_0,
           VAR_2);

  if (VAR_2->bus && VAR_2->bus->remove)
   VAR_2->bus->remove(VAR_2);
  else if (VAR_3->remove)
   VAR_3->remove(VAR_2);
  FUNC_1(VAR_2);
  VAR_2->driver = ((void*)0);
  FUNC_3(&VAR_2->p->knode_driver);
  if (VAR_2->bus)
   FUNC_0(&VAR_2->bus->p->bus_notifier,
           VAR_1,
           VAR_2);

  FUNC_6(VAR_2);
 }
}
