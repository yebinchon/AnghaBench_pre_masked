
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct s921_state* demodulator_priv; int ops; } ;
struct s921_state {struct dvb_frontend frontend; struct i2c_adapter* i2c; struct s921_config const* config; } ;
struct s921_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct s921_state*) ;
 struct s921_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

struct dvb_frontend *FUNC_5(const struct s921_config *VAR_2,
        struct i2c_adapter *VAR_3)
{

 struct s921_state *VAR_4 =
  FUNC_2(sizeof(struct s921_state), VAR_0);

 FUNC_0("\n");
 if (VAR_4 == ((void*)0)) {
  FUNC_4("Unable to kzalloc\n");
  goto rcor;
 }


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;


 FUNC_3(&VAR_4->frontend.ops, &VAR_1,
  sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;

 return &VAR_4->frontend;

rcor:
 FUNC_1(VAR_4);

 return ((void*)0);
}
