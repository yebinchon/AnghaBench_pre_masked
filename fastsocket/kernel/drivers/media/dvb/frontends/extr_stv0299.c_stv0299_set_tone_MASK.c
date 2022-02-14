
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv0299_state {int dummy; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct stv0299_state*,int) ;
 scalar_t__ FUNC_1 (struct stv0299_state*,int) ;
 int FUNC_2 (struct stv0299_state*,int,int) ;

__attribute__((used)) static int FUNC_3 (struct dvb_frontend* VAR_2, fe_sec_tone_mode_t VAR_3)
{
 struct stv0299_state* VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5;

 if (FUNC_1 (VAR_4, 100) < 0)
  return -VAR_1;

 VAR_5 = FUNC_0 (VAR_4, 0x08);

 switch (VAR_3) {
 case 128:
  return FUNC_2 (VAR_4, 0x08, VAR_5 | 0x3);

 case 129:
  return FUNC_2 (VAR_4, 0x08, (VAR_5 & ~0x3) | 0x02);

 default:
  return -VAR_0;
 }
}
