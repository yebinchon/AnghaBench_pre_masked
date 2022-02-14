
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct atbm_state* demodulator_priv; } ;
struct atbm_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atbm_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct atbm_state *VAR_3 = VAR_1->demodulator_priv;

 return FUNC_0(VAR_3, VAR_0, VAR_2 ? 1 : 0);
}
