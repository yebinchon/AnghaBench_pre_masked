
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {unsigned long maximum; unsigned long minimum; unsigned long default_value; } ;
struct v4l2_control {int id; unsigned long value; } ;
struct TYPE_2__ {int const height; } ;
struct mt9t031 {unsigned long gain; int exposure; int autoexposure; int const y_skip_top; TYPE_1__ rect; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_client*,int*) ;
 struct v4l2_queryctrl* VAR_8 ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (struct i2c_client*,int const) ;
 struct mt9t031* FUNC_7 (struct i2c_client*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_9, struct v4l2_control *VAR_10)
{
 struct i2c_client *VAR_11 = FUNC_8(VAR_9);
 struct mt9t031 *VAR_12 = FUNC_7(VAR_11);
 const struct v4l2_queryctrl *VAR_13;
 int VAR_14;

 switch (VAR_10->id) {
 case 128:
  if (VAR_10->value)
   VAR_14 = FUNC_4(VAR_11, VAR_6, 0x8000);
  else
   VAR_14 = FUNC_2(VAR_11, VAR_6, 0x8000);
  if (VAR_14 < 0)
   return -VAR_1;
  break;
 case 129:
  if (VAR_10->value)
   VAR_14 = FUNC_4(VAR_11, VAR_6, 0x4000);
  else
   VAR_14 = FUNC_2(VAR_11, VAR_6, 0x4000);
  if (VAR_14 < 0)
   return -VAR_1;
  break;
 case 130:
  VAR_13 = &VAR_8[VAR_3];
  if (VAR_10->value > VAR_13->maximum || VAR_10->value < VAR_13->minimum)
   return -VAR_0;

  if (VAR_10->value <= VAR_13->default_value) {

   unsigned long VAR_15 = VAR_13->default_value - VAR_13->minimum;
   VAR_14 = ((VAR_10->value - VAR_13->minimum) * 8 + VAR_15 / 2) / VAR_15;

   FUNC_0(&VAR_11->dev, "Setting gain %d\n", VAR_14);
   VAR_14 = FUNC_5(VAR_11, VAR_4, VAR_14);
   if (VAR_14 < 0)
    return -VAR_1;
  } else {


   unsigned long VAR_16 = VAR_13->maximum - VAR_13->default_value - 1;

   unsigned long VAR_17 = ((VAR_10->value - VAR_13->default_value - 1) *
            1015 + VAR_16 / 2) / VAR_16 + 9;

   if (VAR_17 <= 32)
    VAR_14 = VAR_17;
   else if (VAR_17 <= 64)
    VAR_14 = ((VAR_17 - 32) * 16 + 16) / 32 + 80;
   else

    VAR_14 = (((VAR_17 - 64 + 7) * 32) & 0xff00) | 0x60;

   FUNC_0(&VAR_11->dev, "Set gain from 0x%x to 0x%x\n",
    FUNC_3(VAR_11, VAR_4), VAR_14);
   VAR_14 = FUNC_5(VAR_11, VAR_4, VAR_14);
   if (VAR_14 < 0)
    return -VAR_1;
  }


  VAR_12->gain = VAR_10->value;
  break;
 case 132:
  VAR_13 = &VAR_8[VAR_2];

  if (VAR_10->value > VAR_13->maximum || VAR_10->value < VAR_13->minimum)
   return -VAR_0;
  else {
   const unsigned long VAR_18 = VAR_13->maximum - VAR_13->minimum;
   const u32 VAR_19 = ((VAR_10->value - VAR_13->minimum) * 1048 +
          VAR_18 / 2) / VAR_18 + 1;
   u32 VAR_20;

   FUNC_1(VAR_11, &VAR_20);
   FUNC_0(&VAR_11->dev, "Set shutter from %u to %u\n",
    VAR_20, VAR_19);
   if (FUNC_6(VAR_11, VAR_19) < 0)
    return -VAR_1;
   VAR_12->exposure = VAR_10->value;
   VAR_12->autoexposure = 0;
  }
  break;
 case 131:
  if (VAR_10->value) {
   const u16 VAR_21 = VAR_7;
   const u32 VAR_22 = VAR_5 + VAR_21;
   unsigned int VAR_23 = VAR_12->rect.height +
    VAR_12->y_skip_top + VAR_21;

   if (FUNC_6(VAR_11, VAR_23) < 0)
    return -VAR_1;
   VAR_13 = &VAR_8[VAR_2];
   VAR_12->exposure = (VAR_22 / 2 + (VAR_23 - 1) *
     (VAR_13->maximum - VAR_13->minimum)) /
    VAR_22 + VAR_13->minimum;
   VAR_12->autoexposure = 1;
  } else
   VAR_12->autoexposure = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
