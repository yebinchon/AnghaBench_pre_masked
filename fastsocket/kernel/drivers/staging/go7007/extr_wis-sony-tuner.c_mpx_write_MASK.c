
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5[5];
 struct i2c_msg VAR_6;

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3 >> 8;
 VAR_5[2] = VAR_3 & 0xff;
 VAR_5[3] = VAR_4 >> 8;
 VAR_5[4] = VAR_4 & 0xff;
 VAR_6.addr = VAR_0;
 VAR_6.flags = 0;
 VAR_6.len = 5;
 VAR_6.buf = VAR_5;
 FUNC_0(VAR_1->adapter, &VAR_6, 1);
 return 0;
}
