
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stv0299_state {int dummy; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
typedef int s32 ;


 int FUNC_0 (struct stv0299_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct stv0299_state* VAR_2 = VAR_0->demodulator_priv;

 s32 VAR_3 = 0xffff - ((FUNC_0 (VAR_2, 0x24) << 8)
      | FUNC_0 (VAR_2, 0x25));
 VAR_3 = 3 * (VAR_3 - 0xa100);
 *VAR_1 = (VAR_3 > 0xffff) ? 0xffff : (VAR_3 < 0) ? 0 : VAR_3;

 return 0;
}
