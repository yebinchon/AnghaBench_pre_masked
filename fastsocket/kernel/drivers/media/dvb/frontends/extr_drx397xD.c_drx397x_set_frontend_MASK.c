
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct drx397xD_state* demodulator_priv; } ;
struct TYPE_2__ {int s20d24; } ;
struct drx397xD_state {TYPE_1__ config; } ;


 int FUNC_0 (struct drx397xD_state*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
    struct dvb_frontend_parameters *VAR_1)
{
 struct drx397xD_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_2->config.s20d24 = 1;

 return FUNC_0(VAR_2, VAR_1);
}
