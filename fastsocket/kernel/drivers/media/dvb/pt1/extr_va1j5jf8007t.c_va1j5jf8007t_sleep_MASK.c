
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va1j5jf8007t_state {int dummy; } ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; } ;


 int FUNC_0 (struct va1j5jf8007t_state*) ;
 int FUNC_1 (struct va1j5jf8007t_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct va1j5jf8007t_state *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->demodulator_priv;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_1, 1);
}
