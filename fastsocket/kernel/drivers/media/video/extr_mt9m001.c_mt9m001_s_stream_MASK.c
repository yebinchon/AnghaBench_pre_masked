
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_2);


 if (FUNC_0(VAR_4, VAR_1, VAR_3 ? 2 : 0) < 0)
  return -VAR_0;
 return 0;
}
