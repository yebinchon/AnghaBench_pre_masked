
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {unsigned long maximum; unsigned long minimum; } ;
struct v4l2_control {int id; unsigned long value; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int *,char*,int ,unsigned long) ;
 int VAR_6 ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,unsigned long) ;
 struct v4l2_queryctrl* FUNC_5 (int *,int) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_7, struct v4l2_control *VAR_8)
{
 int VAR_9;
 struct i2c_client *VAR_10 = FUNC_6(VAR_7);
 const struct v4l2_queryctrl *VAR_11;

 VAR_11 = FUNC_5(&VAR_6, VAR_8->id);
 if (!VAR_11)
  return -VAR_0;

 switch (VAR_8->id) {
 case 128:
  if (VAR_8->value)
   VAR_9 = FUNC_3(VAR_10, VAR_4, 0x10);
  else
   VAR_9 = FUNC_1(VAR_10, VAR_4, 0x10);
  if (VAR_9 < 0)
   return -VAR_1;
  break;
 case 129:
  if (VAR_8->value)
   VAR_9 = FUNC_3(VAR_10, VAR_4, 0x20);
  else
   VAR_9 = FUNC_1(VAR_10, VAR_4, 0x20);
  if (VAR_9 < 0)
   return -VAR_1;
  break;
 case 130:

  if (VAR_8->value > VAR_11->maximum || VAR_8->value < VAR_11->minimum)
   return -VAR_0;
  else {
   unsigned long VAR_12 = VAR_11->maximum - VAR_11->minimum;

   unsigned long VAR_13 = ((VAR_8->value - VAR_11->minimum) *
           48 + VAR_12 / 2) / VAR_12 + 16;
   if (VAR_13 >= 32)
    VAR_13 &= ~1;





   if (FUNC_1(VAR_10, VAR_2, 0x2) < 0)
    return -VAR_1;

   FUNC_0(&VAR_10->dev, "Setting gain from %d to %lu\n",
    FUNC_2(VAR_10, VAR_3), VAR_13);
   if (FUNC_4(VAR_10, VAR_3, VAR_13) < 0)
    return -VAR_1;
  }
  break;
 case 132:

  if (VAR_8->value > VAR_11->maximum || VAR_8->value < VAR_11->minimum)
   return -VAR_0;
  else {
   unsigned long VAR_14 = VAR_11->maximum - VAR_11->minimum;
   unsigned long VAR_15 = ((VAR_8->value - VAR_11->minimum) *
       479 + VAR_14 / 2) / VAR_14 + 1;





   if (FUNC_1(VAR_10, VAR_2, 0x1) < 0)
    return -VAR_1;

   FUNC_0(&VAR_10->dev, "Shutter width from %d to %lu\n",
    FUNC_2(VAR_10, VAR_5),
    VAR_15);
   if (FUNC_4(VAR_10, VAR_5,
          VAR_15) < 0)
    return -VAR_1;
  }
  break;
 case 133:
  if (VAR_8->value)
   VAR_9 = FUNC_3(VAR_10, VAR_2, 0x2);
  else
   VAR_9 = FUNC_1(VAR_10, VAR_2, 0x2);
  if (VAR_9 < 0)
   return -VAR_1;
  break;
 case 131:
  if (VAR_8->value)
   VAR_9 = FUNC_3(VAR_10, VAR_2, 0x1);
  else
   VAR_9 = FUNC_1(VAR_10, VAR_2, 0x1);
  if (VAR_9 < 0)
   return -VAR_1;
  break;
 }
 return 0;
}
