
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mt9d112_ctrl {int dummy; } ;
struct msm_camera_sensor_info {int dummy; } ;
struct TYPE_4__ {struct msm_camera_sensor_info const* sensordata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (struct msm_camera_sensor_info const*) ;

int FUNC_7(const struct msm_camera_sensor_info *VAR_3)
{
 int VAR_4 = 0;

 VAR_2 = FUNC_2(sizeof(struct mt9d112_ctrl), VAR_1);
 if (!VAR_2) {
  FUNC_0("mt9d112_init failed!\n");
  VAR_4 = -VAR_0;
  goto init_done;
 }

 if (VAR_3)
  VAR_2->sensordata = VAR_3;


 FUNC_5(24000000);
 FUNC_3(5);

 FUNC_4();

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0("mt9d112_sensor_init failed!\n");
  goto init_fail;
 }

init_done:
 return VAR_4;

init_fail:
 FUNC_1(VAR_2);
 return VAR_4;
}
