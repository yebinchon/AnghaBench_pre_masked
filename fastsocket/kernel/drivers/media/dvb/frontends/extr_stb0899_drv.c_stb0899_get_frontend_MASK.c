
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stb0899_internal {int srate; } ;
struct stb0899_state {int verbose; struct stb0899_internal internal; } ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, struct dvb_frontend_parameters *VAR_2)
{
 struct stb0899_state *VAR_3 = VAR_1->demodulator_priv;
 struct stb0899_internal *VAR_4 = &VAR_3->internal;

 FUNC_0(VAR_3->verbose, VAR_0, 1, "Get params");
 VAR_2->u.qpsk.symbol_rate = VAR_4->srate;

 return 0;
}
