
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int audmode; scalar_t__ radio; } ;


 int VAR_0 ;





 int FUNC_0 (struct i2c_client*,int,int,int) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_tuner *VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_2(VAR_1);
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);

 if (VAR_3->radio || FUNC_1(VAR_3))
  return 0;

 switch (VAR_2->audmode) {
  case 129:



   FUNC_0(VAR_4, 0x809, ~0xf, 0x00);
   break;
  case 128:
  case 132:



   FUNC_0(VAR_4, 0x809, ~0xf, 0x04);
   break;
  case 131:



   FUNC_0(VAR_4, 0x809, ~0xf, 0x07);
   break;
  case 130:



   FUNC_0(VAR_4, 0x809, ~0xf, 0x01);
   break;
  default:
   return -VAR_0;
 }
 VAR_3->audmode = VAR_2->audmode;
 return 0;
}
