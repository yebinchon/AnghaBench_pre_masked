
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dib3000mc_state {int i2c_addr; int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dib3000mc_state *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u8 VAR_4[4] = {
  (VAR_2 >> 8) & 0xff, VAR_2 & 0xff,
  (VAR_3 >> 8) & 0xff, VAR_3 & 0xff,
 };
 struct i2c_msg VAR_5 = {
  .addr = VAR_1->i2c_addr >> 1, .flags = 0, .buf = VAR_4, .len = 4
 };
 return FUNC_0(VAR_1->i2c_adap, &VAR_5, 1) != 1 ? -VAR_0 : 0;
}
