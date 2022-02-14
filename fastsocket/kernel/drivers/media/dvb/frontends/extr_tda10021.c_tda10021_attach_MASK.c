
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda1002x_config {int demod_address; } ;
struct dvb_frontend {struct tda10021_state* demodulator_priv; int ops; } ;
struct tda10021_state {int pwm; struct dvb_frontend frontend; struct tda1002x_config const* config; int reg0; struct i2c_adapter* i2c; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tda10021_state*) ;
 struct tda10021_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int ,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct tda10021_state*,int) ;

struct dvb_frontend* FUNC_5(const struct tda1002x_config* VAR_3,
         struct i2c_adapter* VAR_4,
         u8 VAR_5)
{
 struct tda10021_state* VAR_6 = ((void*)0);
 u8 VAR_7;


 VAR_6 = FUNC_1(sizeof(struct tda10021_state), VAR_0);
 if (VAR_6 == ((void*)0)) goto error;


 VAR_6->config = VAR_3;
 VAR_6->i2c = VAR_4;
 VAR_6->pwm = VAR_5;
 VAR_6->reg0 = VAR_1[0];


 VAR_7 = FUNC_4(VAR_6, 0x1a);
 if ((VAR_7 & 0xf0) != 0x70) goto error;


 if (VAR_7 == 0x7d)
  goto error;

 FUNC_3("TDA10021: i2c-addr = 0x%02x, id = 0x%02x\n",
        VAR_6->config->demod_address, VAR_7);


 FUNC_2(&VAR_6->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
 VAR_6->frontend.demodulator_priv = VAR_6;
 return &VAR_6->frontend;

error:
 FUNC_0(VAR_6);
 return ((void*)0);
}
