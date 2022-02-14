
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_sync {int list; } ;
struct msm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (struct msm_device*) ;
 struct msm_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct msm_device*,struct msm_sync*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct msm_sync*) ;
 int FUNC_10 (struct msm_sync*,struct platform_device*,int (*) (struct msm_camera_sensor_info const*,struct msm_sensor_ctrl*)) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(struct platform_device *VAR_8,
  int (*VAR_9)(const struct msm_camera_sensor_info *,
   struct msm_sensor_ctrl *))
{
 struct msm_device *VAR_10 = ((void*)0);
 struct msm_sync *VAR_11;
 int VAR_12 = -VAR_0;
 static int VAR_13;

 if (VAR_13 >= VAR_3) {
  FUNC_11("msm_camera: too many camera sensors\n");
  return VAR_12;
 }

 if (!VAR_5) {

  VAR_12 = FUNC_3(&VAR_6, 0,
    3 * VAR_3,
    "msm_camera");
  if (VAR_12 < 0) {
   FUNC_11("msm_camera: failed to allocate chrdev: %d\n",
    VAR_12);
   return VAR_12;
  }

  VAR_5 = FUNC_4(VAR_4, "msm_camera");
  if (FUNC_1(VAR_5)) {
   VAR_12 = FUNC_2(VAR_5);
   FUNC_11("msm_camera: create device class failed: %d\n",
    VAR_12);
   return VAR_12;
  }
 }

 VAR_10 = FUNC_6(sizeof(struct msm_device) * 3 +
   sizeof(struct msm_sync), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = (struct msm_sync *)(VAR_10 + 3);

 VAR_12 = FUNC_10(VAR_11, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_5(VAR_10);
  return VAR_12;
 }

 FUNC_0("setting camera node %d\n", VAR_13);
 VAR_12 = FUNC_8(VAR_10, VAR_11, VAR_13);
 if (VAR_12 < 0) {
  FUNC_9(VAR_11);
  FUNC_5(VAR_10);
  return VAR_12;
 }

 VAR_13++;
 FUNC_7(&VAR_11->list, &VAR_7);
 return VAR_12;
}
