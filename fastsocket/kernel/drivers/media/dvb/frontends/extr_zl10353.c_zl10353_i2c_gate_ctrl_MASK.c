
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ disable_i2c_gate_ctrl; } ;
struct zl10353_state {TYPE_1__ config; } ;
struct dvb_frontend {struct zl10353_state* demodulator_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct zl10353_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3 = 0x0a;

 if (VAR_2->config.disable_i2c_gate_ctrl) {


  return 0;
 }

 if (VAR_1)
  VAR_3 |= 0x10;

 return FUNC_0(VAR_0, 0x62, VAR_3);
}
