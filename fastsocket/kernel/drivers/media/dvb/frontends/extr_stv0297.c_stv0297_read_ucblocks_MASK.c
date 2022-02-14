
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0297_state {int dummy; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0297_state*,int) ;
 int FUNC_1 (struct stv0297_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 * VAR_1)
{
 struct stv0297_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_1(VAR_2, 0xDF, 0x03, 0x03);

 *VAR_1 = (FUNC_0(VAR_2, 0xD5) << 8)
  | FUNC_0(VAR_2, 0xD4);

 FUNC_1(VAR_2, 0xDF, 0x03, 0x02);
 FUNC_1(VAR_2, 0xDF, 0x03, 0x01);

 return 0;
}
