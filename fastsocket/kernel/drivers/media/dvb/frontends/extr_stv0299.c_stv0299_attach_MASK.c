
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct stv0299_state* demodulator_priv; int ops; } ;
struct stv0299_state {struct dvb_frontend frontend; int errmode; scalar_t__ fec_inner; scalar_t__ symbol_rate; scalar_t__ tuner_frequency; scalar_t__ initialised; struct i2c_adapter* i2c; struct stv0299_config const* config; } ;
struct stv0299_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv0299_state*) ;
 struct stv0299_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct stv0299_state*,int) ;
 int FUNC_5 (struct stv0299_state*,int,int) ;

struct dvb_frontend* FUNC_6(const struct stv0299_config* VAR_3,
        struct i2c_adapter* VAR_4)
{
 struct stv0299_state* VAR_5 = ((void*)0);
 int VAR_6;


 VAR_5 = FUNC_1(sizeof(struct stv0299_state), VAR_0);
 if (VAR_5 == ((void*)0)) goto error;


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;
 VAR_5->initialised = 0;
 VAR_5->tuner_frequency = 0;
 VAR_5->symbol_rate = 0;
 VAR_5->fec_inner = 0;
 VAR_5->errmode = VAR_1;


 FUNC_5(VAR_5, 0x02, 0x34);
 FUNC_3(200);
 VAR_6 = FUNC_4(VAR_5, 0x00);



 if (VAR_6 != 0xa1 && VAR_6 != 0x80) goto error;


 FUNC_2(&VAR_5->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;
 return &VAR_5->frontend;

error:
 FUNC_0(VAR_5);
 return ((void*)0);
}
