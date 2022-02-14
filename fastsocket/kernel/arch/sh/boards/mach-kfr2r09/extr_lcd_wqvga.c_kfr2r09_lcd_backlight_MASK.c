
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; unsigned char* buf; int len; scalar_t__ flags; } ;
struct i2c_adapter {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_6)
{
 struct i2c_adapter *VAR_7;
 struct i2c_msg VAR_8;
 unsigned char VAR_9[2];
 int VAR_10;

 VAR_7 = FUNC_0(0);
 if (!VAR_7)
  return -VAR_3;

 VAR_9[0] = 0x00;
 if (VAR_6)
  VAR_9[1] = VAR_2 | VAR_0 | VAR_1;
 else
  VAR_9[1] = 0;

 VAR_8.addr = 0x75;
 VAR_8.buf = VAR_9;
 VAR_8.len = 2;
 VAR_8.flags = 0;
 VAR_10 = FUNC_1(VAR_7, &VAR_8, 1);
 if (VAR_10 != 1)
  return -VAR_3;

 VAR_9[0] = 0x01;
 if (VAR_6)
  VAR_9[1] = VAR_5 | VAR_4 | 0x0c;
 else
  VAR_9[1] = 0;

 VAR_8.addr = 0x75;
 VAR_8.buf = VAR_9;
 VAR_8.len = 2;
 VAR_8.flags = 0;
 VAR_10 = FUNC_1(VAR_7, &VAR_8, 1);
 if (VAR_10 != 1)
  return -VAR_3;

 return 0;
}
