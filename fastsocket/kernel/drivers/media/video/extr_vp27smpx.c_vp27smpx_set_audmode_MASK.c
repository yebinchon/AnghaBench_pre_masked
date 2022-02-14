
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vp27smpx_state {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef int data ;







 int FUNC_0 (struct i2c_client*,int*,int) ;
 struct vp27smpx_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 struct vp27smpx_state *VAR_2 = FUNC_1(VAR_0);
 struct i2c_client *VAR_3 = FUNC_3(VAR_0);
 u8 VAR_4[3] = { 0x00, 0x00, 0x04 };

 switch (VAR_1) {
 case 129:
 case 132:
  break;
 case 128:
 case 131:
  VAR_4[1] = 0x01;
  break;
 case 130:
  VAR_4[1] = 0x02;
  break;
 }

 if (FUNC_0(VAR_3, VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  FUNC_2(VAR_0, "I/O error setting audmode\n");
 else
  VAR_2->audmode = VAR_1;
}
