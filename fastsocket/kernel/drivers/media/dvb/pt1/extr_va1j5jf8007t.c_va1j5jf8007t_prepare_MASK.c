
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct va1j5jf8007t_state {int adap; TYPE_1__* config; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; } ;
typedef int buf ;
struct TYPE_2__ {int frequency; int demod_address; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 int FUNC_3 (struct va1j5jf8007t_state*) ;

int FUNC_4(struct dvb_frontend *VAR_4)
{
 struct va1j5jf8007t_state *VAR_5;
 const u8 (*VAR_6)[2];
 int VAR_7;
 u8 VAR_8[2];
 struct i2c_msg VAR_9;
 int VAR_10;

 VAR_5 = VAR_4->demodulator_priv;

 switch (VAR_5->config->frequency) {
 case 129:
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_6 = VAR_3;
  VAR_7 = FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_9.addr = VAR_5->config->demod_address;
 VAR_9.flags = 0;
 VAR_9.len = sizeof(VAR_8);
 VAR_9.buf = VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_2(VAR_8, VAR_6[VAR_10], sizeof(VAR_8));
  if (FUNC_1(VAR_5->adap, &VAR_9, 1) != 1)
   return -VAR_1;
 }

 return FUNC_3(VAR_5);
}
