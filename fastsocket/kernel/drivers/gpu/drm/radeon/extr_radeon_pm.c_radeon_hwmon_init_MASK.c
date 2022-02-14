
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int int_thermal_type; TYPE_2__* int_hwmon_dev; } ;
struct radeon_device {int dev; TYPE_1__ pm; int ddev; int family; } ;
struct TYPE_7__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;






 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->pm.int_hwmon_dev = ((void*)0);

 switch (VAR_2->pm.int_thermal_type) {
 case 131:
 case 130:
 case 133:
 case 132:
 case 128:
 case 129:

  if (VAR_2->family == VAR_0)
   return VAR_3;
  VAR_2->pm.int_hwmon_dev = FUNC_4(VAR_2->dev);
  if (FUNC_0(VAR_2->pm.int_hwmon_dev)) {
   VAR_3 = FUNC_1(VAR_2->pm.int_hwmon_dev);
   FUNC_2(VAR_2->dev,
    "Unable to register hwmon device: %d\n", VAR_3);
   break;
  }
  FUNC_3(VAR_2->pm.int_hwmon_dev, VAR_2->ddev);
  VAR_3 = FUNC_6(&VAR_2->pm.int_hwmon_dev->kobj,
      &VAR_1);
  if (VAR_3) {
   FUNC_2(VAR_2->dev,
    "Unable to create hwmon sysfs file: %d\n", VAR_3);
   FUNC_5(VAR_2->dev);
  }
  break;
 default:
  break;
 }

 return VAR_3;
}
