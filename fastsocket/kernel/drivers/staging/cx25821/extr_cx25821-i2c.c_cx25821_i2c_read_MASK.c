
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_client {int addr; int adapter; } ;
struct cx25821_i2c {struct i2c_client i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

int FUNC_1(struct cx25821_i2c *VAR_1, u16 VAR_2, int *VAR_3)
{
 struct i2c_client *VAR_4 = &VAR_1->i2c_client;
 int VAR_5 = 0;
 int VAR_6 = 0;
 u8 VAR_7[2] = { 0, 0 };
 u8 VAR_8[4] = { 0, 0, 0, 0 };

 struct i2c_msg VAR_9[2] = {
  {
   .addr = VAR_4->addr,
   .flags = 0,
   .len = 2,
   .buf = VAR_7,
   }, {
       .addr = VAR_4->addr,
       .flags = VAR_0,
       .len = 4,
       .buf = VAR_8,
       }
 };

 VAR_7[0] = (VAR_2 >> 8);
 VAR_7[1] = (VAR_2 & 0xff);
 VAR_9[0].addr = 0x44;
 VAR_9[1].addr = 0x44;

 VAR_5 = FUNC_0(VAR_4->adapter, VAR_9, 2);

 VAR_6 = (VAR_8[3] << 24) | (VAR_8[2] << 16) | (VAR_8[1] << 8) | VAR_8[0];
 *VAR_3 = VAR_6;

 return VAR_6;
}
