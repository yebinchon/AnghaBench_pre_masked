
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda10023_state {int i2c; TYPE_1__* config; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct tda10023_state* VAR_1)
{
 u8 VAR_2[2] = { 0x0f, 0x40 };
 struct i2c_msg VAR_3={.addr=VAR_1->config->demod_address, .flags=0, .buf=VAR_2, .len=2};

 if(FUNC_0(VAR_1->i2c, &VAR_3, 1) != 1)
 {
  FUNC_1("tda10023: unlock tuner fails\n");
  return -VAR_0;
 }
 return 0;
}
