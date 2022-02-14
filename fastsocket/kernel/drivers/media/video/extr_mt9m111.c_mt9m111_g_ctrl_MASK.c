
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct mt9m111 {int autoexposure; int autowhitebalance; int context; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 struct mt9m111* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_6, struct v4l2_control *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_3(VAR_6);
 struct mt9m111 *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;

 switch (VAR_7->id) {
 case 128:
  if (VAR_9->context == VAR_1)
   VAR_10 = FUNC_1(VAR_5);
  else
   VAR_10 = FUNC_1(VAR_4);

  if (VAR_10 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_10 & VAR_3);
  break;
 case 129:
  if (VAR_9->context == VAR_1)
   VAR_10 = FUNC_1(VAR_5);
  else
   VAR_10 = FUNC_1(VAR_4);

  if (VAR_10 < 0)
   return -VAR_0;
  VAR_7->value = !!(VAR_10 & VAR_2);
  break;
 case 130:
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_7->value = VAR_10;
  break;
 case 131:
  VAR_7->value = VAR_9->autoexposure;
  break;
 case 132:
  VAR_7->value = VAR_9->autowhitebalance;
  break;
 }
 return 0;
}
