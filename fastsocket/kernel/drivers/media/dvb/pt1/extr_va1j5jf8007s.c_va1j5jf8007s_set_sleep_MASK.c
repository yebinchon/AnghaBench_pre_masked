
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct va1j5jf8007s_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
typedef int buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct va1j5jf8007s_state *VAR_1, int VAR_2)
{
 u8 VAR_3[2];
 struct i2c_msg VAR_4;

 VAR_3[0] = 0x17;
 VAR_3[1] = VAR_2 ? 0x01 : 0x00;

 VAR_4.addr = VAR_1->config->demod_address;
 VAR_4.flags = 0;
 VAR_4.len = sizeof(VAR_3);
 VAR_4.buf = VAR_3;

 if (FUNC_0(VAR_1->adap, &VAR_4, 1) != 1)
  return -VAR_0;

 return 0;
}
