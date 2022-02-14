
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dbg_chip_ident {int dummy; } ;
struct soc_camera_device {int dummy; } ;
struct file {struct soc_camera_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,struct v4l2_dbg_chip_ident*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
       struct v4l2_dbg_chip_ident *VAR_4)
{
 struct soc_camera_device *VAR_5 = VAR_2->private_data;
 struct v4l2_subdev *VAR_6 = FUNC_0(VAR_5);

 return FUNC_1(VAR_6, VAR_0, VAR_1, VAR_4);
}
