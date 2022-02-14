
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ves1x93_state {scalar_t__ inversion; } ;
struct TYPE_3__ {int symbol_rate; int fec_inner; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; int inversion; } ;
struct dvb_frontend {struct ves1x93_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ves1x93_state*) ;
 int FUNC_1 (struct ves1x93_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_3, struct dvb_frontend_parameters *VAR_4)
{
 struct ves1x93_state* VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;

 VAR_6 = ((int)((char)(FUNC_1 (VAR_5, 0x0a) << 1)))/2;
 VAR_6 = (VAR_6 * (int)(VAR_4->u.qpsk.symbol_rate/1000/8))/16;

 VAR_4->frequency -= VAR_6;





 if (VAR_5->inversion == VAR_0)
  VAR_4->inversion = (FUNC_1 (VAR_5, 0x0f) & 2) ?
    VAR_1 : VAR_2;
 VAR_4->u.qpsk.fec_inner = FUNC_0 (VAR_5);


 return 0;
}
