
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo_driver {scalar_t__ devid; } ;
struct locomo_dev {scalar_t__ devid; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct locomo_dev* FUNC_0 (struct device*) ;
 struct locomo_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct locomo_dev *VAR_2 = FUNC_0(VAR_0);
 struct locomo_driver *VAR_3 = FUNC_1(VAR_1);

 return VAR_2->devid == VAR_3->devid;
}
