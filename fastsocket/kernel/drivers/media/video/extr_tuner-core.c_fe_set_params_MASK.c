
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tuner {int dummy; } ;
struct dvb_tuner_ops {int (* set_analog_params ) (struct dvb_frontend*,struct analog_parameters*) ;} ;
struct TYPE_2__ {struct dvb_tuner_ops tuner_ops; } ;
struct dvb_frontend {struct tuner* analog_demod_priv; TYPE_1__ ops; } ;
struct analog_parameters {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0,
     struct analog_parameters *VAR_1)
{
 struct dvb_tuner_ops *VAR_2 = &VAR_0->ops.tuner_ops;
 struct tuner *VAR_3 = VAR_0->analog_demod_priv;

 if (((void*)0) == VAR_2->set_analog_params) {
  FUNC_1("Tuner frontend module has no way to set freq\n");
  return;
 }
 VAR_2->set_analog_params(VAR_0, VAR_1);
}
