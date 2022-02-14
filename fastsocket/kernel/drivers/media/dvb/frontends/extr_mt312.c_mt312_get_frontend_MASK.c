
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt312_state {int dummy; } ;
struct TYPE_3__ {int fec_inner; int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;


 int FUNC_0 (struct mt312_state*,int *) ;
 int FUNC_1 (struct mt312_state*,int *) ;
 int FUNC_2 (struct mt312_state*,int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0,
         struct dvb_frontend_parameters *VAR_1)
{
 struct mt312_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_1->inversion);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, &VAR_1->u.qpsk.symbol_rate);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1->u.qpsk.fec_inner);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
