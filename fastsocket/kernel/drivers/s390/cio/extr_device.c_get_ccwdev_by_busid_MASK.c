
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct ccw_driver {int driver; } ;
struct ccw_device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct device_driver*,int *,void*,int ) ;
 struct device_driver* FUNC_1 (int *) ;
 int FUNC_2 (struct device_driver*) ;
 struct ccw_device* FUNC_3 (struct device*) ;

struct ccw_device *FUNC_4(struct ccw_driver *VAR_1,
           const char *VAR_2)
{
 struct device *VAR_3;
 struct device_driver *VAR_4;

 VAR_4 = FUNC_1(&VAR_1->driver);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_4, ((void*)0), (void *)VAR_2,
     VAR_0);
 FUNC_2(VAR_4);

 return VAR_3 ? FUNC_3(VAR_3) : ((void*)0);
}
