
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {int ops; struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int i2c_addr; struct i2c_adapter* i2c_adap; int i2c_master; struct dvb_frontend demod; struct dib3000mc_config* cfg; } ;
struct dib3000mc_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dib3000mc_state*) ;
 int VAR_2 ;
 int FUNC_1 (struct dib3000mc_state*,int,int) ;
 int FUNC_2 (int *,int ,struct i2c_adapter*,int ) ;
 int FUNC_3 (struct dib3000mc_state*) ;
 struct dib3000mc_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;

struct dvb_frontend * FUNC_6(struct i2c_adapter *VAR_3, u8 VAR_4, struct dib3000mc_config *VAR_5)
{
 struct dvb_frontend *VAR_6;
 struct dib3000mc_state *VAR_7;
 VAR_7 = FUNC_4(sizeof(struct dib3000mc_state), VAR_1);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->cfg = VAR_5;
 VAR_7->i2c_adap = VAR_3;
 VAR_7->i2c_addr = VAR_4;

 VAR_6 = &VAR_7->demod;
 VAR_6->demodulator_priv = VAR_7;
 FUNC_5(&VAR_7->demod.ops, &VAR_2, sizeof(struct dvb_frontend_ops));

 if (FUNC_0(VAR_7) != 0)
  goto error;

 FUNC_2(&VAR_7->i2c_master, VAR_0, VAR_7->i2c_adap, VAR_7->i2c_addr);

 FUNC_1(VAR_7, 1037, 0x3130);

 return VAR_6;

error:
 FUNC_3(VAR_7);
 return ((void*)0);
}
