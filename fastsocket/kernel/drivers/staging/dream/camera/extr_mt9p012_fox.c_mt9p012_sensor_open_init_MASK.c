
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt9p012_ctrl {int dummy; } ;
struct msm_camera_sensor_info {int vcm_pwd; } ;
typedef int int32_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int fps_divider; int pict_fps_divider; scalar_t__ prev_res; struct msm_camera_sensor_info const* sensordata; int pict_res; int set_test; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_2__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct msm_camera_sensor_info const*) ;
 int FUNC_10 (struct msm_camera_sensor_info const*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(const struct msm_camera_sensor_info *VAR_13)
{
 int32_t VAR_14;

 VAR_12 = FUNC_4(sizeof(struct mt9p012_ctrl), VAR_2);
 if (!VAR_12) {
  FUNC_0("mt9p012_init failed!\n");
  VAR_14 = -VAR_0;
  goto init_done;
 }

 VAR_12->fps_divider = 1 * 0x00000400;
 VAR_12->pict_fps_divider = 1 * 0x00000400;
 VAR_12->set_test = VAR_10;
 VAR_12->prev_res = VAR_6;
 VAR_12->pict_res = VAR_1;

 if (VAR_13)
  VAR_12->sensordata = VAR_13;


 FUNC_7(VAR_3);
 FUNC_5(20);

 FUNC_6();
 FUNC_5(20);

 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14 < 0)
  goto init_fail1;

 if (VAR_12->prev_res == VAR_6)
  VAR_14 = FUNC_12(VAR_7, VAR_9);
 else
  VAR_14 = FUNC_12(VAR_7, VAR_8);

 if (VAR_14 < 0) {
  FUNC_0("mt9p012_setting failed. rc = %d\n", VAR_14);
  goto init_fail1;
 }


 FUNC_0("mt9p012_sensor_open_init(): enabling output.\n");
 VAR_14 = FUNC_8(VAR_11->addr,
  VAR_4, VAR_5);
 if (VAR_14 < 0) {
  FUNC_0("sensor output enable failed. rc = %d\n", VAR_14);
  goto init_fail1;
 }
 if (VAR_14 >= 0)
  goto init_done;




init_fail1:
 FUNC_9(VAR_13);
 FUNC_3(VAR_12);
init_done:
 return VAR_14;
}
