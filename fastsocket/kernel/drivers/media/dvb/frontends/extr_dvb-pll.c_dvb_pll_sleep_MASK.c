
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_msg {int len; int * buf; int addr; int flags; } ;
struct dvb_pll_priv {int * i2c; TYPE_2__* pll_desc; int pll_i2c_address; } ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct dvb_pll_priv* tuner_priv; } ;
struct TYPE_4__ {int * sleepdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dvb_pll_priv *VAR_2 = VAR_1->tuner_priv;

 if (VAR_2->i2c == ((void*)0))
  return -VAR_0;

 if (VAR_2->pll_desc->sleepdata) {
  struct i2c_msg VAR_3 = { .flags = 0,
   .addr = VAR_2->pll_i2c_address,
   .buf = VAR_2->pll_desc->sleepdata + 1,
   .len = VAR_2->pll_desc->sleepdata[0] };

  int VAR_4;

  if (VAR_1->ops.i2c_gate_ctrl)
   VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
  if ((VAR_4 = FUNC_0(VAR_2->i2c, &VAR_3, 1)) != 1) {
   return VAR_4;
  }
  return 0;
 }

 return -VAR_0;
}
