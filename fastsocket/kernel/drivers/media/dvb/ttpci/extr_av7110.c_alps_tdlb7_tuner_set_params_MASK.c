
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
 u32 VAR_4, VAR_5;
 u8 VAR_6[4];
 struct i2c_msg VAR_7 = { .addr = 0x60, .flags = 0, .buf = VAR_6, .len = sizeof(VAR_6) };

 VAR_4 = (VAR_2->frequency + 36200000) / 166666;

 if (VAR_2->frequency <= 782000000)
  VAR_5 = 1;
 else
  VAR_5 = 2;

 VAR_6[0] = (VAR_4 >> 8) & 0x7f;
 VAR_6[1] = VAR_4 & 0xff;
 VAR_6[2] = 0x85;
 VAR_6[3] = VAR_5 << 6;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0(&VAR_3->i2c_adap, &VAR_7, 1) != 1)
  return -VAR_0;
 return 0;
}
