
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0288_state {int dummy; } ;
struct dvb_frontend {struct stv0288_state* demodulator_priv; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct stv0288_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, fe_sec_tone_mode_t VAR_3)
{
 struct stv0288_state *VAR_4 = VAR_2->demodulator_priv;

 switch (VAR_3) {
 case 128:
  if (FUNC_0(VAR_4, 0x05, 0x10))
   return -VAR_1;
 break;

 case 129:
  if (FUNC_0(VAR_4, 0x05, 0x12))
   return -VAR_1;
 break;

 default:
  return -VAR_0;
 }
 return 0;
}
