
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; int ops; } ;
struct va1j5jf8007t_state {struct i2c_adapter* adap; struct va1j5jf8007t_config const* config; struct dvb_frontend fe; } ;
struct va1j5jf8007t_config {int demod_address; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct va1j5jf8007t_state*) ;
 struct va1j5jf8007t_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;

struct dvb_frontend *
FUNC_4(const struct va1j5jf8007t_config *VAR_2,
      struct i2c_adapter *VAR_3)
{
 struct va1j5jf8007t_state *VAR_4;
 struct dvb_frontend *VAR_5;
 u8 VAR_6[2];
 struct i2c_msg VAR_7;

 VAR_4 = FUNC_2(sizeof(struct va1j5jf8007t_state), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->config = VAR_2;
 VAR_4->adap = VAR_3;

 VAR_5 = &VAR_4->fe;
 FUNC_3(&VAR_5->ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_5->demodulator_priv = VAR_4;

 VAR_6[0] = 0x01;
 VAR_6[1] = 0x80;

 VAR_7.addr = VAR_4->config->demod_address;
 VAR_7.flags = 0;
 VAR_7.len = sizeof(VAR_6);
 VAR_7.buf = VAR_6;

 if (FUNC_0(VAR_4->adap, &VAR_7, 1) != 1) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_5;
}
