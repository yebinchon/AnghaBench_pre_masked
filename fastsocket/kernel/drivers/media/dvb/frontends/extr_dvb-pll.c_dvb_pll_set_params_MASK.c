
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
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_pll_priv {int frequency; int bandwidth; int * i2c; int pll_i2c_address; } ;
struct TYPE_7__ {int bandwidth; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_4__ u; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ info; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; struct dvb_pll_priv* tuner_priv; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int *,struct dvb_frontend_parameters*) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2,
         struct dvb_frontend_parameters *VAR_3)
{
 struct dvb_pll_priv *VAR_4 = VAR_2->tuner_priv;
 u8 VAR_5[4];
 struct i2c_msg VAR_6 =
  { .addr = VAR_4->pll_i2c_address, .flags = 0,
    .buf = VAR_5, .len = sizeof(VAR_5) };
 int VAR_7;
 u32 VAR_8 = 0;

 if (VAR_4->i2c == ((void*)0))
  return -VAR_0;

 if ((VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_3)) < 0)
  return VAR_7;
 else
  VAR_8 = VAR_7;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if ((VAR_7 = FUNC_1(VAR_4->i2c, &VAR_6, 1)) != 1) {
  return VAR_7;
 }

 VAR_4->frequency = VAR_8;
 VAR_4->bandwidth = (VAR_2->ops.info.type == VAR_1) ? VAR_3->u.ofdm.bandwidth : 0;

 return 0;
}
