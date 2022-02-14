
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct soc_camera_platform_info {int (* set_capture ) (struct soc_camera_platform_info*,int) ;} ;


 int FUNC_0 (struct soc_camera_platform_info*,int) ;
 struct soc_camera_platform_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct soc_camera_platform_info *VAR_2 = FUNC_1(VAR_0);
 return VAR_2->set_capture(VAR_2, VAR_1);
}
