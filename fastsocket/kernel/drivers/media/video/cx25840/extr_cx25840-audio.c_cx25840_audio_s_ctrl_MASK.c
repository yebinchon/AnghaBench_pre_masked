
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {TYPE_1__* volume; TYPE_2__* mute; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;




 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 struct v4l2_subdev* FUNC_3 (struct v4l2_ctrl*) ;
 struct cx25840_state* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_3(VAR_1);
 struct cx25840_state *VAR_3 = FUNC_4(VAR_2);
 struct i2c_client *VAR_4 = FUNC_5(VAR_2);

 switch (VAR_1->id) {
 case 128:
  if (VAR_3->mute->val)
   FUNC_2(VAR_4, 0);
  else
   FUNC_2(VAR_4, VAR_3->volume->val);
  break;
 case 130:

  FUNC_0(VAR_4, 0x8d9, ~0x3f,
     48 - (VAR_1->val * 48 / 0xffff));
  break;
 case 129:

  FUNC_0(VAR_4, 0x8db, ~0x3f,
     48 - (VAR_1->val * 48 / 0xffff));
  break;
 case 131:
  FUNC_1(VAR_4, VAR_1->val);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
