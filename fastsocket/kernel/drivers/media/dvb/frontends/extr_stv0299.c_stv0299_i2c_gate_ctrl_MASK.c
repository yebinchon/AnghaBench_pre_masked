
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0299_state {int dummy; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0299_state*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct stv0299_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  FUNC_0(VAR_2, 0x05, 0xb5);
 } else {
  FUNC_0(VAR_2, 0x05, 0x35);
 }
 FUNC_1(1);
 return 0;
}
