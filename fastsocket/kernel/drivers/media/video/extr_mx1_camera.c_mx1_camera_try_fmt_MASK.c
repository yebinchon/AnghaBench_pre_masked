
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_format {int dummy; } ;
struct soc_camera_device {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,struct v4l2_format*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_2,
         struct v4l2_format *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_0(VAR_2);



 return FUNC_1(VAR_4, VAR_1, VAR_0, VAR_3);
}
