
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_frequency *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2);
 return 0;
}
