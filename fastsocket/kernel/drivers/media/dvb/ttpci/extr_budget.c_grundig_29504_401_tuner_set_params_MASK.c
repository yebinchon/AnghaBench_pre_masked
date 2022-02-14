
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {int* tuner_priv; TYPE_2__ ops; TYPE_1__* dvb; } ;
struct budget {int i2c_adap; } ;
typedef int data ;
struct TYPE_3__ {struct budget* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters* VAR_2)
{
 struct budget *VAR_3 = VAR_1->dvb->priv;
 u8 *VAR_4 = VAR_1->tuner_priv;
 u32 VAR_5;
 u8 VAR_6, VAR_7, VAR_8;
 u8 VAR_9[4];
 struct i2c_msg VAR_10 = { .flags = 0, .buf = VAR_9, .len = sizeof(VAR_9) };

 if (VAR_4)
  VAR_10.addr = *VAR_4;
 else
  VAR_10.addr = 0x61;

 VAR_5 = (36125000 + VAR_2->frequency) / 166666;

 VAR_6 = 0x88;

 if (VAR_2->frequency < 175000000) VAR_7 = 2;
 else if (VAR_2->frequency < 390000000) VAR_7 = 1;
 else if (VAR_2->frequency < 470000000) VAR_7 = 2;
 else if (VAR_2->frequency < 750000000) VAR_7 = 1;
 else VAR_7 = 3;

 if (VAR_2->frequency < 175000000) VAR_8 = 0x0e;
 else if (VAR_2->frequency < 470000000) VAR_8 = 0x05;
 else VAR_8 = 0x03;

 VAR_9[0] = (VAR_5 >> 8) & 0x7f;
 VAR_9[1] = VAR_5 & 0xff;
 VAR_9[2] = ((VAR_5 >> 10) & 0x60) | VAR_6;
 VAR_9[3] = (VAR_7 << 6) | VAR_8;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0 (&VAR_3->i2c_adap, &VAR_10, 1) != 1) return -VAR_0;
 return 0;
}
