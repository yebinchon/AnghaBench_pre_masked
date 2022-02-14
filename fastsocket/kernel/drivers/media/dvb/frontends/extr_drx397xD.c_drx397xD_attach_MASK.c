
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct drx397xD_state* demodulator_priv; int ops; } ;
struct drx397xD_state {struct dvb_frontend frontend; int config; struct i2c_adapter* i2c; } ;
struct drx397xD_config {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drx397xD_state*,int) ;
 struct drx397xD_config const VAR_1 ;
 int FUNC_1 (struct drx397xD_state*) ;
 struct drx397xD_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct drx397xD_config const*,int) ;

struct dvb_frontend *FUNC_4(const struct drx397xD_config *VAR_2,
         struct i2c_adapter *VAR_3)
{
 struct drx397xD_state *VAR_4;


 VAR_4 = FUNC_2(sizeof(struct drx397xD_state), VAR_0);
 if (!VAR_4)
  goto error;


 VAR_4->i2c = VAR_3;
 FUNC_3(&VAR_4->config, VAR_2, sizeof(struct drx397xD_config));


 if (FUNC_0(VAR_4, 0x2410019) < 0)
  goto error;


 FUNC_3(&VAR_4->frontend.ops, &VAR_1,
   sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;

 return &VAR_4->frontend;
error:
 FUNC_1(VAR_4);

 return ((void*)0);
}
