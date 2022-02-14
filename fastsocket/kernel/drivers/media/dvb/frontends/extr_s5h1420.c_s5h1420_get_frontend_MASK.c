
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5h1420_state {scalar_t__ tunedfreq; } ;
struct TYPE_3__ {int fec_inner; int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; scalar_t__ frequency; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;


 int FUNC_0 (struct s5h1420_state*) ;
 scalar_t__ FUNC_1 (struct s5h1420_state*) ;
 int FUNC_2 (struct s5h1420_state*) ;
 int FUNC_3 (struct s5h1420_state*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend* VAR_0,
    struct dvb_frontend_parameters *VAR_1)
{
 struct s5h1420_state* VAR_2 = VAR_0->demodulator_priv;

 VAR_1->frequency = VAR_2->tunedfreq + FUNC_1(VAR_2);
 VAR_1->inversion = FUNC_2(VAR_2);
 VAR_1->u.qpsk.symbol_rate = FUNC_3(VAR_2);
 VAR_1->u.qpsk.fec_inner = FUNC_0(VAR_2);

 return 0;
}
