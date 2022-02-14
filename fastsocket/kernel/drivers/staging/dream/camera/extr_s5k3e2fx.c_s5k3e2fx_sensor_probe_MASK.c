
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sensor_ctrl {int s_config; int s_release; int s_init; } ;
struct msm_camera_sensor_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct msm_camera_sensor_info const*) ;
 int FUNC_5 (struct msm_camera_sensor_info const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(const struct msm_camera_sensor_info *VAR_6,
  struct msm_sensor_ctrl *VAR_7)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_1(&VAR_2);
 if (VAR_8 < 0 || VAR_1 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto probe_fail;
 }

 FUNC_3(24000000);
 FUNC_2(20);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 < 0)
  goto probe_fail;

 VAR_7->s_init = VAR_4;
 VAR_7->s_release = VAR_5;
 VAR_7->s_config = VAR_3;
 FUNC_4(VAR_6);

 return VAR_8;

probe_fail:
 FUNC_0("SENSOR PROBE FAILS!\n");
 return VAR_8;
}
