
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
typedef int buf ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters* VAR_2)
{
 struct dvb_bt8xx_card *VAR_3 = (struct dvb_bt8xx_card *) VAR_1->dvb->priv;
 u8 VAR_4[4];
 u32 VAR_5;
 struct i2c_msg VAR_6 = { .addr = 0x60, .flags = 0, .buf = VAR_4, .len = sizeof(VAR_4) };

 VAR_5 = (VAR_2->frequency + 36166667) / 166667;

 VAR_4[0] = (VAR_5 >> 8) & 0x7F;
 VAR_4[1] = VAR_5 & 0xFF;
 VAR_4[2] = 0x85;
 if ((VAR_2->frequency >= 47000000) && (VAR_2->frequency < 153000000))
  VAR_4[3] = 0x01;
 else if ((VAR_2->frequency >= 153000000) && (VAR_2->frequency < 430000000))
  VAR_4[3] = 0x02;
 else if ((VAR_2->frequency >= 430000000) && (VAR_2->frequency < 824000000))
  VAR_4[3] = 0x0C;
 else if ((VAR_2->frequency >= 824000000) && (VAR_2->frequency < 863000000))
  VAR_4[3] = 0x8C;
 else
  return -VAR_0;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 FUNC_0(VAR_3->i2c_adapter, &VAR_6, 1);
 return 0;
}
