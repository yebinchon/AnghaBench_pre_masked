
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va1j5jf8007t_state {int tune_state; } ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int
FUNC_1(struct dvb_frontend *VAR_3, fe_status_t *VAR_4)
{
 struct va1j5jf8007t_state *VAR_5;

 VAR_5 = VAR_3->demodulator_priv;

 switch (VAR_5->tune_state) {
 case 131:
 case 130:
 case 133:
  *VAR_4 = 0;
  return 0;


 case 129:
 case 132:
 case 134:
  *VAR_4 |= VAR_2;
  return 0;

 case 128:
  *VAR_4 |= VAR_2 | VAR_0 | VAR_1;
  return 0;
 }

 FUNC_0();
}
