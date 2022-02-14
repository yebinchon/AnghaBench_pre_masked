
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_5__ {scalar_t__ output_mode; } ;
struct dvb_frontend {TYPE_2__ ops; struct dib8000_state* demodulator_priv; } ;
struct TYPE_6__ {int addr; struct i2c_adapter* adap; } ;
struct dib8000_state {TYPE_3__ i2c; int i2c_master; int timf_default; struct dvb_frontend fe; TYPE_2__ cfg; int gpio_dir; int gpio_val; } ;
struct dib8000_config {TYPE_1__* pll; int gpio_dir; int gpio_val; } ;
struct TYPE_4__ {int timf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 struct dib8000_config VAR_5 ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dib8000_state*,int,int) ;
 int FUNC_4 (int *,int ,struct i2c_adapter*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct dib8000_state*) ;
 struct dib8000_state* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_2__*,struct dib8000_config*,int) ;

struct dvb_frontend *FUNC_9(struct i2c_adapter *VAR_6, u8 VAR_7, struct dib8000_config *VAR_8)
{
 struct dvb_frontend *VAR_9;
 struct dib8000_state *VAR_10;

 FUNC_5("dib8000_attach");

 VAR_10 = FUNC_7(sizeof(struct dib8000_state), VAR_1);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_8(&VAR_10->cfg, VAR_8, sizeof(struct dib8000_config));
 VAR_10->i2c.adap = VAR_6;
 VAR_10->i2c.addr = VAR_7;
 VAR_10->gpio_val = VAR_8->gpio_val;
 VAR_10->gpio_dir = VAR_8->gpio_dir;




 if ((VAR_10->cfg.output_mode != VAR_4) && (VAR_10->cfg.output_mode != VAR_3))
  VAR_10->cfg.output_mode = VAR_2;

 VAR_9 = &VAR_10->fe;
 VAR_9->demodulator_priv = VAR_10;
 FUNC_8(&VAR_10->fe.ops, &VAR_5, sizeof(struct dvb_frontend_ops));

 VAR_10->timf_default = VAR_8->pll->timf;

 if (FUNC_0(&VAR_10->i2c) == 0)
  goto error;

 FUNC_4(&VAR_10->i2c_master, VAR_0, VAR_10->i2c.adap, VAR_10->i2c.addr);

 FUNC_2(VAR_9);

 FUNC_3(VAR_10, 285, (FUNC_1(VAR_10, 285) & ~0x60) | (3 << 5));

 return VAR_9;

 error:
 FUNC_6(VAR_10);
 return ((void*)0);
}
