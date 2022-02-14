
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_driver {int ids; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*) ;
 struct xenbus_driver* FUNC_2 (struct device_driver*) ;

int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct xenbus_driver *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->ids)
  return 0;

 return FUNC_0(VAR_2->ids, FUNC_1(VAR_0)) != ((void*)0);
}
