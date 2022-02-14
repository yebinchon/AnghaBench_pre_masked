
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0297_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct stv0297_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  FUNC_0(VAR_2, 0x87, 0x78);
  FUNC_0(VAR_2, 0x86, 0xc8);
 }

 return 0;
}
