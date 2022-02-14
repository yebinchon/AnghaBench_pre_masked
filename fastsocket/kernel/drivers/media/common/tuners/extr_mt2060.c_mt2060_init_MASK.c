
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt2060_priv {TYPE_2__* cfg; } ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mt2060_priv* tuner_priv; } ;
struct TYPE_4__ {int clock_out; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt2060_priv*,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct mt2060_priv *VAR_2 = VAR_1->tuner_priv;
 int VAR_3;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 VAR_3 = FUNC_0(VAR_2, VAR_0,
         (VAR_2->cfg->clock_out << 6) | 0x33);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 return VAR_3;
}
