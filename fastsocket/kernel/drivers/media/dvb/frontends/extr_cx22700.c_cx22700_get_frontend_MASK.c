
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ofdm; } ;
struct dvb_frontend_parameters {TYPE_1__ u; int inversion; } ;
struct dvb_frontend {struct cx22700_state* demodulator_priv; } ;
struct cx22700_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx22700_state*,int *) ;
 int FUNC_1 (struct cx22700_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct cx22700_state* VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5 = FUNC_1 (VAR_4, 0x09);

 VAR_3->inversion = VAR_5 & 0x1 ? VAR_1 : VAR_0;
 return FUNC_0 (VAR_4, &VAR_3->u.ofdm);
}
