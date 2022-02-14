
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int,int ,struct i2c_client*,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_4(VAR_1);
 struct i2c_client *VAR_4 = FUNC_5(VAR_1);
 u8 VAR_5;

 FUNC_6(1, VAR_0, VAR_4, "%s video output\n",
   VAR_2 ? "enable" : "disable");
 if (VAR_2) {
  if (FUNC_3(VAR_3) || FUNC_2(VAR_3)) {
   VAR_5 = FUNC_0(VAR_4, 0x421) | 0x0b;
   FUNC_1(VAR_4, 0x421, VAR_5);
  } else {
   VAR_5 = FUNC_0(VAR_4, 0x115) | 0x0c;
   FUNC_1(VAR_4, 0x115, VAR_5);
   VAR_5 = FUNC_0(VAR_4, 0x116) | 0x04;
   FUNC_1(VAR_4, 0x116, VAR_5);
  }
 } else {
  if (FUNC_3(VAR_3) || FUNC_2(VAR_3)) {
   VAR_5 = FUNC_0(VAR_4, 0x421) & ~(0x0b);
   FUNC_1(VAR_4, 0x421, VAR_5);
  } else {
   VAR_5 = FUNC_0(VAR_4, 0x115) & ~(0x0c);
   FUNC_1(VAR_4, 0x115, VAR_5);
   VAR_5 = FUNC_0(VAR_4, 0x116) & ~(0x04);
   FUNC_1(VAR_4, 0x116, VAR_5);
  }
 }
 return 0;
}
