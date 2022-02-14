
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct lgdt3304_state* demodulator_priv; int ops; } ;
struct lgdt3304_state {struct dvb_frontend frontend; struct i2c_adapter* i2c; int addr; } ;
struct lgdt3304_config {int i2c_address; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lgdt3304_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;

struct dvb_frontend* FUNC_2(const struct lgdt3304_config *VAR_2,
        struct i2c_adapter *VAR_3)
{

 struct lgdt3304_state *VAR_4;
 VAR_4 = FUNC_0(sizeof(struct lgdt3304_state), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->addr = VAR_2->i2c_address;
 VAR_4->i2c = VAR_3;

 FUNC_1(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;
}
