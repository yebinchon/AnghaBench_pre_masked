
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va1j5jf8007t_state {int tune_state; } ;
struct dvb_frontend {struct va1j5jf8007t_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct va1j5jf8007t_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct va1j5jf8007t_state *VAR_2;

 VAR_2 = VAR_1->demodulator_priv;
 VAR_2->tune_state = VAR_0;

 return FUNC_0(VAR_2, 0);
}
