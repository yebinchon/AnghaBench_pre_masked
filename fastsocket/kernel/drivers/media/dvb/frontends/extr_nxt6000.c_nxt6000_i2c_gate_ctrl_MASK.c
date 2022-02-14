
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, int VAR_2)
{
 struct nxt6000_state* VAR_3 = VAR_1->demodulator_priv;

 if (VAR_2) {
  return FUNC_0(VAR_3, VAR_0, 0x01);
 } else {
  return FUNC_0(VAR_3, VAR_0, 0x00);
 }
}
