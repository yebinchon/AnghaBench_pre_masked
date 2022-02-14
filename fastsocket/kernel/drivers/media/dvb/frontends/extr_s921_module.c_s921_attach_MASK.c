
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct s921_state* demodulator_priv; int ops; } ;
struct TYPE_2__ {struct s921_state* priv_dev; int * i2c_read; int * i2c_write; } ;
struct s921_state {struct dvb_frontend frontend; TYPE_1__ dev; struct i2c_adapter* i2c; int addr; } ;
struct s921_config {int i2c_address; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct s921_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

struct dvb_frontend* FUNC_3(const struct s921_config *VAR_5,
        struct i2c_adapter *VAR_6)
{

 struct s921_state *VAR_7;
 VAR_7 = FUNC_0(sizeof(struct s921_state), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->addr = VAR_5->i2c_address;
 VAR_7->i2c = VAR_6;
 VAR_7->dev.i2c_write = &VAR_4;
 VAR_7->dev.i2c_read = &VAR_3;
 VAR_7->dev.priv_dev = VAR_7;

 FUNC_2(&VAR_7->dev, VAR_1, ((void*)0));

 FUNC_1(&VAR_7->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
 VAR_7->frontend.demodulator_priv = VAR_7;
 return &VAR_7->frontend;
}
