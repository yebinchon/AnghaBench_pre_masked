
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {unsigned long maximum; unsigned long minimum; } ;
struct v4l2_control {int id; int value; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct v4l2_queryctrl* FUNC_1 (int *,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6, struct v4l2_control *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_2(VAR_6);
 const struct v4l2_queryctrl *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(&VAR_5, VAR_7->id);

 switch (VAR_7->id) {
 case 128:
  VAR_11 = FUNC_0(VAR_8, VAR_3);
  if (VAR_11 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_11 & 0x10);
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_8, VAR_3);
  if (VAR_11 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_11 & 0x20);
  break;
 case 131:
  VAR_11 = FUNC_0(VAR_8, VAR_1);
  if (VAR_11 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_11 & 0x1);
  break;
 case 133:
  VAR_11 = FUNC_0(VAR_8, VAR_1);
  if (VAR_11 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_11 & 0x2);
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_8, VAR_2);
  if (VAR_11 < 0)
   return -VAR_0;

  VAR_10 = VAR_9->maximum - VAR_9->minimum;
  VAR_7->value = ((VAR_11 - 16) * VAR_10 + 24) / 48 + VAR_9->minimum;

  break;
 case 132:
  VAR_11 = FUNC_0(VAR_8, VAR_4);
  if (VAR_11 < 0)
   return -VAR_0;

  VAR_10 = VAR_9->maximum - VAR_9->minimum;
  VAR_7->value = ((VAR_11 - 1) * VAR_10 + 239) / 479 + VAR_9->minimum;

  break;
 }
 return 0;
}
