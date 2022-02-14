
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ dst_type; int minicmd; int* tx_tuna; } ;
typedef int fe_sec_mini_cmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct dst_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, fe_sec_mini_cmd_t VAR_3)
{
 struct dst_state *VAR_4 = VAR_2->demodulator_priv;

 if (VAR_4->dst_type != VAR_0)
  return -VAR_1;
 VAR_4->minicmd = VAR_3;
 switch (VAR_3) {
 case 129:
  VAR_4->tx_tuna[3] = 0x02;
  break;
 case 128:
  VAR_4->tx_tuna[3] = 0xff;
  break;
 }
 return FUNC_0(VAR_4);
}
