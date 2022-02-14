
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int tone; scalar_t__ dst_type; int type_flags; int* tx_tuna; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct dst_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4, fe_sec_tone_mode_t VAR_5)
{
 struct dst_state *VAR_6 = VAR_4->demodulator_priv;

 VAR_6->tone = VAR_5;
 if (VAR_6->dst_type != VAR_1)
  return -VAR_3;

 switch (VAR_5) {
 case 129:
  if (VAR_6->type_flags & VAR_0)
      VAR_6->tx_tuna[2] = 0x00;
  else
      VAR_6->tx_tuna[2] = 0xff;
  break;

 case 128:
  VAR_6->tx_tuna[2] = 0x02;
  break;
 default:
  return -VAR_2;
 }
 return FUNC_0(VAR_6);
}
