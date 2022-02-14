
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
struct dvb_bt8xx_card {int i2c_adapter; } ;
typedef int data ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, struct dvb_frontend_parameters* VAR_1)
{
 struct dvb_bt8xx_card *VAR_2 = (struct dvb_bt8xx_card *) VAR_0->dvb->priv;
 u8 VAR_3, VAR_4, VAR_5;
 u8 VAR_6[4];
 u32 VAR_7;
 struct i2c_msg VAR_8 = { .addr = 0x60, .flags = 0, .buf = VAR_6, .len = sizeof(VAR_6) };

 VAR_7 = (36000000 + VAR_1->frequency + 83333) / 166666;
 VAR_3 = 0x88;

 if (VAR_1->frequency < 175000000)
  VAR_4 = 2;
 else if (VAR_1->frequency < 390000000)
  VAR_4 = 1;
 else if (VAR_1->frequency < 470000000)
  VAR_4 = 2;
 else if (VAR_1->frequency < 750000000)
  VAR_4 = 2;
 else
  VAR_4 = 3;

 if (VAR_1->frequency < 175000000)
  VAR_5 = 0x0e;
 else if (VAR_1->frequency < 470000000)
  VAR_5 = 0x05;
 else
  VAR_5 = 0x03;

 VAR_6[0] = (VAR_7 >> 8) & 0x7f;
 VAR_6[1] = VAR_7 & 0xff;
 VAR_6[2] = ((VAR_7 >> 10) & 0x60) | VAR_3;
 VAR_6[3] = (VAR_4 << 6) | VAR_5;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);
 FUNC_0(VAR_2->i2c_adapter, &VAR_8, 1);
 return (VAR_7 * 166666 - 36000000);
}
