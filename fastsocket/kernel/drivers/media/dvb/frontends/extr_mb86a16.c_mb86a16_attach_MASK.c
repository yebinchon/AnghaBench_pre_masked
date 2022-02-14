
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int set_voltage; } ;
struct dvb_frontend {TYPE_1__ ops; struct mb86a16_state* demodulator_priv; } ;
struct mb86a16_state {struct dvb_frontend frontend; struct mb86a16_config const* config; struct i2c_adapter* i2c_adap; } ;
struct mb86a16_config {int set_voltage; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mb86a16_state*) ;
 struct mb86a16_state* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mb86a16_state*,int,int*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

struct dvb_frontend *FUNC_4(const struct mb86a16_config *VAR_2,
        struct i2c_adapter *VAR_3)
{
 u8 VAR_4 = 0;
 struct mb86a16_state *VAR_5 = ((void*)0);

 VAR_5 = FUNC_1(sizeof(struct mb86a16_state), VAR_0);
 if (VAR_5 == ((void*)0))
  goto error;

 VAR_5->config = VAR_2;
 VAR_5->i2c_adap = VAR_3;

 FUNC_2(VAR_5, 0x7f, &VAR_4);
 if (VAR_4 != 0xfe)
  goto error;

 FUNC_3(&VAR_5->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;
 VAR_5->frontend.ops.set_voltage = VAR_5->config->set_voltage;

 return &VAR_5->frontend;
error:
 FUNC_0(VAR_5);
 return ((void*)0);
}
