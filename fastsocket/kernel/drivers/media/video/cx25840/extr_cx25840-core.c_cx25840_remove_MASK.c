
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int hdl; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct cx25840_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(&VAR_2->hdl);
 FUNC_2(VAR_2);
 return 0;
}
