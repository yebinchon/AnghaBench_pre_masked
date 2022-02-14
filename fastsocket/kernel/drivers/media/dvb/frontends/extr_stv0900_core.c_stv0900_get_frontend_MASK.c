
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_signal_info {int symbol_rate; scalar_t__ locked; int frequency; } ;
struct stv0900_internal {struct stv0900_signal_info* result; } ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int frequency; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
    struct dvb_frontend_parameters *VAR_1)
{
 struct stv0900_state *VAR_2 = VAR_0->demodulator_priv;
 struct stv0900_internal *VAR_3 = VAR_2->internal;
 enum fe_stv0900_demod_num VAR_4 = VAR_2->demod;
 struct stv0900_signal_info VAR_5 = VAR_3->result[VAR_4];

 VAR_1->frequency = VAR_5.locked ? VAR_5.frequency : 0;
 VAR_1->u.qpsk.symbol_rate = VAR_5.locked ? VAR_5.symbol_rate : 0;
 return 0;
}
