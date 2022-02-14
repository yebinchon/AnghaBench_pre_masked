
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct nxt6000_state* demodulator_priv; int ops; } ;
struct nxt6000_state {struct dvb_frontend frontend; struct i2c_adapter* i2c; struct nxt6000_config const* config; } ;
struct nxt6000_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nxt6000_state*) ;
 struct nxt6000_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct nxt6000_state*,int ) ;

struct dvb_frontend* FUNC_4(const struct nxt6000_config* VAR_4,
        struct i2c_adapter* VAR_5)
{
 struct nxt6000_state* VAR_6 = ((void*)0);


 VAR_6 = FUNC_1(sizeof(struct nxt6000_state), VAR_0);
 if (VAR_6 == ((void*)0)) goto error;


 VAR_6->config = VAR_4;
 VAR_6->i2c = VAR_5;


 if (FUNC_3(VAR_6, VAR_2) != VAR_1) goto error;


 FUNC_2(&VAR_6->frontend.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
 VAR_6->frontend.demodulator_priv = VAR_6;
 return &VAR_6->frontend;

error:
 FUNC_0(VAR_6);
 return ((void*)0);
}
