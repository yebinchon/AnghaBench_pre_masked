
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusbdecfe_state {int voltage; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_1, fe_sec_voltage_t VAR_2)
{
 struct ttusbdecfe_state* VAR_3 = (struct ttusbdecfe_state*) VAR_1->demodulator_priv;

 switch (VAR_2) {
 case 129:
  VAR_3->voltage = 13;
  break;
 case 128:
  VAR_3->voltage = 18;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
