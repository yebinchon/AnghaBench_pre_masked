
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {unsigned long maximum; unsigned long minimum; unsigned long default_value; } ;
struct v4l2_control {int const id; unsigned long value; } ;
struct soc_camera_device {int * ops; } ;
struct TYPE_3__ {unsigned int const height; } ;
struct mt9m001 {unsigned long gain; int exposure; int autoexposure; unsigned int const y_skip_top; TYPE_1__ rect; } ;
struct TYPE_4__ {struct soc_camera_device* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (TYPE_2__*,char*,int,...) ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,unsigned int) ;
 struct v4l2_queryctrl* FUNC_5 (int *,int const) ;
 struct mt9m001* FUNC_6 (struct i2c_client*) ;
 struct i2c_client* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_6, struct v4l2_control *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_6);
 struct mt9m001 *VAR_9 = FUNC_6(VAR_8);
 struct soc_camera_device *VAR_10 = VAR_8->dev.platform_data;
 const struct v4l2_queryctrl *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(&VAR_5, VAR_7->id);

 if (!VAR_11)
  return -VAR_0;

 switch (VAR_7->id) {
 case 128:
  if (VAR_7->value)
   VAR_12 = FUNC_3(VAR_8, VAR_3, 0x8000);
  else
   VAR_12 = FUNC_1(VAR_8, VAR_3, 0x8000);
  if (VAR_12 < 0)
   return -VAR_1;
  break;
 case 129:
  if (VAR_7->value > VAR_11->maximum || VAR_7->value < VAR_11->minimum)
   return -VAR_0;

  if (VAR_7->value <= VAR_11->default_value) {

   unsigned long VAR_13 = VAR_11->default_value - VAR_11->minimum;
   VAR_12 = ((VAR_7->value - VAR_11->minimum) * 8 + VAR_13 / 2) / VAR_13;

   FUNC_0(&VAR_8->dev, "Setting gain %d\n", VAR_12);
   VAR_12 = FUNC_4(VAR_8, VAR_2, VAR_12);
   if (VAR_12 < 0)
    return -VAR_1;
  } else {


   unsigned long VAR_14 = VAR_11->maximum - VAR_11->default_value - 1;
   unsigned long VAR_15 = ((VAR_7->value - VAR_11->default_value - 1) *
            111 + VAR_14 / 2) / VAR_14 + 9;

   if (VAR_15 <= 32)
    VAR_12 = VAR_15;
   else if (VAR_15 <= 64)
    VAR_12 = ((VAR_15 - 32) * 16 + 16) / 32 + 80;
   else
    VAR_12 = ((VAR_15 - 64) * 7 + 28) / 56 + 96;

   FUNC_0(&VAR_8->dev, "Setting gain from %d to %d\n",
     FUNC_2(VAR_8, VAR_2), VAR_12);
   VAR_12 = FUNC_4(VAR_8, VAR_2, VAR_12);
   if (VAR_12 < 0)
    return -VAR_1;
  }


  VAR_9->gain = VAR_7->value;
  break;
 case 131:

  if (VAR_7->value > VAR_11->maximum || VAR_7->value < VAR_11->minimum)
   return -VAR_0;
  else {
   unsigned long VAR_16 = VAR_11->maximum - VAR_11->minimum;
   unsigned long VAR_17 = ((VAR_7->value - VAR_11->minimum) * 1048 +
       VAR_16 / 2) / VAR_16 + 1;

   FUNC_0(&VAR_8->dev,
    "Setting shutter width from %d to %lu\n",
    FUNC_2(VAR_8, VAR_4),
    VAR_17);
   if (FUNC_4(VAR_8, VAR_4, VAR_17) < 0)
    return -VAR_1;
   VAR_9->exposure = VAR_7->value;
   VAR_9->autoexposure = 0;
  }
  break;
 case 130:
  if (VAR_7->value) {
   const u16 VAR_18 = 25;
   unsigned int VAR_19 = VAR_9->rect.height +
    VAR_9->y_skip_top + VAR_18;
   if (FUNC_4(VAR_8, VAR_4,
          VAR_19) < 0)
    return -VAR_1;
   VAR_11 = FUNC_5(VAR_10->ops, 131);
   VAR_9->exposure = (524 + (VAR_19 - 1) *
     (VAR_11->maximum - VAR_11->minimum)) /
    1048 + VAR_11->minimum;
   VAR_9->autoexposure = 1;
  } else
   VAR_9->autoexposure = 0;
  break;
 }
 return 0;
}
