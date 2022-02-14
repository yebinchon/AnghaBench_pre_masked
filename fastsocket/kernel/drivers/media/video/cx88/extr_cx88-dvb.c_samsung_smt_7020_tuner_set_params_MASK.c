
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
struct cx8802_dev {TYPE_3__* core; } ;
typedef int buf ;
struct TYPE_6__ {int i2c_adap; } ;
struct TYPE_4__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
 struct dvb_frontend_parameters *VAR_2)
{
 struct cx8802_dev *VAR_3 = VAR_1->dvb->priv;
 u8 VAR_4[4];
 u32 VAR_5;
 struct i2c_msg VAR_6 = {
  .addr = 0x61,
  .flags = 0,
  .buf = VAR_4,
  .len = sizeof(VAR_4) };

 VAR_5 = VAR_2->frequency / 125;

 VAR_4[0] = (VAR_5 >> 8) & 0x7f;
 VAR_4[1] = VAR_5 & 0xff;
 VAR_4[2] = 0x84;
 VAR_4[3] = 0x00;

 if (VAR_2->frequency < 1500000)
  VAR_4[3] |= 0x10;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 if (FUNC_0(&VAR_3->core->i2c_adap, &VAR_6, 1) != 1)
  return -VAR_0;

 return 0;
}
