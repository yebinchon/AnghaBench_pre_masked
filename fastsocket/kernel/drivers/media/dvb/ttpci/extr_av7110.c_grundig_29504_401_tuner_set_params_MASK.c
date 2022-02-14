
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
struct av7110 {int i2c_adap; } ;
typedef int data ;
struct TYPE_3__ {struct av7110* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters *VAR_2)
{
 struct av7110* VAR_3 = VAR_1->dvb->priv;
 u32 VAR_4;
 u8 VAR_5, VAR_6, VAR_7;
 u8 VAR_8[4];
 struct i2c_msg VAR_9 = { .addr = 0x61, .flags = 0, .buf = VAR_8, .len = sizeof(VAR_8) };

 VAR_4 = (36125000 + VAR_2->frequency) / 166666;

 VAR_5 = 0x88;

 if (VAR_2->frequency < 175000000) VAR_6 = 2;
 else if (VAR_2->frequency < 390000000) VAR_6 = 1;
 else if (VAR_2->frequency < 470000000) VAR_6 = 2;
 else if (VAR_2->frequency < 750000000) VAR_6 = 1;
 else VAR_6 = 3;

 if (VAR_2->frequency < 175000000) VAR_7 = 0x0e;
 else if (VAR_2->frequency < 470000000) VAR_7 = 0x05;
 else VAR_7 = 0x03;

 VAR_8[0] = (VAR_4 >> 8) & 0x7f;
 VAR_8[1] = VAR_4 & 0xff;
 VAR_8[2] = ((VAR_4 >> 10) & 0x60) | VAR_5;
 VAR_8[3] = (VAR_6 << 6) | VAR_7;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0 (&VAR_3->i2c_adap, &VAR_9, 1) != 1) return -VAR_0;
 return 0;
}
