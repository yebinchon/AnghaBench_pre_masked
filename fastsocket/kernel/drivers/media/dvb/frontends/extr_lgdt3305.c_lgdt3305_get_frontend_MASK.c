
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lgdt3305_state {int current_frequency; int current_modulation; } ;
struct TYPE_3__ {int modulation; } ;
struct TYPE_4__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
     struct dvb_frontend_parameters *VAR_1)
{
 struct lgdt3305_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_0("\n");

 VAR_1->u.vsb.modulation = VAR_2->current_modulation;
 VAR_1->frequency = VAR_2->current_frequency;
 return 0;
}
