
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24116_state* demodulator_priv; } ;
struct cx24116_state {int dnxt; int dcur; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct cx24116_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_0(&VAR_1->dcur, &VAR_1->dnxt, sizeof(VAR_1->dcur));
}
