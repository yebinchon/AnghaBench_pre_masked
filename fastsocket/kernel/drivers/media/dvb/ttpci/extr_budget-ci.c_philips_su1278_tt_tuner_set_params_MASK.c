
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_7__ {int symbol_rate; } ;
struct TYPE_8__ {TYPE_2__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_9__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_4__ ops; TYPE_1__* dvb; } ;
struct TYPE_10__ {int i2c_adap; } ;
struct budget_ci {TYPE_5__ budget; } ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
        struct dvb_frontend_parameters *VAR_3)
{
 struct budget_ci *VAR_4 = (struct budget_ci *) VAR_2->dvb->priv;
 u32 VAR_5;
 u8 VAR_6[4];
 struct i2c_msg VAR_7 = {.addr = 0x60,.flags = 0,.buf = VAR_6,.len = sizeof(VAR_6) };

 if ((VAR_3->frequency < 950000) || (VAR_3->frequency > 2150000))
  return -VAR_0;

 VAR_5 = (VAR_3->frequency + (500 - 1)) / 500;
 VAR_6[0] = (VAR_5 >> 8) & 0x7f;
 VAR_6[1] = VAR_5 & 0xff;
 VAR_6[2] = 0x80 | ((VAR_5 & 0x18000) >> 10) | 2;
 VAR_6[3] = 0x20;

 if (VAR_3->u.qpsk.symbol_rate < 4000000)
  VAR_6[3] |= 1;

 if (VAR_3->frequency < 1250000)
  VAR_6[3] |= 0;
 else if (VAR_3->frequency < 1550000)
  VAR_6[3] |= 0x40;
 else if (VAR_3->frequency < 2050000)
  VAR_6[3] |= 0x80;
 else if (VAR_3->frequency < 2150000)
  VAR_6[3] |= 0xC0;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if (FUNC_0(&VAR_4->budget.i2c_adap, &VAR_7, 1) != 1)
  return -VAR_1;
 return 0;
}
