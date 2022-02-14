
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sp887x_state {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;


 int FUNC_0 (struct sp887x_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct sp887x_state* VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = FUNC_0(VAR_2, 0xc0c);
 if (*VAR_1 == 0xfff)
  *VAR_1 = ~0;

 return 0;
}
