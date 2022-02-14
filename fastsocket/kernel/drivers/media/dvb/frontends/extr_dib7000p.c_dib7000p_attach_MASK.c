
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int parent; } ;
struct i2c_adapter {TYPE_3__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_9__ {scalar_t__ output_mode; } ;
struct dvb_frontend {TYPE_4__ ops; struct dib7000p_state* demodulator_priv; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;
struct TYPE_10__ {TYPE_2__ gated_tuner_i2c_adap; } ;
struct dib7000p_state {int i2c_addr; struct i2c_adapter* i2c_adap; TYPE_5__ i2c_master; struct dvb_frontend demod; TYPE_4__ cfg; int gpio_dir; int gpio_val; } ;
struct dib7000p_config {int gpio_dir; int gpio_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dib7000p_state*) ;
 scalar_t__ FUNC_1 (struct dib7000p_state*) ;
 struct dib7000p_config VAR_5 ;
 int FUNC_2 (struct dib7000p_state*,int,int) ;
 int FUNC_3 (TYPE_5__*,int ,struct i2c_adapter*,int ) ;
 int FUNC_4 (struct dib7000p_state*) ;
 struct dib7000p_state* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_4__*,struct dib7000p_config*,int) ;

struct dvb_frontend * FUNC_7(struct i2c_adapter *VAR_6, u8 VAR_7, struct dib7000p_config *VAR_8)
{
 struct dvb_frontend *VAR_9;
 struct dib7000p_state *VAR_10;
 VAR_10 = FUNC_5(sizeof(struct dib7000p_state), VAR_1);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_6(&VAR_10->cfg, VAR_8, sizeof(struct dib7000p_config));
 VAR_10->i2c_adap = VAR_6;
 VAR_10->i2c_addr = VAR_7;
 VAR_10->gpio_val = VAR_8->gpio_val;
 VAR_10->gpio_dir = VAR_8->gpio_dir;




 if ((VAR_10->cfg.output_mode != VAR_4) &&
     (VAR_10->cfg.output_mode != VAR_3))
  VAR_10->cfg.output_mode = VAR_2;

 VAR_9 = &VAR_10->demod;
 VAR_9->demodulator_priv = VAR_10;
 FUNC_6(&VAR_10->demod.ops, &VAR_5, sizeof(struct dvb_frontend_ops));

    FUNC_2(VAR_10, 1287, 0x0003);

 if (FUNC_1(VAR_10) != 0)
  goto error;




 VAR_10->i2c_master.gated_tuner_i2c_adap.dev.parent = VAR_6->dev.parent;

 FUNC_3(&VAR_10->i2c_master, VAR_0, VAR_10->i2c_adap, VAR_10->i2c_addr);

 FUNC_0(VAR_10);

 return VAR_9;

error:
 FUNC_4(VAR_10);
 return ((void*)0);
}
