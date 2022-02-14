
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tuner {int std; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct tuner*,int ,int ) ;
 struct tuner* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct tuner*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, v4l2_std_id VAR_3)
{
 struct tuner *VAR_4 = FUNC_1(VAR_2);
 struct i2c_client *VAR_5 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_5, VAR_4, VAR_1, 0) == -VAR_0)
  return 0;

 VAR_4->std = VAR_3;
 FUNC_2(VAR_4);

 return 0;
}
