
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct dib3000_state* demodulator_priv; int ops; } ;
struct dib_fe_xfer_ops {int tuner_pass_ctrl; int pid_ctrl; int fifo_ctrl; int pid_parse; } ;
struct dib3000_state {struct dvb_frontend frontend; int config; struct i2c_adapter* i2c; } ;
struct dib3000_config {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dib3000_config const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct dib3000_state*) ;
 struct dib3000_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct dib3000_config const*,int) ;
 scalar_t__ FUNC_3 (int ) ;

struct dvb_frontend* FUNC_4(const struct dib3000_config* VAR_10,
          struct i2c_adapter* VAR_11, struct dib_fe_xfer_ops *VAR_12)
{
 struct dib3000_state* VAR_13 = ((void*)0);


 VAR_13 = FUNC_1(sizeof(struct dib3000_state), VAR_4);
 if (VAR_13 == ((void*)0))
  goto error;


 VAR_13->i2c = VAR_11;
 FUNC_2(&VAR_13->config,VAR_10,sizeof(struct dib3000_config));


 if (FUNC_3(VAR_3) != VAR_1)
  goto error;

 if (FUNC_3(VAR_2) != VAR_0)
  goto error;


 FUNC_2(&VAR_13->frontend.ops, &VAR_6, sizeof(struct dvb_frontend_ops));
 VAR_13->frontend.demodulator_priv = VAR_13;


 VAR_12->pid_parse = VAR_8;
 VAR_12->fifo_ctrl = VAR_5;
 VAR_12->pid_ctrl = VAR_7;
 VAR_12->tuner_pass_ctrl = VAR_9;

 return &VAR_13->frontend;

error:
 FUNC_0(VAR_13);
 return ((void*)0);
}
