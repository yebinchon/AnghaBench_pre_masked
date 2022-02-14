
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2, int VAR_3)
{
 int VAR_4;
 struct i2c_msg VAR_5[2];
 u8 VAR_6, VAR_7 = 0;

 if (!VAR_2->adapter)
  return -VAR_0;

 VAR_5[0].addr = VAR_2->addr;
 VAR_5[0].flags = 0;
 VAR_5[0].len = 1;
 VAR_5[0].buf = &VAR_6;
 VAR_5[1].addr = VAR_2->addr;
 VAR_5[1].flags = VAR_1;
 VAR_5[1].len = 1;
 VAR_5[1].buf = &VAR_7;

 VAR_6 = VAR_3;

 VAR_4 = FUNC_0(VAR_2->adapter, VAR_5, 2);
 if (VAR_4 < 0)
  return VAR_4;
 return VAR_7;
}
