
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tua6100_priv {int i2c_address; struct i2c_adapter* i2c; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct tua6100_priv* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 struct tua6100_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int VAR_2 ;

struct dvb_frontend *FUNC_5(struct dvb_frontend *VAR_3, int VAR_4, struct i2c_adapter *VAR_5)
{
 struct tua6100_priv *VAR_6 = ((void*)0);
 u8 VAR_7 [] = { 0x80 };
 u8 VAR_8 [] = { 0x00 };
 struct i2c_msg VAR_9 [] = { { .addr = VAR_4, .flags = 0, .buf = VAR_7, .len = 1 },
      { .addr = VAR_4, .flags = VAR_1, .buf = VAR_8, .len = 1 } };
 int VAR_10;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);
 VAR_10 = FUNC_0 (VAR_5, VAR_9, 2);
 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);

 if (VAR_10 != 2)
  return ((void*)0);

 VAR_6 = FUNC_1(sizeof(struct tua6100_priv), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->i2c_address = VAR_4;
 VAR_6->i2c = VAR_5;

 FUNC_2(&VAR_3->ops.tuner_ops, &VAR_2, sizeof(struct dvb_tuner_ops));
 VAR_3->tuner_priv = VAR_6;
 return VAR_3;
}
