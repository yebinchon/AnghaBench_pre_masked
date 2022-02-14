
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {int dummy; } ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;



 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
 fe_sec_voltage_t VAR_2)
{
 struct cx24123_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_3, 0x29) & ~0x40;

 switch (VAR_2) {
 case 130:
  FUNC_2("setting voltage 13V\n");
  return FUNC_1(VAR_3, 0x29, VAR_4 & 0x7f);
 case 129:
  FUNC_2("setting voltage 18V\n");
  return FUNC_1(VAR_3, 0x29, VAR_4 | 0x80);
 case 128:

  return 0;
 default:
  return -VAR_0;
 };

 return 0;
}
