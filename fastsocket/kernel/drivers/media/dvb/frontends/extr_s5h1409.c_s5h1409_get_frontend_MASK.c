
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5h1409_state {int current_modulation; int current_frequency; } ;
struct TYPE_3__ {int modulation; } ;
struct TYPE_4__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int frequency; } ;
struct dvb_frontend {struct s5h1409_state* demodulator_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
    struct dvb_frontend_parameters *VAR_1)
{
 struct s5h1409_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_1->frequency = VAR_2->current_frequency;
 VAR_1->u.vsb.modulation = VAR_2->current_modulation;

 return 0;
}
