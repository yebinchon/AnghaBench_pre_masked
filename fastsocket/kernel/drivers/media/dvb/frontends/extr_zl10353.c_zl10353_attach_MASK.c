
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct zl10353_state* demodulator_priv; int ops; } ;
struct zl10353_state {struct dvb_frontend frontend; int config; struct i2c_adapter* i2c; } ;
struct zl10353_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct zl10353_state*) ;
 struct zl10353_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct zl10353_config const*,int) ;
 struct zl10353_config const VAR_5 ;
 int FUNC_3 (struct zl10353_state*,int ) ;

struct dvb_frontend *FUNC_4(const struct zl10353_config *VAR_6,
        struct i2c_adapter *VAR_7)
{
 struct zl10353_state *VAR_8 = ((void*)0);
 int VAR_9;


 VAR_8 = FUNC_1(sizeof(struct zl10353_state), VAR_1);
 if (VAR_8 == ((void*)0))
  goto error;


 VAR_8->i2c = VAR_7;
 FUNC_2(&VAR_8->config, VAR_6, sizeof(struct zl10353_config));


 VAR_9 = FUNC_3(VAR_8, VAR_0);
 if ((VAR_9 != VAR_4) && (VAR_9 != VAR_2) && (VAR_9 != VAR_3))
  goto error;


 FUNC_2(&VAR_8->frontend.ops, &VAR_5, sizeof(struct dvb_frontend_ops));
 VAR_8->frontend.demodulator_priv = VAR_8;

 return &VAR_8->frontend;
error:
 FUNC_0(VAR_8);
 return ((void*)0);
}
