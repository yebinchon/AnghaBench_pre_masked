
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8739_state {int hdl; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct wm8739_state*) ;
 struct wm8739_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct wm8739_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(&VAR_2->hdl);
 FUNC_1(FUNC_2(VAR_1));
 return 0;
}
