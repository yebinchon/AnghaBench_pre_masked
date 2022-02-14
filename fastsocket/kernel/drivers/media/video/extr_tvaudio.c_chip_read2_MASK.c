
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int member_2; unsigned char* member_3; int member_1; int member_0; } ;
struct i2c_client {int adapter; int addr; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,unsigned char) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct CHIPSTATE *VAR_2, int VAR_3)
{
 struct v4l2_subdev *VAR_4 = &VAR_2->sd;
 struct i2c_client *VAR_5 = FUNC_2(VAR_4);
 unsigned char VAR_6[1];
 unsigned char VAR_7[1];
 struct i2c_msg VAR_8[2] = {
  { VAR_5->addr, 0, 1, VAR_6 },
  { VAR_5->addr, VAR_0, 1, VAR_7 }
 };

 VAR_6[0] = VAR_3;

 if (2 != FUNC_0(VAR_5->adapter, VAR_8, 2)) {
  FUNC_3(VAR_4, "I/O error (read2)\n");
  return -1;
 }
 FUNC_1(1, VAR_1, VAR_4, "chip_read2: reg%d=0x%x\n",
  VAR_3, VAR_7[0]);
 return VAR_7[0];
}
