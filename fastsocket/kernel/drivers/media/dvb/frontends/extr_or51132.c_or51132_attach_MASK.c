
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct or51132_state* demodulator_priv; int ops; } ;
struct or51132_state {int current_frequency; int current_modulation; struct dvb_frontend frontend; struct i2c_adapter* i2c; struct or51132_config const* config; } ;
struct or51132_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct or51132_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;

struct dvb_frontend* FUNC_2(const struct or51132_config* VAR_2,
        struct i2c_adapter* VAR_3)
{
 struct or51132_state* VAR_4 = ((void*)0);


 VAR_4 = FUNC_0(sizeof(struct or51132_state), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->current_frequency = -1;
 VAR_4->current_modulation = -1;


 FUNC_1(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;
}
