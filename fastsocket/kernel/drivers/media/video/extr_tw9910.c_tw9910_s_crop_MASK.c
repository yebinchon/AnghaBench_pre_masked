
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct v4l2_crop {struct v4l2_rect c; } ;
struct tw9910_priv {TYPE_3__* scale; TYPE_2__* info; } ;
struct soc_camera_device {int dummy; } ;
struct TYPE_5__ {struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_6__ {scalar_t__ buswidth; int mpout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 int VAR_14 ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 int FUNC_2 (struct i2c_client*) ;
 TYPE_3__* FUNC_3 (struct soc_camera_device*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,TYPE_3__*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_15, struct v4l2_crop *VAR_16)
{
 struct v4l2_rect *VAR_17 = &VAR_16->c;
 struct i2c_client *VAR_18 = FUNC_6(VAR_15);
 struct tw9910_priv *VAR_19 = FUNC_0(VAR_18);
 struct soc_camera_device *VAR_20 = VAR_18->dev.platform_data;
 int VAR_21 = -VAR_0;
 u8 VAR_22;




 VAR_19->scale = FUNC_3(VAR_20, VAR_17->width, VAR_17->height);
 if (!VAR_19->scale)
  goto tw9910_set_fmt_error;




 FUNC_2(VAR_18);




 VAR_22 = 0x00;
 if (VAR_12 == VAR_19->info->buswidth)
  VAR_22 = VAR_1;

 VAR_21 = FUNC_1(VAR_18, VAR_2, VAR_1, VAR_22);
 if (VAR_21 < 0)
  goto tw9910_set_fmt_error;




 switch (VAR_19->info->mpout) {
 case 128:
  VAR_22 = VAR_11; break;
 case 133:
  VAR_22 = VAR_5; break;
 case 130:
  VAR_22 = VAR_9; break;
 case 129:
  VAR_22 = VAR_10; break;
 case 132:
  VAR_22 = VAR_7; break;
 case 135:
  VAR_22 = VAR_3; break;
 case 134:
  VAR_22 = VAR_4; break;
 case 131:
  VAR_22 = VAR_8; break;
 default:
  VAR_22 = 0;
 }

 VAR_21 = FUNC_1(VAR_18, VAR_13, VAR_6, VAR_22);
 if (VAR_21 < 0)
  goto tw9910_set_fmt_error;




 VAR_21 = FUNC_5(VAR_18, VAR_19->scale);
 if (VAR_21 < 0)
  goto tw9910_set_fmt_error;




 VAR_21 = FUNC_4(VAR_18, &VAR_14);
 if (VAR_21 < 0)
  goto tw9910_set_fmt_error;

 VAR_17->width = VAR_19->scale->width;
 VAR_17->height = VAR_19->scale->height;
 VAR_17->left = 0;
 VAR_17->top = 0;

 return VAR_21;

tw9910_set_fmt_error:

 FUNC_2(VAR_18);
 VAR_19->scale = ((void*)0);

 return VAR_21;
}
