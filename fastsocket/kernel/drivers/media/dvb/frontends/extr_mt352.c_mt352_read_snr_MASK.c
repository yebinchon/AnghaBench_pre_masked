
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt352_state {int dummy; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt352_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, u16* VAR_2)
{
 struct mt352_state* VAR_3 = VAR_1->demodulator_priv;

 u8 VAR_4 = FUNC_0 (VAR_3, VAR_0);
 *VAR_2 = (VAR_4 << 8) | VAR_4;

 return 0;
}
