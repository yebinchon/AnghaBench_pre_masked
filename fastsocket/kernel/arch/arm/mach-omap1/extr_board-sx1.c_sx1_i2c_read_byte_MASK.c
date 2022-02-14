
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {unsigned char addr; int len; unsigned char* buf; scalar_t__ flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_3(u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct i2c_adapter *VAR_5;
 int VAR_6;
 struct i2c_msg VAR_7[1];
 unsigned char VAR_8[2];

 VAR_5 = FUNC_0(0);
 if (!VAR_5)
  return -VAR_0;

 VAR_7->addr = VAR_2;
 VAR_7->flags = 0;
 VAR_7->len = 1;
 VAR_7->buf = VAR_8;
 VAR_8[0] = VAR_3;
 VAR_6 = FUNC_2(VAR_5, VAR_7, 1);

 VAR_7->addr = VAR_2;
 VAR_7->flags = VAR_1;
 VAR_7->len = 1;
 VAR_7->buf = VAR_8;
 VAR_6 = FUNC_2(VAR_5, VAR_7, 1);
 *VAR_4 = VAR_8[0];
 FUNC_1(VAR_5);

 if (VAR_6 >= 0)
  return 0;
 return VAR_6;
}
