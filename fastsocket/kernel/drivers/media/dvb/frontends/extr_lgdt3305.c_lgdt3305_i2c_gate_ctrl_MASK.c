
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lgdt3305_state {TYPE_1__* cfg; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ deny_i2c_rptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct lgdt3305_state *VAR_3 = VAR_1->demodulator_priv;

 if (VAR_3->cfg->deny_i2c_rptr)
  return 0;

 FUNC_0("(%d)\n", VAR_2);

 return FUNC_1(VAR_3, VAR_0, 5,
        VAR_2 ? 0 : 1);
}
