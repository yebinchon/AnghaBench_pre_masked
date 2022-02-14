
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt352_state {int dummy; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt352_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_2, u16* VAR_3)
{
 struct mt352_state* VAR_4 = VAR_2->demodulator_priv;


 u16 VAR_5 = ((FUNC_0(VAR_4, VAR_1) & 0x0f) << 12) |
  (FUNC_0(VAR_4, VAR_0) << 4);


 *VAR_3 = ~VAR_5;
 return 0;
}
