
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {scalar_t__ audmode; scalar_t__ radio; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct msp_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, struct v4l2_tuner *VAR_1)
{
 struct msp_state *VAR_2 = FUNC_1(VAR_0);
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);

 if (VAR_2->radio)
  return 0;
 if (VAR_2->audmode == VAR_1->audmode)
  return 0;
 VAR_2->audmode = VAR_1->audmode;

 FUNC_0(VAR_3);
 return 0;
}
