
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_6__ {int * adap; } ;
struct tuner_simple_priv {void* bandwidth; void* frequency; TYPE_3__ i2c_props; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_4__ {int (* standby ) (struct dvb_frontend*) ;} ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ analog_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*,int *,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
     struct dvb_frontend_parameters *VAR_2)
{
 struct tuner_simple_priv *VAR_3 = VAR_1->tuner_priv;
 u32 VAR_4, VAR_5;
 int VAR_6;
 u8 VAR_7[5];

 if (VAR_3->i2c_props.adap == ((void*)0))
  return -VAR_0;

 VAR_4 = VAR_3->frequency;
 VAR_5 = VAR_3->bandwidth;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_7, 5);
 if (VAR_6 != 5)
  goto fail;


 if (VAR_1->ops.analog_ops.standby)
  VAR_1->ops.analog_ops.standby(VAR_1);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);



 VAR_6 = FUNC_3(&VAR_3->i2c_props, VAR_7+1, 4);
 if (VAR_6 != 4)
  goto fail;

 return 0;
fail:

 VAR_3->frequency = VAR_4;
 VAR_3->bandwidth = VAR_5;

 return VAR_6;
}
