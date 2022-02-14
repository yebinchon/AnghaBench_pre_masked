
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mb86a20s_state {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mb86a20s_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct mb86a20s_state*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5, fe_status_t *VAR_6)
{
 struct mb86a20s_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8;

 FUNC_0("\n");
 *VAR_6 = 0;

 if (VAR_5->ops.i2c_gate_ctrl)
  VAR_5->ops.i2c_gate_ctrl(VAR_5, 0);
 VAR_8 = FUNC_1(VAR_7, 0x0a) & 0xf;
 if (VAR_5->ops.i2c_gate_ctrl)
  VAR_5->ops.i2c_gate_ctrl(VAR_5, 1);

 if (VAR_8 >= 2)
  *VAR_6 |= VAR_2;

 if (VAR_8 >= 4)
  *VAR_6 |= VAR_0;

 if (VAR_8 >= 5)
  *VAR_6 |= VAR_4;

 if (VAR_8 >= 7)
  *VAR_6 |= VAR_3;

 if (VAR_8 >= 8)
  *VAR_6 |= VAR_1;

 FUNC_0("val = %d, status = 0x%02x\n", VAR_8, *VAR_6);

 return 0;
}
