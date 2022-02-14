
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int write_buf ;
typedef int u8 ;
typedef int u16 ;
struct va1j5jf8007s_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct dvb_frontend {struct va1j5jf8007s_state* demodulator_priv; } ;
typedef int s64 ;
typedef int s32 ;
typedef int read_buf ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 long long FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct va1j5jf8007s_state *VAR_4;
 u8 VAR_5;
 int VAR_6;
 u8 VAR_7[1], VAR_8[1];
 struct i2c_msg VAR_9[2];
 s32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_4 = VAR_2->demodulator_priv;
 VAR_5 = VAR_4->config->demod_address;

 VAR_10 = 0;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_7[0] = 0xbc + VAR_6;

  VAR_9[0].addr = VAR_5;
  VAR_9[0].flags = 0;
  VAR_9[0].len = sizeof(VAR_7);
  VAR_9[0].buf = VAR_7;

  VAR_9[1].addr = VAR_5;
  VAR_9[1].flags = VAR_1;
  VAR_9[1].len = sizeof(VAR_8);
  VAR_9[1].buf = VAR_8;

  if (FUNC_0(VAR_4->adap, VAR_9, 2) != 2)
   return -VAR_0;

  VAR_10 <<= 8;
  VAR_10 |= VAR_8[0];
 }

 VAR_10 -= 3000;
 if (VAR_10 < 0)
  VAR_10 = 0;

 VAR_11 = FUNC_1(VAR_10 << 16) * ((15625ll << 21) / 1000000);
 VAR_12 = (s64)VAR_11 * VAR_11 >> 31;
 VAR_13 = (s64)VAR_12 * VAR_11 >> 31;
 VAR_14 = (s64)VAR_12 * VAR_12 >> 31;
 VAR_15 = (s64)VAR_14 * VAR_11 >> 31;

 VAR_16 = (58857ll << 23) / 1000;
 VAR_16 -= (s64)VAR_11 * ((89565ll << 24) / 1000) >> 30;
 VAR_16 += (s64)VAR_12 * ((88977ll << 24) / 1000) >> 28;
 VAR_16 -= (s64)VAR_13 * ((50259ll << 25) / 1000) >> 27;
 VAR_16 += (s64)VAR_14 * ((14341ll << 27) / 1000) >> 27;
 VAR_16 -= (s64)VAR_15 * ((16346ll << 30) / 10000) >> 28;

 *VAR_3 = VAR_16 < 0 ? 0 : VAR_16 >> 15;
 return 0;
}
