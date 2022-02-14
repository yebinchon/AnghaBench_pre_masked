
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int symbol_rate; } ;
struct TYPE_5__ {TYPE_1__ qpsk; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; TYPE_3__ parameters; } ;
struct dvb_frontend {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_0,
         struct dvb_frontend_tune_settings* VAR_1)
{
 if (VAR_1->parameters.u.qpsk.symbol_rate > 20000000) {
  VAR_1->min_delay_ms = 50;
  VAR_1->step_size = 2000;
  VAR_1->max_drift = 8000;
 } else if (VAR_1->parameters.u.qpsk.symbol_rate > 12000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 1500;
  VAR_1->max_drift = 9000;
 } else if (VAR_1->parameters.u.qpsk.symbol_rate > 8000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 1000;
  VAR_1->max_drift = 8000;
 } else if (VAR_1->parameters.u.qpsk.symbol_rate > 4000000) {
  VAR_1->min_delay_ms = 100;
  VAR_1->step_size = 500;
  VAR_1->max_drift = 7000;
 } else if (VAR_1->parameters.u.qpsk.symbol_rate > 2000000) {
  VAR_1->min_delay_ms = 200;
  VAR_1->step_size = (VAR_1->parameters.u.qpsk.symbol_rate / 8000);
  VAR_1->max_drift = 14 * VAR_1->step_size;
 } else {
  VAR_1->min_delay_ms = 200;
  VAR_1->step_size = (VAR_1->parameters.u.qpsk.symbol_rate / 8000);
  VAR_1->max_drift = 18 * VAR_1->step_size;
 }

 return 0;
}
