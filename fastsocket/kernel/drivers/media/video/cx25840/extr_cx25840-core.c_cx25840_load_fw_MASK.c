
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int is_initialized; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 scalar_t__ FUNC_6 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_0)
{
 struct cx25840_state *VAR_1 = FUNC_7(VAR_0);
 struct i2c_client *VAR_2 = FUNC_8(VAR_0);

 if (!VAR_1->is_initialized) {

  VAR_1->is_initialized = 1;
  if (FUNC_6(VAR_1))
   FUNC_2(VAR_2);
  else if (FUNC_5(VAR_1))
   FUNC_1(VAR_2);
  else if (FUNC_4(VAR_1))
   FUNC_0(VAR_2);
  else
   FUNC_3(VAR_2);
 }
 return 0;
}
