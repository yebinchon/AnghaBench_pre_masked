
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10023_state {int dummy; } ;
struct dvb_frontend {struct tda10023_state* demodulator_priv; } ;


 int FUNC_0 (struct tda10023_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 struct tda10023_state* VAR_1 = VAR_0->demodulator_priv;

 FUNC_0 (VAR_1, 0x1b, 0x02);
 FUNC_0 (VAR_1, 0x00, 0x80);

 return 0;
}
