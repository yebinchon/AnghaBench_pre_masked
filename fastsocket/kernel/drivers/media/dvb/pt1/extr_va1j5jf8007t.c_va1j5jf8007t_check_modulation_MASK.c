
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int write_buf ;
typedef int u8 ;
struct va1j5jf8007t_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
typedef int read_buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct va1j5jf8007t_state *VAR_2,
      int *VAR_3, int *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6[1], VAR_7[1];
 struct i2c_msg VAR_8[2];

 VAR_5 = VAR_2->config->demod_address;

 VAR_6[0] = 0x80;

 VAR_8[0].addr = VAR_5;
 VAR_8[0].flags = 0;
 VAR_8[0].len = sizeof(VAR_6);
 VAR_8[0].buf = VAR_6;

 VAR_8[1].addr = VAR_5;
 VAR_8[1].flags = VAR_1;
 VAR_8[1].len = sizeof(VAR_7);
 VAR_8[1].buf = VAR_7;

 if (FUNC_0(VAR_2->adap, VAR_8, 2) != 2)
  return -VAR_0;

 *VAR_3 = !(VAR_7[0] & 0x10);
 *VAR_4 = VAR_7[0] & 0x80;
 return 0;
}
