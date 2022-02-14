
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct msp_state {int radio; int opmode; scalar_t__ watch_stereo; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (double) ;
 int VAR_0 ;



 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct msp_state*) ;
 int FUNC_4 (struct i2c_client*) ;
 struct msp_state* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int,int ,struct i2c_client*,char*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_2)
{
 struct msp_state *VAR_3 = FUNC_5(VAR_2);
 struct i2c_client *VAR_4 = FUNC_6(VAR_2);

 if (VAR_3->radio)
  return 0;
 VAR_3->radio = 1;
 FUNC_7(1, VAR_1, VAR_4, "switching to radio mode\n");
 VAR_3->watch_stereo = 0;
 switch (VAR_3->opmode) {
 case 128:

  FUNC_2(VAR_4, VAR_0);
  FUNC_1(VAR_4, FUNC_0(10.7),
    FUNC_0(10.7));
  FUNC_3(VAR_3);
  break;
 case 130:
 case 129:

  FUNC_4(VAR_4);
  break;
 }
 return 0;
}
