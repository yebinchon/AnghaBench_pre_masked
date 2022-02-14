
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5h1420_state {int CON_1_val; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;


 int FUNC_0 (struct s5h1420_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 struct s5h1420_state* VAR_1 = VAR_0->demodulator_priv;
 VAR_1->CON_1_val = 0x12;
 return FUNC_0(VAR_1, 0x02, VAR_1->CON_1_val);
}
