
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; int type; } ;
struct v4l2_subdev {int dummy; } ;
struct tuner {scalar_t__ mode; int audmode; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct tuner*,int ,int ) ;
 struct tuner* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_tuner *VAR_3)
{
 struct tuner *VAR_4 = FUNC_1(VAR_2);
 struct i2c_client *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_5, VAR_4, VAR_3->type, 0) == -VAR_0)
  return 0;

 if (VAR_4->mode == VAR_1)
  VAR_4->audmode = VAR_3->audmode;

 return 0;
}
