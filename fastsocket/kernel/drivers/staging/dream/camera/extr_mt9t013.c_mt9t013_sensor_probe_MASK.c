
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sensor_ctrl {int s_config; int s_release; int s_init; } ;
struct msm_camera_sensor_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct msm_camera_sensor_info const*) ;
 int VAR_4 ;
 int FUNC_5 (struct msm_camera_sensor_info const*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(
  const struct msm_camera_sensor_info *VAR_7,
  struct msm_sensor_ctrl *VAR_8)
{


 int VAR_9 = FUNC_0(&VAR_3);
 if (VAR_9 < 0 || VAR_2 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto probe_done;
 }


 FUNC_3(VAR_1);
 FUNC_2(20);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_3);
  goto probe_done;
 }

 VAR_8->s_init = VAR_5;
 VAR_8->s_release = VAR_6;
 VAR_8->s_config = VAR_4;
 FUNC_5(VAR_7);

probe_done:
 return VAR_9;
}
