
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_device {int addr; int adap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static u16 FUNC_2(struct i2c_device *VAR_1, u16 VAR_2)
{
 u8 VAR_3[2] = { VAR_2 >> 8, VAR_2 & 0xff };
 u8 VAR_4[2];
 struct i2c_msg VAR_5[2] = {
  {.addr = VAR_1->addr >> 1,.flags = 0,.buf = VAR_3,.len = 2},
  {.addr = VAR_1->addr >> 1,.flags = VAR_0,.buf = VAR_4,.len = 2},
 };

 if (FUNC_1(VAR_1->adap, VAR_5, 2) != 2)
  FUNC_0("i2c read error on %d", VAR_2);

 return (VAR_4[0] << 8) | VAR_4[1];
}
