
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, u16* VAR_2)
{
 struct nxt6000_state* VAR_3 = VAR_1->demodulator_priv;

 *VAR_2 = FUNC_0( VAR_3, VAR_0) / 8;

 return 0;
}
