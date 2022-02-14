
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l64781_state {int i2c; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1 (struct l64781_state* VAR_1)
{
 u8 VAR_2 [] = { 0x06 };
 struct i2c_msg VAR_3 = { .addr = 0x00, .flags = 0, .buf = VAR_2, .len = 1 };


 return (FUNC_0(VAR_1->i2c, &VAR_3, 1) == 1) ? 0 : -VAR_0;
}
