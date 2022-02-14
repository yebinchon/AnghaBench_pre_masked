
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; unsigned char* buf; int addr; scalar_t__ flags; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static u32 FUNC_3(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_2);
 struct i2c_adapter *VAR_5 = VAR_4->adapter;
 int VAR_6 = (VAR_3 >= 0x404 && VAR_3 <= 0x4b8) || VAR_3 == 0x528;
 unsigned char VAR_7[2];
 unsigned char VAR_8[4] = { 0, 0, 0, 0 };
 struct i2c_msg VAR_9[2];
 u32 VAR_10;

 VAR_9[0].flags = 0;
 VAR_9[1].flags = VAR_0;
 VAR_9[0].addr = VAR_9[1].addr = VAR_4->addr;
 VAR_7[0] = (VAR_3 >> 8) & 0xff;
 VAR_7[1] = VAR_3 & 0xff;
 VAR_9[0].len = 2;
 VAR_9[0].buf = VAR_7;
 VAR_9[1].len = VAR_6 ? 3 : 1;
 VAR_9[1].buf = VAR_8;
 FUNC_0(VAR_5, VAR_9, 2);

 if (VAR_6)
  VAR_10 = (VAR_8[2] & 0xff) | ((VAR_8[1] & 0xff) >> 8) | ((VAR_8[0] & 0xff) >> 16);
 else
  VAR_10 = VAR_8[0] & 0xff;

 FUNC_1(2, VAR_1, VAR_2, "read:  reg 0x%03x=0x%08x\n", VAR_3, VAR_10);
 return VAR_10;
}
