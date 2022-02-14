
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_6__ {int symbol_rate; } ;
struct TYPE_7__ {TYPE_2__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_4__ ops; TYPE_1__* dvb; } ;
struct budget {int i2c_adap; } ;
typedef int buf ;
struct TYPE_5__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
       struct dvb_frontend_parameters *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5[4];
 struct budget *VAR_6 = (struct budget *) VAR_2->dvb->priv;
 struct i2c_msg VAR_7 = {.addr = 0x61,.flags = 0,.buf = VAR_5,.len = sizeof(VAR_5) };

 if ((VAR_3->frequency < 950000) || (VAR_3->frequency > 2150000))
  return -VAR_0;

 VAR_4 = (VAR_3->frequency + (125 - 1)) / 125;
 VAR_5[0] = (VAR_4 >> 8) & 0x7f;
 VAR_5[1] = VAR_4 & 0xff;
 VAR_5[2] = 0x80 | ((VAR_4 & 0x18000) >> 10) | 4;
 VAR_5[3] = 0x20;

 if (VAR_3->u.qpsk.symbol_rate < 4000000)
  VAR_5[3] |= 1;

 if (VAR_3->frequency < 1250000)
  VAR_5[3] |= 0;
 else if (VAR_3->frequency < 1550000)
  VAR_5[3] |= 0x40;
 else if (VAR_3->frequency < 2050000)
  VAR_5[3] |= 0x80;
 else if (VAR_3->frequency < 2150000)
  VAR_5[3] |= 0xC0;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if (FUNC_0(&VAR_6->i2c_adap, &VAR_7, 1) != 1)
  return -VAR_1;
 return 0;
}
