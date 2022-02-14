
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct soc_camera_platform_info {TYPE_1__ format; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;


 int VAR_0 ;
 struct soc_camera_platform_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, unsigned int VAR_2,
     enum v4l2_mbus_pixelcode *VAR_3)
{
 struct soc_camera_platform_info *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2)
  return -VAR_0;

 *VAR_3 = VAR_4->format.code;
 return 0;
}
