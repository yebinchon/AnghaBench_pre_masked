
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ves1x93_state {int dummy; } ;
struct dvb_frontend {struct ves1x93_state* demodulator_priv; } ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;



 int FUNC_0 (struct ves1x93_state*,int,int) ;

__attribute__((used)) static int FUNC_1 (struct dvb_frontend* VAR_1, fe_sec_voltage_t VAR_2)
{
 struct ves1x93_state* VAR_3 = VAR_1->demodulator_priv;

 switch (VAR_2) {
 case 130:
  return FUNC_0 (VAR_3, 0x1f, 0x20);
 case 129:
  return FUNC_0 (VAR_3, 0x1f, 0x30);
 case 128:
  return FUNC_0 (VAR_3, 0x1f, 0x00);
 default:
  return -VAR_0;
 }
}
