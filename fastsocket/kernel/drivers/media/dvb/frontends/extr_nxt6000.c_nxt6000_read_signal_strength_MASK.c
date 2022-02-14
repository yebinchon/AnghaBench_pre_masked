
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short u16 ;
struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_2, u16* VAR_3)
{
 struct nxt6000_state* VAR_4 = VAR_2->demodulator_priv;

 *VAR_3 = (short) (511 -
  (FUNC_0(VAR_4, VAR_0) +
  ((FUNC_0(VAR_4, VAR_1) & 0x03) << 8)));

 return 0;
}
