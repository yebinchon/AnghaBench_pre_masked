
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, v4l2_std_id *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(VAR_0);

 *VAR_1 = FUNC_0(VAR_2);
 return 0;
}
