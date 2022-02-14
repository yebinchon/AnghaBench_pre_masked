
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gp8psk_fe_state {int snr; } ;
struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; } ;


 int FUNC_0 (struct gp8psk_fe_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16 *VAR_1)
{
 struct gp8psk_fe_state *VAR_2 = VAR_0->demodulator_priv;
 FUNC_0(VAR_2);

 *VAR_1 = VAR_2->snr;
 return 0;
}
