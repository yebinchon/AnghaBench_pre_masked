
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp8psk_fe_state {int status_check_interval; scalar_t__ lock; } ;
struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gp8psk_fe_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_5, fe_status_t *VAR_6)
{
 struct gp8psk_fe_state *VAR_7 = VAR_5->demodulator_priv;
 FUNC_0(VAR_7);

 if (VAR_7->lock)
  *VAR_6 = VAR_1 | VAR_3 | VAR_4 | VAR_2 | VAR_0;
 else
  *VAR_6 = 0;

 if (*VAR_6 & VAR_1)
  VAR_7->status_check_interval = 1000;
 else
  VAR_7->status_check_interval = 100;
 return 0;
}
