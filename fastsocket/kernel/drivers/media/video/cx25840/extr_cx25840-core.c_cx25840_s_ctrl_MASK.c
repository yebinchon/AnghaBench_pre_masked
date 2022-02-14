
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct i2c_client*,int,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct i2c_client *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_1->id) {
 case 131:
  FUNC_0(VAR_3, 0x414, VAR_1->val - 128);
  break;

 case 130:
  FUNC_0(VAR_3, 0x415, VAR_1->val << 1);
  break;

 case 128:
  FUNC_0(VAR_3, 0x420, VAR_1->val << 1);
  FUNC_0(VAR_3, 0x421, VAR_1->val << 1);
  break;

 case 129:
  FUNC_0(VAR_3, 0x422, VAR_1->val);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
