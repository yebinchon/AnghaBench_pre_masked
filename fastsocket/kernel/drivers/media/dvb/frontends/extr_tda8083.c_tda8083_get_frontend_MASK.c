
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda8083_state {int dummy; } ;
struct TYPE_3__ {int fec_inner; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tda8083_state*) ;
 int FUNC_1 (struct tda8083_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct tda8083_state* VAR_4 = VAR_2->demodulator_priv;



 VAR_3->inversion = (FUNC_1 (VAR_4, 0x0e) & 0x80) ?
   VAR_1 : VAR_0;
 VAR_3->u.qpsk.fec_inner = FUNC_0 (VAR_4);


 return 0;
}
