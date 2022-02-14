
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {scalar_t__ radio; scalar_t__ std; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct cx25840_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct cx25840_state *VAR_2 = FUNC_1(VAR_0);
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);

 if (VAR_2->radio == 0 && VAR_2->std == VAR_1)
  return 0;
 VAR_2->radio = 0;
 VAR_2->std = VAR_1;
 return FUNC_0(VAR_3);
}
