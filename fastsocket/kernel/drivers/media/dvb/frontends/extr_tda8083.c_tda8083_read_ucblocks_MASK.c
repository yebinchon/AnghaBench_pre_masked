
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda8083_state {int dummy; } ;
struct dvb_frontend {struct tda8083_state* demodulator_priv; } ;


 int FUNC_0 (struct tda8083_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = FUNC_0(VAR_2, 0x0f);
 if (*VAR_1 == 0xff)
  *VAR_1 = 0xffffffff;

 return 0;
}
