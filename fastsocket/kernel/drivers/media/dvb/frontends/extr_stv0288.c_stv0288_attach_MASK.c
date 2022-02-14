
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct stv0288_state* demodulator_priv; int ops; } ;
struct stv0288_state {struct dvb_frontend frontend; int errmode; scalar_t__ fec_inner; scalar_t__ symbol_rate; scalar_t__ tuner_frequency; scalar_t__ initialised; struct i2c_adapter* i2c; struct stv0288_config const* config; } ;
struct stv0288_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct stv0288_state*) ;
 struct stv0288_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (struct stv0288_state*,int) ;
 int FUNC_6 (struct stv0288_state*,int,int) ;

struct dvb_frontend *FUNC_7(const struct stv0288_config *VAR_3,
        struct i2c_adapter *VAR_4)
{
 struct stv0288_state *VAR_5 = ((void*)0);
 int VAR_6;


 VAR_5 = FUNC_2(sizeof(struct stv0288_state), VAR_0);
 if (VAR_5 == ((void*)0))
  goto error;


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;
 VAR_5->initialised = 0;
 VAR_5->tuner_frequency = 0;
 VAR_5->symbol_rate = 0;
 VAR_5->fec_inner = 0;
 VAR_5->errmode = VAR_1;

 FUNC_6(VAR_5, 0x41, 0x04);
 FUNC_4(200);
 VAR_6 = FUNC_5(VAR_5, 0x00);
 FUNC_0("stv0288 id %x\n", VAR_6);


 if (VAR_6 != 0x11)
  goto error;


 FUNC_3(&VAR_5->frontend.ops, &VAR_2,
   sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;
 return &VAR_5->frontend;

error:
 FUNC_1(VAR_5);

 return ((void*)0);
}
