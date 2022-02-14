
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int write_buf ;
typedef int u8 ;
struct va1j5jf8007s_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
typedef int read_buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct va1j5jf8007s_state *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5[1], VAR_6[1];
 struct i2c_msg VAR_7[2];

 VAR_4 = VAR_3->config->demod_address;

 VAR_5[0] = 0x07;

 VAR_7[0].addr = VAR_4;
 VAR_7[0].flags = 0;
 VAR_7[0].len = sizeof(VAR_5);
 VAR_7[0].buf = VAR_5;

 VAR_7[1].addr = VAR_4;
 VAR_7[1].flags = VAR_2;
 VAR_7[1].len = sizeof(VAR_6);
 VAR_7[1].buf = VAR_6;

 if (FUNC_0(VAR_3->adap, VAR_7, 2) != 2)
  return -VAR_1;

 if (VAR_6[0] != 0x41)
  return -VAR_0;

 return 0;
}
