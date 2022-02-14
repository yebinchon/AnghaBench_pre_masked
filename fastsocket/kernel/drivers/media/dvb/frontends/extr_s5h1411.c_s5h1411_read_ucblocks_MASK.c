
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5h1411_state {int dummy; } ;
struct dvb_frontend {struct s5h1411_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5h1411_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct s5h1411_state *VAR_3 = VAR_1->demodulator_priv;

 *VAR_2 = FUNC_0(VAR_3, VAR_0, 0xc9);

 return 0;
}
