
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {scalar_t__ opmode; int rxsubchans; int audmode; scalar_t__ radio; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 struct msp_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_1(VAR_4);
 struct i2c_client *VAR_7 = FUNC_2(VAR_4);

 if (VAR_6->radio)
  return 0;
 if (VAR_6->opmode == VAR_0)
  FUNC_0(VAR_7);
 VAR_5->audmode = VAR_6->audmode;
 VAR_5->rxsubchans = VAR_6->rxsubchans;
 VAR_5->capability |= VAR_3 |
  VAR_1 | VAR_2;
 return 0;
}
