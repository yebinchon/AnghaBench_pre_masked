
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int tune_state; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;



enum frontend_tune_state FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib0090_state *VAR_1 = VAR_0->tuner_priv;

 return VAR_1->tune_state;
}
