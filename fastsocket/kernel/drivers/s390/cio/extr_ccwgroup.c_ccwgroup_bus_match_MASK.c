
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ccwgroup_driver {scalar_t__ driver_id; } ;
struct ccwgroup_device {scalar_t__ creator_id; } ;


 struct ccwgroup_device* FUNC_0 (struct device*) ;
 struct ccwgroup_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int
FUNC_2 (struct device * VAR_0, struct device_driver * VAR_1)
{
 struct ccwgroup_device *VAR_2;
 struct ccwgroup_driver *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->creator_id == VAR_3->driver_id)
  return 1;

 return 0;
}
