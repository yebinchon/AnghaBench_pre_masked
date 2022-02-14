
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct mt9t031 {int autoexposure; int gain; int exposure; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct i2c_client*,int ) ;
 struct mt9t031* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_2);
 struct mt9t031 *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 switch (VAR_3->id) {
 case 128:
  VAR_6 = FUNC_0(VAR_4, VAR_1);
  if (VAR_6 < 0)
   return -VAR_0;
  VAR_3->value = !!(VAR_6 & 0x8000);
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_4, VAR_1);
  if (VAR_6 < 0)
   return -VAR_0;
  VAR_3->value = !!(VAR_6 & 0x4000);
  break;
 case 131:
  VAR_3->value = VAR_5->autoexposure;
  break;
 case 130:
  VAR_3->value = VAR_5->gain;
  break;
 case 132:
  VAR_3->value = VAR_5->exposure;
  break;
 }
 return 0;
}
