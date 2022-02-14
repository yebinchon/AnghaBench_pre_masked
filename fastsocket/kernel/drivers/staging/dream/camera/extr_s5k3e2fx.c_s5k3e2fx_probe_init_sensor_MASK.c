
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct msm_camera_sensor_info {int sensor_reset; } ;
typedef int int32_t ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (struct msm_camera_sensor_info const*) ;

__attribute__((used)) static int FUNC_6(const struct msm_camera_sensor_info *VAR_4)
{
 int32_t VAR_5;
 uint16_t VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_4->sensor_reset, "s5k3e2fx");
 if (!VAR_5)
  FUNC_1(VAR_4->sensor_reset, 1);
 else
  goto init_probe_done;

 FUNC_3(20);

 FUNC_0("s5k3e2fx_sensor_init(): reseting sensor.\n");

 VAR_5 = FUNC_4(VAR_3->addr,
  VAR_2, &VAR_6);
 if (VAR_5 < 0)
  goto init_probe_fail;

 if (VAR_6 != VAR_1) {
  FUNC_0("S5K3E2FX wrong model_id = 0x%x\n", VAR_6);
  VAR_5 = -VAR_0;
  goto init_probe_fail;
 }

 goto init_probe_done;

init_probe_fail:
 FUNC_5(VAR_4);
init_probe_done:
 return VAR_5;
}
