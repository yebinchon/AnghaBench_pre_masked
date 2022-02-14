
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int write_buf ;
typedef int u8 ;
typedef int u16 ;
struct va1j5jf8007t_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; } ;
typedef int s64 ;
typedef int s32 ;
typedef int read_buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, u16 *VAR_4)
{
 struct va1j5jf8007t_state *VAR_5;
 u8 VAR_6;
 int VAR_7;
 u8 VAR_8[1], VAR_9[1];
 struct i2c_msg VAR_10[2];
 s32 VAR_11, VAR_12, VAR_13;

 VAR_5 = VAR_3->demodulator_priv;
 VAR_6 = VAR_5->config->demod_address;

 VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_8[0] = 0x8b + VAR_7;

  VAR_10[0].addr = VAR_6;
  VAR_10[0].flags = 0;
  VAR_10[0].len = sizeof(VAR_8);
  VAR_10[0].buf = VAR_8;

  VAR_10[1].addr = VAR_6;
  VAR_10[1].flags = VAR_2;
  VAR_10[1].len = sizeof(VAR_9);
  VAR_10[1].buf = VAR_9;

  if (FUNC_0(VAR_5->adap, VAR_10, 2) != 2)
   return -VAR_1;

  VAR_11 <<= 8;
  VAR_11 |= VAR_9[0];
 }

 if (!VAR_11)
  return -VAR_0;

 VAR_12 = 10 * (FUNC_1(0x540000 * 100 / VAR_11) - (2 << 24));
 VAR_13 = (24ll << 46) / 1000000;
 VAR_13 = ((s64)VAR_13 * VAR_12 >> 30) - (16ll << 40) / 10000;
 VAR_13 = ((s64)VAR_13 * VAR_12 >> 29) + (398ll << 35) / 10000;
 VAR_13 = ((s64)VAR_13 * VAR_12 >> 30) + (5491ll << 29) / 10000;
 VAR_13 = ((s64)VAR_13 * VAR_12 >> 30) + (30965ll << 23) / 10000;
 *VAR_4 = VAR_13 >> 15;
 return 0;
}
