
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int aud_input; int vid_input; int pvr150_workaround; } ;
struct cx25840_platform_data {int pvr150_workaround; } ;


 int FUNC_0 (struct i2c_client*,int ,int ) ;
 struct cx25840_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1, void *VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_1(VAR_0);
 struct i2c_client *VAR_4 = FUNC_2(VAR_0);

 if (VAR_2) {
  struct cx25840_platform_data *VAR_5 = VAR_2;

  VAR_3->pvr150_workaround = VAR_5->pvr150_workaround;
  FUNC_0(VAR_4, VAR_3->vid_input, VAR_3->aud_input);
 }
 return 0;
}
