
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct va1j5jf8007t_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
typedef int buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct va1j5jf8007t_state *VAR_1)
{
 u8 VAR_2[7];
 struct i2c_msg VAR_3;

 VAR_2[0] = 0xfe;
 VAR_2[1] = 0xc2;
 VAR_2[2] = 0x01;
 VAR_2[3] = 0x8f;
 VAR_2[4] = 0xc1;
 VAR_2[5] = 0x80;
 VAR_2[6] = 0x80;

 VAR_3.addr = VAR_1->config->demod_address;
 VAR_3.flags = 0;
 VAR_3.len = sizeof(VAR_2);
 VAR_3.buf = VAR_2;

 if (FUNC_0(VAR_1->adap, &VAR_3, 1) != 1)
  return -VAR_0;

 return 0;
}
