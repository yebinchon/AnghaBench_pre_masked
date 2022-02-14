
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* sensor; } ;
struct TYPE_7__ {scalar_t__ (* init_thermal_sensor_thresh ) (TYPE_6__*) ;} ;
struct TYPE_11__ {TYPE_4__ thermal_sensor_data; TYPE_1__ ops; } ;
struct TYPE_12__ {TYPE_5__ mac; } ;
struct hwmon_buff {int device; int hwmon_list; } ;
struct ixgbe_adapter {TYPE_6__ hw; TYPE_2__* pdev; struct hwmon_buff ixgbe_hwmon_buff; } ;
struct hwmon_attr {int dummy; } ;
struct TYPE_9__ {scalar_t__ location; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbe_adapter*,unsigned int,int ) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (int,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;

int FUNC_7(struct ixgbe_adapter *VAR_7)
{
 struct hwmon_buff *VAR_8 = &VAR_7->ixgbe_hwmon_buff;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11 = 0;


 if (VAR_7->hw.mac.ops.init_thermal_sensor_thresh == ((void*)0)) {
  goto exit;
 }


 if (VAR_7->hw.mac.ops.init_thermal_sensor_thresh(&VAR_7->hw))
  goto exit;





 VAR_10 = VAR_6 * 4;
 VAR_8->hwmon_list = FUNC_5(VAR_10, sizeof(struct hwmon_attr),
       VAR_1);
 if (!VAR_8->hwmon_list) {
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_8->device = FUNC_2(&VAR_7->pdev->dev);
 if (FUNC_0(VAR_8->device)) {
  VAR_11 = FUNC_1(VAR_8->device);
  goto err;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {




  if (VAR_7->hw.mac.thermal_sensor_data.sensor[VAR_9].location == 0)
   continue;


  VAR_11 = FUNC_3(VAR_7, VAR_9, VAR_2);
  VAR_11 |= FUNC_3(VAR_7, VAR_9, VAR_3);
  VAR_11 |= FUNC_3(VAR_7, VAR_9, VAR_5);
  VAR_11 |= FUNC_3(VAR_7, VAR_9, VAR_4);
  if (VAR_11)
   goto err;
 }

 goto exit;

err:
 FUNC_4(VAR_7);
exit:
 return VAR_11;
}
