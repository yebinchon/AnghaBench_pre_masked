
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s5k3e2fx_ctrl {int dummy; } ;
struct msm_camera_sensor_info {int dummy; } ;
typedef int int32_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int fps_divider; int pict_fps_divider; scalar_t__ prev_res; struct msm_camera_sensor_info const* sensordata; int pict_res; int set_test; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct msm_camera_sensor_info const*) ;
 int FUNC_8 (struct msm_camera_sensor_info const*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(const struct msm_camera_sensor_info *VAR_10)
{
 int32_t VAR_11;

 VAR_9 = FUNC_2(sizeof(struct s5k3e2fx_ctrl), VAR_1);
 if (!VAR_9) {
  FUNC_0("s5k3e2fx_init failed!\n");
  VAR_11 = -VAR_0;
  goto init_done;
 }

 VAR_9->fps_divider = 1 * 0x00000400;
 VAR_9->pict_fps_divider = 1 * 0x00000400;
 VAR_9->set_test = VAR_7;
 VAR_9->prev_res = VAR_3;
 VAR_9->pict_res = VAR_2;

 if (VAR_10)
  VAR_9->sensordata = VAR_10;


 FUNC_5(24000000);
 FUNC_3(20);

 FUNC_4();
 FUNC_3(20);

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11 < 0)
  goto init_fail1;

 if (VAR_9->prev_res == VAR_3)
  VAR_11 = FUNC_9(VAR_4, VAR_6);
 else
  VAR_11 = FUNC_9(VAR_4, VAR_5);

 if (VAR_11 < 0) {
  FUNC_0("s5k3e2fx_setting failed. rc = %d\n", VAR_11);
  goto init_fail1;
 }


 if ((VAR_11 = FUNC_6(VAR_8->addr,
   0x3146, 0x3A)) < 0)
  goto init_fail1;

 if ((VAR_11 = FUNC_6(VAR_8->addr,
   0x3130, 0x03)) < 0)
  goto init_fail1;

 goto init_done;

init_fail1:
 FUNC_7(VAR_10);
 FUNC_1(VAR_9);
init_done:
 return VAR_11;
}
