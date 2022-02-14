
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct cx22702_state* demodulator_priv; } ;
struct cx22702_state {int dummy; } ;


 int FUNC_0 (struct cx22702_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct cx22702_state *VAR_2 = VAR_0->demodulator_priv;

 u16 VAR_3;
 if (FUNC_0(VAR_2, 0xE4) & 0x02) {

  VAR_3 = (FUNC_0(VAR_2, 0xDE) & 0x7F) << 7
   | (FUNC_0(VAR_2, 0xDF) & 0x7F);
 } else {

  VAR_3 = (FUNC_0(VAR_2, 0xDE) & 0x7F) << 8
   | FUNC_0(VAR_2, 0xDF);
 }
 *VAR_1 = ~VAR_3;

 return 0;
}
