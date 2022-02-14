
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_client {int addr; int adapter; scalar_t__ flags; } ;
struct cx25821_i2c {struct i2c_client i2c_client; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

int FUNC_1(struct cx25821_i2c *VAR_0, u16 VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = &VAR_0->i2c_client;
 int VAR_4 = 0;
 u8 VAR_5[6] = { 0, 0, 0, 0, 0, 0 };

 struct i2c_msg VAR_6[1] = {
  {
   .addr = VAR_3->addr,
   .flags = 0,
   .len = 6,
   .buf = VAR_5,
   }
 };

 VAR_5[0] = VAR_1 >> 8;
 VAR_5[1] = VAR_1 & 0xff;
 VAR_5[5] = (VAR_2 >> 24) & 0xff;
 VAR_5[4] = (VAR_2 >> 16) & 0xff;
 VAR_5[3] = (VAR_2 >> 8) & 0xff;
 VAR_5[2] = VAR_2 & 0xff;
 VAR_3->flags = 0;
 VAR_6[0].addr = 0x44;

 VAR_4 = FUNC_0(VAR_3->adapter, VAR_6, 1);

 return VAR_4;
}
