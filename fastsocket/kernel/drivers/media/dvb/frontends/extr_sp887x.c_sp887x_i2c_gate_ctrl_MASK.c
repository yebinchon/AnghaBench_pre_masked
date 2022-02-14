
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp887x_state {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;


 int FUNC_0 (struct sp887x_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct sp887x_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  return FUNC_0(VAR_2, 0x206, 0x001);
 } else {
  return FUNC_0(VAR_2, 0x206, 0x000);
 }
}
