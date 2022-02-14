
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct mt9m111 {int hflip; int vflip; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 struct v4l2_queryctrl* FUNC_4 (int *,int) ;
 struct mt9m111* FUNC_5 (struct i2c_client*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4, struct v4l2_control *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_4);
 struct mt9m111 *VAR_7 = FUNC_5(VAR_6);
 const struct v4l2_queryctrl *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(&VAR_3, VAR_5->id);
 if (!VAR_8)
  return -VAR_0;

 switch (VAR_5->id) {
 case 128:
  VAR_7->vflip = VAR_5->value;
  VAR_9 = FUNC_2(VAR_6, VAR_5->value,
     VAR_2);
  break;
 case 129:
  VAR_7->hflip = VAR_5->value;
  VAR_9 = FUNC_2(VAR_6, VAR_5->value,
     VAR_1);
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_6, VAR_5->value);
  break;
 case 131:
  VAR_9 = FUNC_0(VAR_6, VAR_5->value);
  break;
 case 132:
  VAR_9 = FUNC_1(VAR_6, VAR_5->value);
  break;
 default:
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
