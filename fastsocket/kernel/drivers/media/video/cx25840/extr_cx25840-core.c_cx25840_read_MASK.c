
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

u8 FUNC_1(struct i2c_client * VAR_1, u16 VAR_2)
{
 struct i2c_msg VAR_3[2];
 u8 VAR_4[2], VAR_5[1];


 VAR_4[0] = VAR_2 >> 8;
 VAR_4[1] = VAR_2 & 0xff;
 VAR_3[0].addr = VAR_1->addr;
 VAR_3[0].flags = 0;
 VAR_3[0].len = 2;
 VAR_3[0].buf = (char *) VAR_4;


 VAR_3[1].addr = VAR_1->addr;
 VAR_3[1].flags = VAR_0;
 VAR_3[1].len = 1;
 VAR_3[1].buf = (char *) VAR_5;

 if (FUNC_0(VAR_1->adapter, VAR_3, 2) < 2)
  return 0;

 return VAR_5[0];
}
