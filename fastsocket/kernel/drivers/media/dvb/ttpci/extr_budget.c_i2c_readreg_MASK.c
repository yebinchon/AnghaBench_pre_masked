
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 struct i2c_msg VAR_6[] = {
  { .addr = VAR_3, .flags = 0, .buf = &VAR_4, .len = 1 },
  { .addr = VAR_3, .flags = VAR_1, .buf = &VAR_5, .len = 1 }
 };

 return (FUNC_0(VAR_2, VAR_6, 2) != 2) ? -VAR_0 : VAR_5;
}
