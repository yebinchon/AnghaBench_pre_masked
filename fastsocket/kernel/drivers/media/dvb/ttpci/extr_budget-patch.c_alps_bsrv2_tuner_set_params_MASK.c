
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
struct budget_patch {int i2c_adap; } ;
typedef int buf ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters* VAR_2)
{
 struct budget_patch* VAR_3 = (struct budget_patch*) VAR_1->dvb->priv;
 u8 VAR_4 = 0;
 u8 VAR_5[4];
 struct i2c_msg VAR_6 = { .addr = 0x61, .flags = 0, .buf = VAR_5, .len = sizeof(VAR_5) };
 u32 VAR_7 = (VAR_2->frequency + 479500) / 125;

 if (VAR_2->frequency > 2000000) VAR_4 = 3;
 else if (VAR_2->frequency > 1800000) VAR_4 = 2;
 else if (VAR_2->frequency > 1600000) VAR_4 = 1;
 else if (VAR_2->frequency > 1200000) VAR_4 = 0;
 else if (VAR_2->frequency >= 1100000) VAR_4 = 1;
 else VAR_4 = 2;

 VAR_5[0] = (VAR_7 >> 8) & 0x7f;
 VAR_5[1] = VAR_7 & 0xff;
 VAR_5[2] = ((VAR_7 & 0x18000) >> 10) | 0x95;
 VAR_5[3] = (VAR_4 << 6) | 0x30;




 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0 (&VAR_3->i2c_adap, &VAR_6, 1) != 1)
  return -VAR_0;
 return 0;
}
