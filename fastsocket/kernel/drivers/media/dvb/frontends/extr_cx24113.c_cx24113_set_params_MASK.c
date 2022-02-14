
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct dvb_frontend {struct cx24113_state* tuner_priv; } ;
struct cx24113_state {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct cx24113_state*,int) ;
 int FUNC_2 (struct cx24113_state*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0,
  struct dvb_frontend_parameters *VAR_1)
{
 struct cx24113_state *VAR_2 = VAR_0->tuner_priv;

 u32 VAR_3 = 675;
 u32 VAR_4;

 VAR_4 = ((VAR_1->u.qpsk.symbol_rate/100) * VAR_3) / 1000;
 VAR_4 += (10000000/100) + 5;
 VAR_4 /= 10;
 VAR_4 += 1000;
 FUNC_1(VAR_2, VAR_4);

 FUNC_2(VAR_2, VAR_1->frequency);
 FUNC_3(5);
 return FUNC_0(VAR_0, &VAR_4);
}
