
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int symbol_rate_min; int symbol_rate_max; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct dvb_frontend {struct ves1820_state* demodulator_priv; TYPE_2__ ops; } ;
struct ves1820_state {struct dvb_frontend frontend; struct ves1820_config const* config; int pwm; struct i2c_adapter* i2c; int reg0; } ;
struct ves1820_config {int xin; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ves1820_state*) ;
 struct ves1820_state* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct ves1820_state*,int) ;

struct dvb_frontend* FUNC_5(const struct ves1820_config* VAR_4,
        struct i2c_adapter* VAR_5,
        u8 VAR_6)
{
 struct ves1820_state* VAR_7 = ((void*)0);


 VAR_7 = FUNC_1(sizeof(struct ves1820_state), VAR_0);
 if (VAR_7 == ((void*)0))
  goto error;


 VAR_7->reg0 = VAR_2[0];
 VAR_7->config = VAR_4;
 VAR_7->i2c = VAR_5;
 VAR_7->pwm = VAR_6;


 if ((FUNC_4(VAR_7, 0x1a) & 0xf0) != 0x70)
  goto error;

 if (VAR_1)
  FUNC_3("ves1820: pwm=0x%02x\n", VAR_7->pwm);


 FUNC_2(&VAR_7->frontend.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
 VAR_7->frontend.ops.info.symbol_rate_min = (VAR_7->config->xin / 2) / 64;
 VAR_7->frontend.ops.info.symbol_rate_max = (VAR_7->config->xin / 2) / 4;
 VAR_7->frontend.demodulator_priv = VAR_7;

 return &VAR_7->frontend;

error:
 FUNC_0(VAR_7);
 return ((void*)0);
}
