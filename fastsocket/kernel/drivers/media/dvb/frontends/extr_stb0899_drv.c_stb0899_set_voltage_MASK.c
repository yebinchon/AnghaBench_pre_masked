
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4, fe_sec_voltage_t VAR_5)
{
 struct stb0899_state *VAR_6 = VAR_4->demodulator_priv;

 switch (VAR_5) {
 case 130:
  FUNC_0(VAR_6, VAR_1, 0x82);
  FUNC_0(VAR_6, VAR_2, 0x02);
  FUNC_0(VAR_6, VAR_3, 0x00);
  break;
 case 129:
  FUNC_0(VAR_6, VAR_1, 0x02);
  FUNC_0(VAR_6, VAR_2, 0x02);
  FUNC_0(VAR_6, VAR_3, 0x82);
  break;
 case 128:
  FUNC_0(VAR_6, VAR_1, 0x82);
  FUNC_0(VAR_6, VAR_2, 0x82);
  FUNC_0(VAR_6, VAR_3, 0x82);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
