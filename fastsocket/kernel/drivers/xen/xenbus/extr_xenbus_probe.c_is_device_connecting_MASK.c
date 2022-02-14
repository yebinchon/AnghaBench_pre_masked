
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_driver {int (* is_ready ) (struct xenbus_device*) ;} ;
struct xenbus_device {scalar_t__ state; } ;
struct device_driver {int dummy; } ;
struct device {struct device_driver* driver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xenbus_device*) ;
 struct xenbus_device* FUNC_1 (struct device*) ;
 struct xenbus_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct xenbus_device *VAR_3 = FUNC_1(VAR_1);
 struct device_driver *VAR_4 = VAR_2;
 struct xenbus_driver *VAR_5;





 if (!VAR_1->driver)
  return 0;


 if (VAR_4 && (VAR_1->driver != VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_1->driver);
 return (VAR_3->state < VAR_0 ||
  (VAR_3->state == VAR_0 &&
   VAR_5->is_ready && !VAR_5->is_ready(VAR_3)));
}
