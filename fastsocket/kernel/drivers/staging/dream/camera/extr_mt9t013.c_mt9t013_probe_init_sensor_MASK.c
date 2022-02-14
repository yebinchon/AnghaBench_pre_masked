
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct msm_camera_sensor_info {int sensor_reset; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct msm_camera_sensor_info *VAR_7)
{
 int VAR_8;
 uint16_t VAR_9;

 VAR_8 = FUNC_3(VAR_7->sensor_reset, "mt9t013");
 if (!VAR_8)
  FUNC_1(VAR_7->sensor_reset, 1);
 else
  goto init_probe_done;

 FUNC_4(20);


 VAR_8 = FUNC_6(VAR_6->addr,
  VAR_3, 0x1009);
 if (VAR_8 < 0)
  goto init_probe_fail;


 VAR_8 = FUNC_5(VAR_6->addr,
  VAR_2, &VAR_9);

 if (VAR_8 < 0)
  goto init_probe_fail;

 FUNC_0("mt9t013 model_id = 0x%x\n", VAR_9);


 if (VAR_9 != VAR_1) {
  VAR_8 = -VAR_0;
  goto init_probe_fail;
 }

 VAR_8 = FUNC_6(VAR_6->addr,
  0x3064, 0x0805);
 if (VAR_8 < 0)
  goto init_probe_fail;

 FUNC_4(VAR_4);

 goto init_probe_done;
init_probe_fail:
 FUNC_1(VAR_7->sensor_reset, 0);
 FUNC_2(VAR_7->sensor_reset);
init_probe_done:
 return VAR_8;
}
