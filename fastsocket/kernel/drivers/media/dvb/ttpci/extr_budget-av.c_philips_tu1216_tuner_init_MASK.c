
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tu1216_init ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
struct budget {int i2c_adap; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct budget *VAR_2 = (struct budget *) VAR_1->dvb->priv;
 static u8 VAR_3[] = { 0x0b, 0xf5, 0x85, 0xab };
 struct i2c_msg VAR_4 = {.addr = 0x60,.flags = 0,.buf = VAR_3,.len = sizeof(VAR_3) };


 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0(&VAR_2->i2c_adap, &VAR_4, 1) != 1)
  return -VAR_0;
 FUNC_1(1);

 return 0;
}
