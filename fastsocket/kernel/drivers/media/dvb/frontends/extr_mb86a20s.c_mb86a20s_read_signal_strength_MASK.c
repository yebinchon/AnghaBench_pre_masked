
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct mb86a20s_state {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mb86a20s_state* demodulator_priv; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct mb86a20s_state*,int) ;
 int FUNC_2 (struct mb86a20s_state*,int,unsigned int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct mb86a20s_state *VAR_2 = VAR_0->demodulator_priv;
 unsigned VAR_3, VAR_4, VAR_5;
 u8 VAR_6;

 FUNC_0("\n");

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);


 VAR_3 = 0xfff;
 VAR_4 = 0;
 do {
  VAR_5 = (VAR_3 + VAR_4) / 2;
  FUNC_2(VAR_2, 0x04, 0x1f);
  FUNC_2(VAR_2, 0x05, VAR_5 >> 8);
  FUNC_2(VAR_2, 0x04, 0x20);
  FUNC_2(VAR_2, 0x04, VAR_5);

  VAR_6 = FUNC_1(VAR_2, 0x02);
  if (VAR_6 & 0x08)
   VAR_4 = (VAR_3 + VAR_4) / 2;
  else
   VAR_3 = (VAR_3 + VAR_4) / 2;
  if (VAR_3 - VAR_4 < 4) {
   *VAR_1 = (((VAR_3 + VAR_4) / 2) * 65535) / 4095;
   break;
  }
 } while (1);

 FUNC_0("signal strength = %d\n", *VAR_1);

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);

 return 0;
}
