
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mt9t013_ctrl {int dummy; } ;
struct msm_camera_sensor_info {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {int fps_divider; int pict_fps_divider; scalar_t__ prev_res; struct msm_camera_sensor_info const* sensordata; int pict_res; int set_test; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 (struct msm_camera_sensor_info const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;

int FUNC_9(const struct msm_camera_sensor_info *VAR_10)
{
 int32_t VAR_11;

 VAR_9 = FUNC_1(sizeof(struct mt9t013_ctrl), VAR_2);
 if (!VAR_9) {
  FUNC_8("mt9t013_init failed!\n");
  VAR_11 = -VAR_0;
  goto init_done;
 }

 VAR_9->fps_divider = 1 * 0x00000400;
 VAR_9->pict_fps_divider = 1 * 0x00000400;
 VAR_9->set_test = VAR_8;
 VAR_9->prev_res = VAR_4;
 VAR_9->pict_res = VAR_1;

 if (VAR_10)
  VAR_9->sensordata = VAR_10;


 FUNC_4(VAR_3);
 FUNC_2(20);

 FUNC_3();
 FUNC_2(20);

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0)
  goto init_fail;

 if (VAR_9->prev_res == VAR_4)
  VAR_11 = FUNC_7(VAR_5, VAR_7);
 else
  VAR_11 = FUNC_7(VAR_5, VAR_6);

 if (VAR_11 >= 0)
  VAR_11 = FUNC_5();

 if (VAR_11 < 0)
  goto init_fail;
 else
  goto init_done;

init_fail:
 FUNC_0(VAR_9);
init_done:
 return VAR_11;
}
