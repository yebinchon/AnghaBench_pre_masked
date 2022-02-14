
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zl10353_reset_attach ;
typedef int u8 ;
struct TYPE_2__ {int clock_ctl_1; int pll_0; scalar_t__ parallel_ts; } ;
struct zl10353_state {TYPE_1__ config; } ;
struct dvb_frontend {struct zl10353_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct zl10353_state*,int) ;
 int FUNC_2 (struct dvb_frontend*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct zl10353_state *VAR_2 = VAR_1->demodulator_priv;
 u8 VAR_3[6] = { 0x50, 0x03, 0x64, 0x46, 0x15, 0x0F };
 int VAR_4 = 0;

 if (VAR_0)
  FUNC_0(VAR_1);
 if (VAR_2->config.parallel_ts)
  VAR_3[2] &= ~0x20;
 if (VAR_2->config.clock_ctl_1)
  VAR_3[3] = VAR_2->config.clock_ctl_1;
 if (VAR_2->config.pll_0)
  VAR_3[4] = VAR_2->config.pll_0;


 if (FUNC_1(VAR_2, 0x50) != VAR_3[1] ||
     FUNC_1(VAR_2, 0x51) != VAR_3[2]) {
  VAR_4 = FUNC_2(VAR_1, VAR_3,
       sizeof(VAR_3));
  if (VAR_0)
   FUNC_0(VAR_1);
 }

 return 0;
}
