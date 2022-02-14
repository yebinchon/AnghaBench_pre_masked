
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {struct i2c_adapter tuner_i2c_adapter; } ;



struct i2c_adapter *
 FUNC_0(struct dvb_frontend *VAR_0)
{
 struct cx24123_state *VAR_1 = VAR_0->demodulator_priv;
 return &VAR_1->tuner_i2c_adapter;
}
