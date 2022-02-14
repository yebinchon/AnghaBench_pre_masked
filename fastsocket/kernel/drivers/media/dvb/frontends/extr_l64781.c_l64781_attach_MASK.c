
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct l64781_state* demodulator_priv; int ops; } ;
struct l64781_state {int first; struct dvb_frontend frontend; struct i2c_adapter* i2c; struct l64781_config const* config; } ;
struct l64781_config {int demod_address; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_2 (struct l64781_state*) ;
 struct l64781_state* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct l64781_state*,int) ;
 int FUNC_5 (struct l64781_state*,int,int) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (struct l64781_state*) ;

struct dvb_frontend* FUNC_8(const struct l64781_config* VAR_3,
       struct i2c_adapter* VAR_4)
{
 struct l64781_state* VAR_5 = ((void*)0);
 int VAR_6 = -1;
 u8 VAR_7 [] = { 0x1a };
 u8 VAR_8 [] = { 0x00 };
 struct i2c_msg VAR_9 [] = { { .addr = VAR_3->demod_address, .flags = 0, .buf = VAR_7, .len = 1 },
      { .addr = VAR_3->demod_address, .flags = VAR_1, .buf = VAR_8, .len = 1 } };


 VAR_5 = FUNC_3(sizeof(struct l64781_state), VAR_0);
 if (VAR_5 == ((void*)0)) goto error;


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;
 VAR_5->first = 1;





 if (FUNC_7(VAR_5) < 0) {
  FUNC_0("No response to reset and configure broadcast...\n");
  goto error;
 }


 if (FUNC_1(VAR_5->i2c, VAR_9, 2) != 2) {
  FUNC_0("No response to read on I2C bus\n");
  goto error;
 }


 VAR_6 = FUNC_4(VAR_5, 0x3e);


 if (VAR_6 != 0) {
  FUNC_0("Device doesn't look like L64781\n");
  goto error;
 }


 FUNC_5 (VAR_5, 0x3e, 0x5a);


 if (FUNC_4(VAR_5, 0x1a) != 0) {
  FUNC_0("Read 1 returned unexpcted value\n");
  goto error;
 }


 FUNC_5 (VAR_5, 0x3e, 0xa5);


 if (FUNC_4(VAR_5, 0x1a) != 0xa1) {
  FUNC_0("Read 2 returned unexpcted value\n");
  goto error;
 }


 FUNC_6(&VAR_5->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;
 return &VAR_5->frontend;

error:
 if (VAR_6 >= 0)
  FUNC_5 (VAR_5, 0x3e, VAR_6);
 FUNC_2(VAR_5);
 return ((void*)0);
}
