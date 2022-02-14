
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
struct budget {int i2c_adap; } ;
typedef int data ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters* VAR_2)
{
 struct budget* VAR_3 = (struct budget*) VAR_1->dvb->priv;
 u32 VAR_4;
 u8 VAR_5[4];
 struct i2c_msg VAR_6 = { .addr = 0x61, .flags = 0, .buf = VAR_5, .len = sizeof(VAR_5) };

 VAR_4 = VAR_2->frequency / 1000;
 VAR_5[0] = (VAR_4 >> 8) & 0x7f;
 VAR_5[1] = VAR_4 & 0xff;
 VAR_5[2] = 0xc2;

 if (VAR_4 < 1450)
  VAR_5[3] = 0x00;
 else if (VAR_4 < 1850)
  VAR_5[3] = 0x40;
 else if (VAR_4 < 2000)
  VAR_5[3] = 0x80;
 else
  VAR_5[3] = 0xc0;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0 (&VAR_3->i2c_adap, &VAR_6, 1) != 1) return -VAR_0;

 return 0;
}
