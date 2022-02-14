
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct i2c_msg VAR_5[1];
 unsigned char VAR_6[2];

 if (!VAR_1->adapter)
  return -VAR_0;

 VAR_5->addr = VAR_1->addr;
 VAR_5->flags = 0;
 VAR_5->len = 2;
 VAR_5->buf = VAR_6;
 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_3;
 VAR_4 = FUNC_0(VAR_1->adapter, VAR_5, 1);
 if (VAR_4 >= 0)
  return 0;
 return VAR_4;
}
