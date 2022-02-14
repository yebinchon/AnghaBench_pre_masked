
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int tune_state; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;



int FUNC_0(struct dvb_frontend *VAR_0, enum frontend_tune_state VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 VAR_2->tune_state = VAR_1;
 return 0;
}
