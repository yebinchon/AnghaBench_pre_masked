
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusbdecfe_state {int hi_band; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
typedef scalar_t__ fe_sec_tone_mode_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_1, fe_sec_tone_mode_t VAR_2)
{
 struct ttusbdecfe_state* VAR_3 = (struct ttusbdecfe_state*) VAR_1->demodulator_priv;

 VAR_3->hi_band = (VAR_0 == VAR_2);

 return 0;
}
