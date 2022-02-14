
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; scalar_t__ max_drift; scalar_t__ step_size; } ;
struct dvb_frontend {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
 struct dvb_frontend_tune_settings *VAR_1)
{
 VAR_1->min_delay_ms = 800;
 VAR_1->step_size = 0;
 VAR_1->max_drift = 0;

 return 0;
}
