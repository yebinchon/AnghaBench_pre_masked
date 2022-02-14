
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fec_inner; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {unsigned int frequency; TYPE_2__ u; int inversion; } ;
struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;
typedef unsigned int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24110_state*) ;
 int FUNC_1 (struct cx24110_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct cx24110_state *VAR_4 = VAR_2->demodulator_priv;
 s32 VAR_5; unsigned VAR_6;



 VAR_6 = FUNC_1 (VAR_4, 0x07) & 0x03;


 if (VAR_6==0) VAR_6=90999000L/2L;
 else if (VAR_6==1) VAR_6=60666000L;
 else if (VAR_6==2) VAR_6=80888000L;
 else VAR_6=90999000L;
 VAR_6>>=8;
 VAR_5 = VAR_6*(FUNC_1 (VAR_4, 0x44)&0x1f)+
       ((VAR_6*FUNC_1 (VAR_4, 0x45))>>8)+
       ((VAR_6*FUNC_1 (VAR_4, 0x46))>>16);

 VAR_3->frequency += VAR_5;
 VAR_3->inversion = (FUNC_1 (VAR_4, 0x22) & 0x10) ?
    VAR_1 : VAR_0;
 VAR_3->u.qpsk.fec_inner = FUNC_0 (VAR_4);

 return 0;
}
