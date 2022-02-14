
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct zl10353_state {int dummy; } ;
struct dvb_frontend {struct zl10353_state* demodulator_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct zl10353_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct zl10353_state *VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5;

 if (VAR_1)
  FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 *VAR_3 = (VAR_5 << 8) | VAR_5;

 return 0;
}
