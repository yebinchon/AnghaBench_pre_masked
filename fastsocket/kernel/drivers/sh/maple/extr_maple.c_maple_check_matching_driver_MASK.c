
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct maple_driver {int function; } ;
struct TYPE_2__ {int function; } ;
struct maple_device {TYPE_1__ devinfo; } ;
struct device_driver {int dummy; } ;


 int FUNC_0 (int ) ;
 struct maple_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_0,
     void *VAR_1)
{
 struct maple_driver *VAR_2;
 struct maple_device *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_3->devinfo.function & FUNC_0(VAR_2->function))
  return 1;
 return 0;
}
