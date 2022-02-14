
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
typedef int msg ;
struct TYPE_3__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct saa7134_dev *VAR_2 = VAR_1->dvb->priv;

 static u8 VAR_3[] = { 0x00, 0x14 };
 struct i2c_msg VAR_4 = {.addr = 0x43,.flags = 0,.buf = VAR_3,.len = sizeof(VAR_3) };

 if (FUNC_1(VAR_1))
  return -VAR_0;


 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 FUNC_0(&VAR_2->i2c_adap, &VAR_4, 1);
 return 0;
}
