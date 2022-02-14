
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
struct zl10036_state {int dummy; } ;
struct TYPE_6__ {int symbol_rate; } ;
struct TYPE_7__ {TYPE_2__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_5__ {int frequency_min; int frequency_max; } ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ info; } ;
struct dvb_frontend {TYPE_4__ ops; struct zl10036_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct zl10036_state*) ;
 int FUNC_4 (struct zl10036_state*,int) ;
 int FUNC_5 (struct zl10036_state*,int) ;
 int FUNC_6 (struct zl10036_state*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_2,
  struct dvb_frontend_parameters *VAR_3)
{
 struct zl10036_state *VAR_4 = VAR_2->tuner_priv;
 int VAR_5 = 0;
 u32 VAR_6 = VAR_3->frequency;
 u32 VAR_7;
 int VAR_8;
 u8 VAR_9;



 if ((VAR_6 < VAR_2->ops.info.frequency_min)
 || (VAR_6 > VAR_2->ops.info.frequency_max))
  return -VAR_0;






 VAR_7 = (27 * VAR_3->u.qpsk.symbol_rate) / 32;


 VAR_7 /= 1000;


 VAR_7 += 3000;


 if (VAR_6 < 950000)
  return -VAR_0;
 else if (VAR_6 < 1250000)
  VAR_9 = 0;
 else if (VAR_6 < 1750000)
  VAR_9 = 1;
 else if (VAR_6 < 2175000)
  VAR_9 = 2;
 else
  return -VAR_0;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 VAR_5 = FUNC_6(VAR_4, VAR_9);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = FUNC_5(VAR_4, VAR_3->frequency);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = FUNC_4(VAR_4, VAR_7);
 if (VAR_5 < 0)
  goto error;


 for (VAR_8 = 0; VAR_8 < 20; VAR_8++) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 < 0)
   goto error;


  if (VAR_5 & VAR_1)
   break;

  FUNC_0(10);
 }

error:
 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);

 return VAR_5;
}
