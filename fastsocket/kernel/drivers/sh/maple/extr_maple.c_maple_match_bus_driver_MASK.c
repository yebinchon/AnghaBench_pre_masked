
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct maple_driver {int function; } ;
struct TYPE_2__ {int function; } ;
struct maple_device {TYPE_1__ devinfo; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct maple_device* FUNC_1 (struct device*) ;
 struct maple_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
      struct device_driver *VAR_1)
{
 struct maple_driver *VAR_2 = FUNC_2(VAR_1);
 struct maple_device *VAR_3 = FUNC_1(VAR_0);


 if (VAR_3->devinfo.function == 0xFFFFFFFF)
  return 0;
 else if (VAR_3->devinfo.function &
   FUNC_0(VAR_2->function))
  return 1;
 return 0;
}
