
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int colorspace; int code; int field; } ;
struct tw9910_scale_ctrl {int height; int width; } ;
struct soc_camera_device {int dummy; } ;
struct TYPE_2__ {struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 struct tw9910_scale_ctrl* FUNC_1 (struct soc_camera_device*,int ,int ) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5,
     struct v4l2_mbus_framefmt *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_2(VAR_5);
 struct soc_camera_device *VAR_8 = VAR_7->dev.platform_data;
 const struct tw9910_scale_ctrl *VAR_9;

 if (VAR_2 == VAR_6->field) {
  VAR_6->field = VAR_3;
 } else if (VAR_3 != VAR_6->field) {
  FUNC_0(&VAR_7->dev, "Field type %d invalid.\n", VAR_6->field);
  return -VAR_0;
 }

 VAR_6->code = VAR_4;
 VAR_6->colorspace = VAR_1;




 VAR_9 = FUNC_1(VAR_8, VAR_6->width, VAR_6->height);
 if (!VAR_9)
  return -VAR_0;

 VAR_6->width = VAR_9->width;
 VAR_6->height = VAR_9->height;

 return 0;
}
