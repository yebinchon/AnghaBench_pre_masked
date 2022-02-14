
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int tu1216_init ;
struct tda1004x_state {TYPE_3__* config; } ;
struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct tda1004x_state* demodulator_priv; TYPE_2__* dvb; } ;
struct TYPE_6__ {int tuner_address; } ;
struct TYPE_5__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct saa7134_dev *VAR_2 = VAR_1->dvb->priv;
 struct tda1004x_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4 = VAR_3->config->tuner_address;
 static u8 VAR_5[] = { 0x0b, 0xf5, 0x85, 0xab };
 struct i2c_msg VAR_6 = {.addr = VAR_4,.flags = 0,.buf = VAR_5,.len = sizeof(VAR_5) };


 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0(&VAR_2->i2c_adap, &VAR_6, 1) != 1)
  return -VAR_0;
 FUNC_1(1);

 return 0;
}
