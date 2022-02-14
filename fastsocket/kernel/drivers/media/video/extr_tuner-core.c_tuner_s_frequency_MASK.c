
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int frequency; int type; } ;
struct tuner {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,struct tuner*,int ,int ) ;
 struct tuner* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_frequency *VAR_2)
{
 struct tuner *VAR_3 = FUNC_1(VAR_1);
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4, VAR_3, VAR_2->type, VAR_2->frequency) == -VAR_0)
  return 0;

 return 0;
}
