
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cx22702_state* demodulator_priv; int ops; } ;
struct cx22702_state {struct dvb_frontend frontend; struct i2c_adapter* i2c; struct cx22702_config const* config; } ;
struct cx22702_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx22702_state*,int) ;
 int FUNC_1 (struct cx22702_state*) ;
 struct cx22702_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;

struct dvb_frontend *FUNC_4(const struct cx22702_config *VAR_2,
 struct i2c_adapter *VAR_3)
{
 struct cx22702_state *VAR_4 = ((void*)0);


 VAR_4 = FUNC_2(sizeof(struct cx22702_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;


 if (FUNC_0(VAR_4, 0x1f) != 0x3)
  goto error;


 FUNC_3(&VAR_4->frontend.ops, &VAR_1,
  sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_1(VAR_4);
 return ((void*)0);
}
