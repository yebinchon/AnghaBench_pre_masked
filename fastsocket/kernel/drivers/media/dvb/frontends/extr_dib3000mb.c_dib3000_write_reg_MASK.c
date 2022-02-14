
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct dib3000_state {int i2c; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct dib3000_state *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u8 VAR_4[] = {
  (VAR_2 >> 8) & 0xff, VAR_2 & 0xff,
  (VAR_3 >> 8) & 0xff, VAR_3 & 0xff,
 };
 struct i2c_msg VAR_5[] = {
  { .addr = VAR_1->config.demod_address, .flags = 0, .buf = VAR_4, .len = 4 }
 };
 FUNC_0("writing i2c bus (reg: %5d 0x%04x, val: %5d 0x%04x)\n",VAR_2,VAR_2,VAR_3,VAR_3);

 return FUNC_1(VAR_1->i2c,VAR_5, 1) != 1 ? -VAR_0 : 0;
}
